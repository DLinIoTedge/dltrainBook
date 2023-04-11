#ifndef Network_Fast
#define Network_Fast

#include <string.h>
#include <iostream>
#include <math.h>

class NetworkFast {
public:
    static int num_layers;
    int i, j, k, *sizes;
    float **bias;
    float **activations;
    float **dels;
    float ***weights;
    int prev_epoch;
    //------------------------
    NetworkFast(int size, const int (&topo)[]);
    float sigmoid(float x);
    float sigmoidprime(float x);
    void backpropagate(unsigned char in[], int correctvals[10]);
    void descent(float, unsigned char **d, int*);
    void infer(unsigned char in[784], float o[10]);
    int inferCorrect(unsigned char in[784]);
    void setLayer(float*, float**, int);
    int getSize(int x) { return sizes[x]; }
    int numLayers() { return num_layers; }
    float*** getWeightPointer();
    float** getBiasPointer();
    ~NetworkFast();
};

#endif
