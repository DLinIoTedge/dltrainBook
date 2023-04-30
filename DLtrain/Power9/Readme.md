
# TalosTM II , IBM Power 9 Servers
Above machine is having IBM Power 9 CPU  and  had  Ubuntu 18.04 OS. <br>
TalosTM II   is used to build DLtrain and also train Deep Learning Networks by using DLtrain.

# gcc in Power 9 CPU

    sudo apt install software-properties-common
    sudo add-apt-repository ppa:ubuntu-toolchain-r/test
    sudo apt install software-properties-common
    sudo add-apt-repository ppa:ubuntu-toolchain-r/test
    sudo apt install gcc-7 g++-7 gcc-8 g++-8 gcc-9 g++-9
    sudo apt install gcc-9 g++-9
    
    
# Build DLtrain in Power  9 CPU

 CMakeLists.txt is having required lines to build DLtrain.
 
    g++-9 FastTest.cpp Network_Fast.cpp MNISTRead.cpp FastSave.cpp -o Test.o
    cmake -D CMAKE_CXX_COMPILER=cd bin g++-9 ..
    cmake -D CMAKE_C_COMPILER=gcc-9 -D CMAKE_CXX_COMPILER=g++-9 ..
    cmake -D CMAKE_C_COMPILER=gcc-5 -D CMAKE_CXX_COMPILER=g++-5 ..
  
  
  
  
  #  DLtrain
Attempting to make a convolutional neural network, without third party libraries. 

The config for the time being must be saved as "network_prop.txt" and must contain the properties "kernel", "num_layers", "layers". All values are comma seperated lists. "kernel" expects a list of 2, "num_layers" expects list of 1, "layers" expects list of size "num_layers". Always have the last layer have a size of 10, to work with numbers.
An example "network_prop.txt" is shown:
```
kernel: 4, 4
layers: 80, 20, 10
num_layers: 3
```
Execute the program with options as follows:
```
./<executable> [OPTIONS]
```
The available options are:
| Alias | Expected Value |
|--|--|
| -m | train/infer |
| -s |\< save-file name \>|
| -c | \< config-file name \> |
| -e | Number of epochs(optional, program will request it later on if not given) |
| -n | Number of images to use from dataset(optional default is 10000)|
| -d | \< path to the folder containing images-ubyte and labels-ubyte \>(optional default looks in Images directory)|

An example:
```
./DLtrain -m train -s NewNetwork.dat -c networkProf.txt -n 2000 -e 30 -d /home/user/datasets/mnist/Images/
```
In the above example the folder /home/user/datasets/mnist/Images/ would contain images-ubyte and labels-ubyte.

The dataset can be downloaded from [the mnist website](http://yann.lecun.com/exdb/mnist/).

Make sure that the images and labels files are named **images-ubyte** and **labels-ubyte** respectively.

The config file is only required if you do not provide an existing save for the network to load from.



 # Use DLtrain in Power 9 CPU
 
 jjnet  is having Deep learning Networks Model
 
Over write existing  DL network   
            DLtrain jjnet train

No over write existing DL network 
            DLtrain jjnet infer   

Perform inference by using  file number 3 in MNSIT data set
            DLtrain jjnet infer 3   
            
Use all files of  3 in MNSIT data set for inference. Where <filename> is having 768 bytes of binary value
            DLtrain jjnet infer <filename>   
 

  
    cd  C++NNFast
    rm -rf build
    mkdir build
    cd build
    cmake  -D CMAKE_C_COMPILER=gcc-9 -D CMAKE_CXX_COMPILER=g++-9 ..
    make
    cd ..

conf file is located in in  Dltrain root folder <br>
edit conf file <br>
eonf file is having Deep Learning Network model parameters <br>
    
DLtrain is used in the following to  train a given NN model in a conf file and also by using MNIST data set.

            bin/DLtrain  jjnet train  o   // overwrite existing network' o not zero
           bin/DLtrain jjnet train  //No overwrite existing network'

Inferencing is done by using  the following steps. 

          bin/DLtrain jjnet infer   // for data set for inference
          bin/DLtrain  jjnet infer 3  // only all 3 from data set

          bin/DLtrain  jjnet infer filename  // only raw ...768 bytes... binary value
          bin/DLtrain  jjnet infer img.raw



         ./bin/DLtrain conf train
          java -jar  toPhone/SndModel.jar

Following is used  to update Deep learning network Android Phone.
    
1. Start J7app in Android  phone. 
2. Press Load in J7app android application and also make Android phone in WiFi (not in phone mode)  
3. Get IP address from Settigs -> WiFi 192.168.1.6
4. Give file name jjnet.dat
5. Enter IP address 192.168.1.6
6. Press Next in Phone
        
        
# Reference

1. HDID003/May202020B/Dev/DeepLearning/oct16

