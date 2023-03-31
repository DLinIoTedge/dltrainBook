
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
  
 ##  2.2  addingpu.cu
  CUDA code is used to run above given file in gpu device. 
  
  
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
  
  int blockSize = 32;  <br>
   int numBlocks = (N + blockSize - 1) / blockSize;  <br> 
  addBT<<<numBlocks, blockSize>>>(N, x, y);  is using numBlocks1 and blockSize is 32 threads  <br>
  Where N is lenght of vector x and y. These N,x,y are inputs. <br>
  Ouput is stored in y vector ( y = x+y )
  
  
  
  
