
# 1. Design DL Network  

 NN model is used.
 
 
![june20v3](https://user-images.githubusercontent.com/58679469/232184462-d4f8a2b3-c8c6-4c8e-8cc7-83c55957e7e7.png)

# 2.  Train DL Network

## 2.1 Device Query 

 ![june20v12](https://user-images.githubusercontent.com/58679469/232185280-c3b3a9de-2d91-4f85-8555-942b22893bff.png)


## 2.2 Use DLtrain
![june20v7](https://user-images.githubusercontent.com/58679469/232184544-96a7d232-8e42-4c27-9c12-7e6648cc73b8.png)

## 2.3 Check DL Network Size

![june20v4](https://user-images.githubusercontent.com/58679469/232184607-bd65b708-c35a-4d94-94fe-c2b20955c21c.png)

## 2.4 Validate DL Network

 ### 2.4.1 Display Number with Maximum Score
![june20v5](https://user-images.githubusercontent.com/58679469/232184643-fbc433ab-b03f-43c1-a370-cc046103b903.png)

### 2.4.2 Display Score for all numbers
![june20v9](https://user-images.githubusercontent.com/58679469/232184701-5d919e0f-e23b-412d-ae52-9da22359f5d8.png)

# 3. Build DLtrain for Jetson Nano

 ## 3.1  Get Source code
 
 ## 3.2  Cmake File
 
         #https://stackoverflow.com/questions/36551469/triggering-c11-support-in-nvcc-with-cmake
         cmake_minimum_required(VERSION 3.10.2)
         enable_language(CUDA)
         #set(CMAKE_CUDA_COMPILER "/usr/local/cuda-10.2/bin")
         include_directories(../hdr)
         add_executable(DLtrain ../srcTrain/CNN.cpp ../srcInfer/feedforward.cpp  ../srcInfer/matrix.cpp ../srcInfer/matrix.cpp             ../srcTrain/main.cpp ../srcInfer/MNISTRead.cpp)
         set_target_properties(DLtrain PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
         set_property(TARGET DLtrain PROPERTY CUDA_STANDARD 10)

  ## 3.3  Create DLtrain for Traning DL
  
    ### 3.3.1 cmake  
    
    for CPU
    
  ![june20v21](https://user-images.githubusercontent.com/58679469/232185413-dca3013f-3097-468a-baf3-e0bfd79b3db0.png)
  
   for GPU
   
   ![june20v25](https://user-images.githubusercontent.com/58679469/232185652-c80c738d-c554-4b90-8c7d-3a645dbdeed2.png)

 make 
![june20v26](https://user-images.githubusercontent.com/58679469/232185948-26e2f88f-33c5-47ed-93a0-e736c87c9a05.png)


  ### 3.3.2 make
  
  ![june20v22](https://user-images.githubusercontent.com/58679469/232185474-2ac9c3aa-ace6-4b5f-8083-a24ce67921db.png)
  
  ![june20v23](https://user-images.githubusercontent.com/58679469/232185500-476a3df6-9fb4-4148-b1d6-27475c5296cf.png)


  ## 3.4  cmake to create DLtrain for inference
  ![june20v17](https://user-images.githubusercontent.com/58679469/232185390-d6a18f3c-4431-4538-8374-2449943c2a24.png)

# 4. Use DLtrain to Train DL Network

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
./main.o -m train -s NewNetwork.dat -c network_config.txt -n 2000 -e 30 -d /home/user/datasets/mnist/Images/
```
In the above example the folder /home/user/datasets/mnist/Images/ would contain images-ubyte and labels-ubyte.

The dataset can be downloaded from [the mnist website](http://yann.lecun.com/exdb/mnist/).

Make sure that the images and labels files are named **images-ubyte** and **labels-ubyte** respectively.

The config file is only required if you do not provide an existing save for the network to load from.


![june20v27](https://user-images.githubusercontent.com/58679469/232186353-1ff1ff82-f551-474f-94c0-76b7ecd1af4a.png)




# Reference 
HDID003/May202020B/Dev/DeepLearning/DLtrain/C-ConvJune20/gpu/

