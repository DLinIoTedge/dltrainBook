



    sudo apt install software-properties-common
    sudo add-apt-repository ppa:ubuntu-toolchain-r/test

  For power 9

    sudo apt install software-properties-common
    sudo add-apt-repository ppa:ubuntu-toolchain-r/test
    sudo apt install gcc-7 g++-7 gcc-8 g++-8 gcc-9 g++-9
    sudo apt install gcc-9 g++-9
    g++-9 FastTest.cpp Network_Fast.cpp MNISTRead.cpp FastSave.cpp -o Test.o
    cmake -D CMAKE_CXX_COMPILER=cd bin g++-9 ..
    cmake -D CMAKE_C_COMPILER=gcc-9 -D CMAKE_CXX_COMPILER=g++-9 ..
    cmake -D CMAKE_C_COMPILER=gcc-5 -D CMAKE_CXX_COMPILER=g++-5 ..
    ./bin/DLtrin jjnet train o

// Over write rxisting network' DLtrin jjnet train  <br>
// No over write rxisting network' DLtrin jjnet infer   <br>
// For data  to perform inference DLtrin jjnet infer 3   <br>
// only all 3 from data set DLtrin jjnet infer filename   <br>
// only raw ...768 byte... binary value   <br>

    ./bin/DLtrin jjnet infer img.raw
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

1. Start J22 andriod app in phone. 
2. Press Load in J722 android application and also make Android phone in WiFi (not in phone mode)  
3. Get IP address from Settigs -> WiFi 192.168.1.6
4. Give file name jjnet.dat
5. Enter IP address 192.168.1.6
6. Press Next in Phone
        
        
