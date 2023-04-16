# Advanced Vector Extensions

AVX instructions support both 128-bit and 256-bit SIMD. The 128-bit versions 
can be useful to improve old code without needing to widen the vectorization, 
and avoid the penalty of going from SSE to AVX, they are 
also faster on some early AMD implementations of AVX. This mode is 
sometimes known as AVX-128.

            uname  −i
              X86  64
            
            lsb release   −a
              No  LSB   modules   are  available.
              Distributor ID :  Ubuntu
              Description  :    Ubuntu   1 4 . 0 4 . 5   LTS
              Release :         14.04
              Codename :        trusty

 How   to   check   given  system provide support for   AVX  or   not ? <br>
 Code is given in AVX folder and output file stored in r1.out
 
            g++  checkAVX . cpp    
            g++  checkAVX . cpp  −o   r1 . out      
            ./r1 . out

            
                SSE : 1
                SSE2 : 1
                SSE3 : 1
                SSE4 . 1 : 1
                SSE4 . 2 : 1
                SSE4a : 0
                SSE5 : 0
                AVX: 1

Following  is another file to perform the above task in checking AVX capability in a given CPU

        g++ −std=gnu++11     checkAVXv2 . cpp  −o   r2 . out      . 
        CPU  vendor  =   GenuineIntel


CPU  Brand String = Intel(R) core (TM) 15-7200U CPU 2.5 GHz <br>

* Number of Cores  =  2
* Number of logical cores  =  4
* CPU  Hyper   threaded   =  1
* CPU  SSE  =  1
* CPU  SSE2  =  1
* CPU  SSE3  =  1
* CPU  SSE41  =  1
* CPU  SSE42  =  1
* CPU  AVX  =  1
* CPU  AVX2  =  1
