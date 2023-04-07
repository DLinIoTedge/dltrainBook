
# DLtrain  
( CNN version which is designed to run in Windows Machine)

# Required Files

 Get following from  above in to user windows machine.
 
       DLtrainv1.exe
       Network_prop.txt
       NewNetwork.dat

# Get Data-set

Get  Data-Set from dDrive  by using link

[Get it from gDrive ](https://drive.google.com/drive/folders/1h7ZhEVdkgElx2a-UNtE9DWQ9I-CddQ29?usp=share_link )

in case above link do not work then following link can be used to get Data-Set

[Get it from gDrive ...  ]( https://drive.google.com/drive/folders/1uvXVt87UWqZVpLx8bjj0hy1EcXPj_llh?usp=sharing )
 
  images-ubyte 
  labels-ubyte

# Issues with LibGCC runtime library

 Static link against LibGCC runtime library:     -static-libgcc

 Static link against libstdC++ runtime library: -     static-libstdc++

 ## Run DLtrain in windows  
 
### Traning NN / CNN

  
    DLtrainv1  -m train -s NewNetwork.dat -c network_prop.txt -n 2000 -e 30 -d use absolute_path to images 
    DLtrainv1  -m train -s NewNetwork.dat -c network_prop.txt -n 2000 -e 30 -d C:\dev\test\Images\
    
### Inference by using  NN / CNN   

     DLtrainv1  -m infer -s NewNetwork.dat -c network_prop.txt  -f img.raw
    
   


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





