#https://stackoverflow.com/questions/36551469/triggering-c11-support-in-nvcc-with-cmake
cmake_minimum_required(VERSION 3.10.2)
enable_language(CUDA)
#set(CMAKE_CUDA_COMPILER "/usr/local/cuda-10.2/bin")
include_directories(../hdr)
add_executable(DLtrain ../srcTrain/CNN.cpp ../srcInfer/feedforward.cpp  ../srcInfer/matrix.cpp ../srcInfer/matrix.cpp  ../srcTrain/main.cpp ../srcInfer/MNISTRead.cpp)
set_target_properties(DLtrain PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set_property(TARGET DLtrain PROPERTY CUDA_STANDARD 10)
