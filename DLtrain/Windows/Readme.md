



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


# Workshop RGUKT 

## April 06 Y 23

  Get  files from following link' ( thanks to  Janardha  for sharing his gDriive ) 
  
          https://drive.google.com/drive/folders/15njaTKht8I9WN71JZOP4IA1m3M48HH5-?usp=share_link
          
          Note :  File libwinpthread-1.dll  wsa missing and that is added to make DLtrainv1 to work in windows 10 machine.
          

##  Use  cloud or  PC side (Train CNN  by using DLtrain  ) 

         DLtrainv1  -m train -s NewNetwork.dat -c network_prop.txt -n 2000 -e 30 -d absolute_path to images 

##   Deploy CNN in Target which is a Device  

( in this case target device is  Windows PC )

         DLtrainv1  -m infer -s NewNetwork.dat -c network_prop.txt  -f img.raw





