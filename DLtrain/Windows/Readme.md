



 Get following from  above in to your windows machine .
    DLtrain.exe
    Network_prop.txt
    NewNetwork.dat

Get  Data-Set from dDrive  by using link
  https://drive.google.com/drive/folders/1h7ZhEVdkgElx2a-UNtE9DWQ9I-CddQ29?usp=share_link 
  or
  https://drive.google.com/drive/folders/1uvXVt87UWqZVpLx8bjj0hy1EcXPj_llh?usp=sharing 


  images-ubyte 
  labels-ubyte
  
 Static link against LibGCC runtime library:
    -static-libgcc
    
  Static link against libstdC++ runtime library:
-     static-libstdc++

//run in windows  ( Interns try the following to train CNN) 

Traning NN / CNN

    DLtrain  -m train -s NewNetwork.dat -c network_prop.txt -n 2000 -e 30 -d C:\dev\test\Images\
    
Inference by using  NN / CNN   

    DLtrain  -m infer -s NewNetwork.dat -c network_prop.txt  -f img.raw


