
# 1. Design DL Network  

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


# Reference 
HDID003/May202020B/Dev/DeepLearning/DLtrain/C-ConvJune20/gpu/

