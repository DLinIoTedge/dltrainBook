#https://stackoverflow.com/questions/36551469/triggering-c11-support-in-nvcc-with-cmake
cmake_minimum_required(VERSION 3.10.2)
project(C++NNFast)
# cmake  -D CMAKE_CXX_COMPILER=g++-9 ..
#set(CMAKE_CXX_FLAGS "-std=c++09 -Wall")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=g++09 -Wall -Wextra -pedantic")
set(CMAKE_CXX_STANDARD 17)     
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_BINARY_DIR "./bin")
message("CMAKE_CXX_FLAGS_DEBUG is ${CMAKE_CXX_FLAGS_DEBUG}")
message("CMAKE_CXX_FLAGS_RELEASE is ${CMAKE_CXX_FLAGS_RELEASE}")
include_directories(../hdr)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
add_executable(DLinfer  ../srcInfer/feedforward.cpp  ../srcInfer/matrix.cpp ../srcInfer/matrix.cpp  ../srcInfer/infermain.cpp ../srcInfer/MNISTRead.cpp)
set_target_properties(DLinfer PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set_target_properties(DLinfer PROPERTIES OUTPUT_NAME DLinfer${BUILD_POSTFIX})
          
