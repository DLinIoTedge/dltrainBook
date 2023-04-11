cmake_minimum_required(VERSION 3.10)
project(dltrain)

set(CMAKE_CXX_STANDARD 17)
include_directories(/hdr /srcTrain)
add_executable(dltrain main.cpp  CNN.cpp feedforward.cpp  matrix.cpp matrix.cpp MNISTRead.cpp)

