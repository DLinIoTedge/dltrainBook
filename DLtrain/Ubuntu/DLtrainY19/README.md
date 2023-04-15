# DLtrain Y19

before 2019 version

## Step 1:  Design NN model
Build Model and give model file as argument to DLtrain

                jjnet.dat,3,40,50,10,0123456789

* jjnet.dat is model file name ( this is output) 

*  3 is number of NN layers 

*  40,50,10 is number of neurons in layer 1 2 and 3

*  0123456789 ... these are the handwritten items is used in classification.

Usage .. keep conf file in bin folder  

             bin/DLtrain conf train
 

## Step 2:  Train NN model

* bin/DLtrain conf  train

* After above, it will request  value  for Number of Epochs 

## Step 3:  Use NN model for inference

            bin/DLtrain conf infer tstimage/img.raw



