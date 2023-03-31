
 
 # File Name:  tst1.py 
  
import tensorflow as tf1
import tensorflow as tf2

 Matrix Multiplicaiton is using GPU device gpu:0. 
 tf1.device('/gpu:0') is  allocating gpu:0 device to tf1 and   matrix multiplication is using  gpu:0 .  Same is shown in " c = tf1.matmul(a, b)" 

 Matrix addition is using GPU device gpu:1. 
 tf1.device('/gpu:1') is  allocating gpu:0 device to tf2 and   matrix addition is using  gpu:1 .  Same is shown in "   c1 = tf2.matadd(a1, b1)" 
 
 
 
 # File Name:  tst3.py 
  
import tensorflow as tf
import time

time_matmul(x) is a function and it is forced to  use CPU and also after that GPU is used to compute matrix multiplication.  time package is used and this is help ful to print time taken by CPU and also GPU to multiply 1000 x 1000 matrix with another 1000 x 1000 matix. 
 
 
 # File Name:  tst4.py 
  
import tensorflow as tf
import time

d in ['/gpu:2', '/gpu:3']: is using  gpu devices 2  and 3 to perform append task a
addition is done in cpu device.
 
