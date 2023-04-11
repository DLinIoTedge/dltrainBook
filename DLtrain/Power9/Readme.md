# Deep Learning Accelerator
IBM Watson Machine Learning Accelerator for Enterprise AI: Watson Machine Learning Accelerator, a new piece of Watson Machine Learning, makes deep learning and machine learning more accessible to your staff, and brings the benefits of AI into your business. It combines popular open source deep learning frameworks, efficient AI development tools, and accelerated IBM® Power Systems™ servers. 

Customer can deploy a fully optimized and supported AI platform that delivers blazing performance, proven dependability and resilience. Watson Machine Learning Accelerator is a complete environment for data science as a service, enabling your organization to bring AI applications into production. Enables rapid deployment : Includes most popular deep learning frameworks, including all required dependencies and files, precompiled and ready to deploy. The entire AI suite has been validated and optimized to run reliably on accelerated Power servers. Incorporates the most popular deep learning frameworks. Watson Machine Learning Accelerator gives access to Power-optimized versions of all of the most popular deep learning frameworks currently available, including TensorFlow, Caffe, and PyTorch. 

Watson Machine Learning Accelerator runs on IBM Power accelerated servers HPC, a platform that runs not only your deep learning but also a wide variety of HPC and High Performance Data Analytics workloads. Leverages unique capabilities of accelerated Power servers, delivering performance unattainable on commodity servers, Provides for hyper-parameter search and optimization, and elastic training to allocate the resources needed to optimize performance; and Distributed deep Learning provides for rapid insights at massive scale. Large model support facilitates the use of system memory with little to no performance impact, yielding significantly larger and more accurate deep learning models.



# TalosTM II  
Above machine is having IBM Power 9 CPU  and  had  Ubuntu 18.04 OS. <br>
alosTM II   is used to build DLtrain and also train Deep Learning Networks by using DLtrain.

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
 

    ./bin/DLtrain jjnet infer img.raw
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

