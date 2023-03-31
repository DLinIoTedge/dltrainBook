
# 1. Python code to use GPU device
 
 ##  1.1  tst1.py 
  
import tensorflow as tf1
import tensorflow as tf2

 Matrix Multiplicaiton is using GPU device gpu:0. 
 tf1.device('/gpu:0') is  allocating gpu:0 device to tf1 and   matrix multiplication is using  gpu:0 .  Same is shown in " c = tf1.matmul(a, b)" 

 Matrix addition is using GPU device gpu:1. 
 tf1.device('/gpu:1') is  allocating gpu:0 device to tf2 and   matrix addition is using  gpu:1 .  Same is shown in "   c1 = tf2.matadd(a1, b1)" 
 
 
 
 ##  1.2  tst3.py 
  
import tensorflow as tf
import time

time_matmul(x) is a function and it is forced to  use CPU and also after that GPU is used to compute matrix multiplication.  time package is used and this is help ful to print time taken by CPU and also GPU to multiply 1000 x 1000 matrix with another 1000 x 1000 matix. 
 
 
  ##  1.3  tst4.py 
  
import tensorflow as tf
import time

d in ['/gpu:2', '/gpu:3']: is using  gpu devices 2  and 3 to perform append task a 
addition is done in cpu device.
 
# 2. C++ code to use GPU device
  
 ##  2.1  addincpu.cpp
  g++ is used to run above given c++ file in cpu. 
 
 g++ addincpu.cpp -o add <br>
 ./add  <br>
 hi...Max error: 0 <br>


export PATH=/usr/local/cuda-10.2/bin:$PATH <br>
Above provides access to nvcc which is tool to create excutable in gpu <br>

 nvcc addincpu.cpp -o add <br>
 ./add  <br>
 hi...Max error: 0 <br>

 
 Above ode  runs on  CPU  and it is called as  host code
 
  
 ##  2.2  addingpu.cu  <br>
  .
  CUDA code is used to run above given file in gpu device.   <br>
  nvcc is used to create executable file from .cu file
  
   nvcc addingpu.cu -o add <br>
 ./add  <br>
 hi...Max error: 0 <br>
 
  
  nvprof ./add <br>
  Above provides profile information on excutable file
  
  ==3023== NVPROF is profiling process 3023, command: ./add <br>
Max error: 0 <br>
==3023== Profiling application: ./add <br>
==3023== Profiling result:  <br>
|
        |	Type           | Time(%) | Time     | 	Calls  |	Avg   	  |      Min |  	Max   | Name                     | <br>
       | GPU activities: | 100.00% | 68.815ms |     1   | 68.815ms | 68.815ms | 68.815ms| add(int, float*, float*) |<br>


  
   ![image](https://user-images.githubusercontent.com/58679469/229171538-cc2a6003-f07d-4e29-8128-603b3c0267da.png)
   
Using a multi-dimensional block means that we have to be careful about distributing this number of threads among all the dimensions. In a 1D block, we can set 1024 threads at most in the x axis, but in a 2D block, if you set 2 as the size of y, you cannot exceed 512 for the x

For example, 
dim3 threadsPerBlock(1024, 1, 1) is allowed,  <br>
as well as dim3 threadsPerBlock(512, 2, 1),  <br>
but not dim3 threadsPerBlock(256, 3, 2).<br>

  
  
  ## 2.2.1  add
  Kernel function add is used to perform vector addition in gpu.  <br>
  add<<<1, 256>>>(N, x, y);  is using 1 block and its size is 256 threads   <br>
  Where N is lenght of vector x and y. These N,x,y are inputs.  <br>
  Ouput is stored in y vector ( y = x+y )
  
  ## 2.2.2  addT
  Kernel function addT is used to perform vector addition in gpu.  <br>
  addT<<<2, 32>>>(N, x, y);  is using 2 blocks and blockSize is 32 threads   <br>
  Where N is lenght of vector x and y. These N,x,y are inputs.  <br>
  Ouput is stored in y vector ( y = x+y )
  
  
   ## 2.2.3  addBT
  Kernel function add is used to perform vector addition in gpu.  <br>
  
  ![image](https://user-images.githubusercontent.com/58679469/229173375-a1c4ba72-9d7e-4cfd-8dc1-8f2cfed69986.png)

int blockSize = 256; <br> 
int numBlocks = (N + blockSize - 1) / blockSize; <br> 
addBT<<<numBlocks, blockSize>>>(N, x, y); <br> 


  
  int blockSize = 32;  <br>
   int numBlocks = (N + blockSize - 1) / blockSize;  <br> 
  addBT<<<numBlocks, blockSize>>>(N, x, y);  is using numBlocks1 and blockSize is 32 threads  <br>
  Where N is lenght of vector x and y. These N,x,y are inputs. <br>
  Ouput is stored in y vector ( y = x+y )
  
  
  
  
  # Reference
  1. https://developer.nvidia.com/blog/even-easier-introduction-cuda/ <br> 
