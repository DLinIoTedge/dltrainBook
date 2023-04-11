#ifndef CNN
#define CNN

#include "matrix.h"
#include <fstream>
#include <string.h>
#include <algorithm>
//to display progress
#include <iostream>
#include <random>

class ConvNet {
public:
    int img_size = 28;

    bool isConstructed;

    int num_layers;
    int* layers;
    int layer_0_dimensions[2];

    //Same here
    Matrix *weights, *biases, *activations, *gradients, *pre_sigmoid,
            *average_weights, *average_biases;
    Matrix kernel, kernel_gradient;

    ConvNet();

    //Constructor, constructs kernel and create the rest of the matrices, also
    //initializes the first layer of the network depending on the convolved size
    void construct();

    //Gives random values to all weights, biases and kernel using a normal distribuition
    void makeCNNRandom();

    //Convolves and feedforward one image of type (Matrix)
    void feedforward(Matrix &img);

    //Backpropagates the error in the neurons, requires the expected values and the original img matrix
    //(float* correct_out, Matrix img)
    //Make sure the expected array is as big as the final layer of activation else segfault
    void backpropogate(Matrix &expected, Matrix &img);

    //Performs one itereation of gradient descent using the provided images, learning rate, and batch size
    void descent(bool** images, char* labels, int num_images, float learning_rate, int epch = -1, int batch_size=8);

    //Saves the entire network to a file
    void writeToFile(const char* fname);

    //Loads the network from a file
    void loadFromFile(const char* fname);

    //Loads the network configuration
    void loadConfig(const char* fname);
};

#endif
