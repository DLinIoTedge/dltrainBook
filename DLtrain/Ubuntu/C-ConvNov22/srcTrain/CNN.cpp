#include "CNN.h"






//Backpropagates the error in the neurons, requires the expected values and the original img matrix
//(float* correct_out, Matrix img)
//Make sure the expected array is as big as the final layer of activation else segfault
void ConvNet::backpropogate(Matrix &correct, Matrix &image) {
    if(!isConstructed) {
        throw std::invalid_argument("Unconstructed network");
        return;
    }

    gradients[num_layers - 1] = (activations[num_layers - 1] - correct) ^ pre_sigmoid[num_layers - 1];
    for(int i = num_layers - 2; i >= 0; i--) {
        gradients[i] = (weights[i] * gradients[i + 1]) ^ pre_sigmoid[i];
    }

    float* flat  = gradients[0].flatten();
    
    Matrix gradient_matrix(layer_0_dimensions[0], layer_0_dimensions[1]);
    gradient_matrix.loadFromArray(flat);

    delete[] flat;

    kernel_gradient = kernel_gradient + image.convolve(gradient_matrix);
}

//Performs one itereation of gradient descent using the provided images, learning rate, and batch size
void ConvNet::descent(bool** images, char* labels, int num_images, float learning_rate, int epoch, int batch_size){
    if(!isConstructed) {
        throw std::invalid_argument("Unconstructed network");
        return;
    }

    int num_loops = num_images / batch_size;
    int sample_no;
//std::cout << " sjj7a \n"; 

    Matrix img(img_size, img_size);
    
//std::cout << " sjj7b \n"; 

    //Hardcoded values
    Matrix correct(10, 1);
    correct = correct * 0;
    int cp = 0;
    for(int i = 0; i < num_loops; i++) {
        kernel_gradient = kernel_gradient * 0;
//std::cout << " sjj7c \n"; 
        for(int j = 0; j < num_layers - 1; j++) {
//std::cout << " sjj7d\n";
            average_biases[j] = average_biases[j] * 0;
            average_weights[j] = average_weights[j] * 0;
        }
        for(int j = 0; j < batch_size; j++) {
//std::cout << " sjj7e\n";
            sample_no = (i * batch_size) + j;
//std::cout << sample_no;

//std::cout << " sjj7eb \n";
            img.loadFromArray(images[sample_no]);
            correct[labels[sample_no] - '0'][0] = 1;
      //std::cout << " sjj7fa \n";      
            feedforward(img);
            backpropogate(correct, img);

            correct[labels[sample_no] - '0'][0] = 0;

            for(int k = 0; k < num_layers - 1; k++) {
                average_biases[k] = average_biases[k] + gradients[k + 1];
                average_weights[k] = average_weights[k] + (activations[k] * (gradients[k + 1].transpose()));
            }
//std::cout << " sjj7f \n";
        }
//std::cout << " sjj7g \n";
        kernel = kernel - (kernel_gradient * (learning_rate / batch_size));
        for(int j = 0; j < num_layers - 1; j++) {
            weights[j] = weights[j] - (average_weights[j] * (learning_rate / batch_size));
            biases[j] = biases[j] - (average_biases[j] * (learning_rate / batch_size));
        }
        if((i * 100) / num_loops > cp) {
            cp += 1;
            std::cout << cp << "% | Epoch left: " << epoch << '\n';
        }
    }
}


