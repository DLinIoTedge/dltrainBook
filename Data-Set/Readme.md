

# MNIST(Modified National Institute of Standards and Technology)


Dataset of 60,000 28x28 grayscale images of the 10 digits, along with a test set of 10,000 images. The original black and white images of NIST had been converted to grayscale in dimensions of 28*28 pixels in width and height, making a total of 784 pixels. Pixel values range from 0 to 255, where higher numbers indicate darkness and lower as lightness.

Pixel Value :   0 or 1   ( or 0 to 255 ?? )
Image size :   28 x 28
Number of images for  Training :  60000
Number of images for Testing :    10000

//tf.keras.datasets.mnist.load_data(path="mnist.npz")
(x_train, y_train), (x_test, y_test) = tf.keras.datasets.mnist.load_data(path="mnist.npz")

assert x_train.shape == (60000, 28, 28)
assert x_test.shape == (10000, 28, 28)
assert y_train.shape == (60000,)
assert y_test.shape == (10000,)


MNIST dataset were developed by Salakhutdinov, Ruslan and Murray, Iain in 2008 as a binarized version of the original MNIST dataset. Binarizing is done by sampling from a binomial distribution defined by the pixel values, originally used in deep belief networks(DBN) and variational autoencoders(VAE). The images are in grayscale format 28 x 28 pixels.

All the integers in the files are stored in the MSB first (high endian) format used by most non-Intel processors. Users of Intel processors and other low-endian machines must flip the bytes of the header.  There are 4 files:
train-images-idx3-ubyte: training set images 
train-labels-idx1-ubyte: training set labels 
t10k-images-idx3-ubyte:  test set images 
t10k-labels-idx1-ubyte:  test set labels
The training set contains 60000 examples, and the test set 10000 examples. First 5000 examples of the test set are taken from the original NIST training set. The last 5000 are taken from the original NIST test set. The first 5000 are cleaner and easier than the last 5000.

https://deepai.org/dataset/mnist


# RAINING SET LABEL FILE (train-labels-idx1-ubyte):
    [offset] [type]      	[value]      	[description] 
    0000 	32 bit integer  0x00000801(2049) magic number (MSB first) 
    0004 	32 bit integer  60000        	number of items 
    0008 	unsigned byte   ??           	label 
    0009 	unsigned byte   ??           	label 
    ........ 
    xxxx 	unsigned byte   ??           	label
    The labels values are 0 to 9.


# TRAINING SET IMAGE FILE (train-images-idx3-ubyte):
    [offset] [type]      	[value]      	[description] 
    0000 	32 bit integer  0x00000803(2051) magic number 
    0004 	32 bit integer  60000        	number of images 
    0008 	32 bit integer  28           	number of rows 
    0012 	32 bit integer  28           	number of columns 
    0016 	unsigned byte   ??           	pixel 
    0017 	unsigned byte   ??           	pixel 
    ........ 
    xxxx 	unsigned byte   ??           	pixel

Pixels are organized row-wise. Pixel values are 0 to 255. 0 means background (white), 255 means foreground (black).


# TEST SET LABEL FILE (t10k-labels-idx1-ubyte):
    [offset] [type]      	[value]      	[description] 
    0000 	32 bit integer  0x00000801(2049) magic number (MSB first) 
    0004 	32 bit integer  10000        	number of items 
    0008 	unsigned byte   ??           	label 
    0009 	unsigned byte   ??           	label 
    ........ 
    xxxx 	unsigned byte   ??           	label

The labels values are 0 to 9.

# TEST SET IMAGE FILE (t10k-images-idx3-ubyte):
    [offset] [type]      	[value]      	[description] 
    0000 	32 bit integer  0x00000803(2051) magic number 
    0004 	32 bit integer  10000        	number of images 
    0008 	32 bit integer  28           	number of rows 
    0012 	32 bit integer  28           	number of columns 
    0016 	unsigned byte   ??           	pixel 
    0017 	unsigned byte   ??           	pixel 
    ........ 
    xxxx 	unsigned byte   ??           	pixel

Pixels are organized row-wise. Pixel values are 0 to 255. 0 means background (white), 255 means foreground (black).

# THE IDX FILE FORMAT
IDX file format is a simple format for vectors and multidimensional matrices of various numerical types.
The basic format is
    magic number 
    size in dimension 0 
    size in dimension 1 
    size in dimension 2 
    ..... 

size in dimension N 
data
The magic number is an integer (MSB first). The first 2 bytes are always 0.
The third byte codes the type of the data: 
    0x08: unsigned byte 
    0x09: signed byte 
    0x0B: short (2 bytes) 
    0x0C: int (4 bytes) 
    0x0D: float (4 bytes) 
    0x0E: double (8 bytes)
    
 The 4-th byte codes the number of dimensions of the vector/matrix: 1 for vectors, 2 for matrices....  The sizes in each dimension are 4-byte integers (MSB first, high endian, like in most non-Intel processors). The data is stored like in a C array, i.e. the index in the last dimension changes the fastest.
 
 
 ![MNISTplus](https://user-images.githubusercontent.com/58679469/229864625-9eddb843-db9a-49f4-8b5b-fbc655cc191b.jpg)

 
 
 ![MNISTplus (1)](https://user-images.githubusercontent.com/58679469/229864773-63d58137-413a-46ea-8276-ac9e17801822.jpg)

 Dataset is vectorized and in Numpy format. Check here (Keras Datasets Documentation) for the reference. 
These datasets are stored in .npz file format.
https://stackoverflow.com/questions/39289285/how-to-create-a-image-dataset-just-like-mnist-dataset

#generate and save file
from PIL import Image
import os
import numpy as np

path_to_files = "./images/"    
vectorized_images = []

    for _, file in enumerate(os.listdir(path_to_files)):
       image = Image.open(path_to_files + file)
       image_array = np.array(image)
      vectorized_images.append(image_array)        
      # save as DataX or any other name. But the same element name is to be used while loading it back. 
    np.savez("./mnistlikedataset.npz",DataX=vectorized_images)

https://github.com/AxelThevenot/Python-Interface-to-Create-Handwritten-dataset/blob/master/README.md 





1. Read train-images-idx3-ubyte file
2. Read one file from Belarus data  file list
3. Change header in 1 with 60001 file instead of 60000
4. Appended item 2 in end of item 1
5. Do all in binary file open, file read and file write
6. After done with item 4 then write item 4 in to file  train-images-idx3-ubyteV1
7. Open and read  train-labels-idx1-ubyte
8. Add label infor at the end
9. Write  train-labels-idx1-ubyteV1


After done the above use use the following in DLtrain to train CNN in



After done with adding one file and tested then use all other files from Belarus data set

https://towardsdatascience.com/build-your-fully-configurable-interface-to-create-mnist-like-dataset-with-python-in-10-minutes-43ab414a875e 






