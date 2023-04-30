
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

