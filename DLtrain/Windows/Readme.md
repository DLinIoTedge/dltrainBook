



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
    
    DLtrainv1  -m train -s NewNetwork.dat -c network_prop.txt -n 2000 -e 30 -d absolute_path to images 

## ap 06 Y 23

          https://drive.google.com/drive/folders/15njaTKht8I9WN71JZOP4IA1m3M48HH5-?usp=share_link

$$ this will be cloud or i PC side ( traning ) 

         DLtrainv1  -m train -s NewNetwork.dat -c network_prop.txt -n 2000 -e 30 -d absolute_path to images 

##   Target will be Device  ( inference )
         DLtrainv1  -m infer -s NewNetwork.dat -c network_prop.txt  -f img.raw





