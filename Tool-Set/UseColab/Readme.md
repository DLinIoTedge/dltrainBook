
# 1. Download Data set

When you’re training a machine learning model on your local machine, you’re likely to have trouble with the storage and bandwidth costs that come with downloading and storing the dataset required for training a model.

Deep learning datasets can be massive in size, ranging between 20 to 50 Gb. Downloading them is most challenging if you’re living in a developing country, where getting high-speed internet isn’t possible.

The most efficient way to use datasets is to use a cloud interface to download them, rather than manually uploading the dataset from a local machine. 

Thankfully, Colab gives us a variety of ways to download the dataset from common data hosting platforms.


## 1.1 Annotations.ai 

Use file DLinColabv1.ipynb

Above file  is not working because, service provider  depricated their service data set storage and annotations.

Cloud Annotations focuses on the dataset creation aspect of the model development life cycle leaving the 
training up to you. There are many ways to train your model, each with their own use cases and tradeoffs. 
You could train from scratch using a framework like TensorFlow or PyTorch, use a drag & drop tool like 
Apple’s Create ML or use a cloud managed solution like Watson Machine Learning.
Today we’ll be using an online tool called Google Colab as a free and easy way to get 
our first model trained.  In order to access our training 
data from our Colab notebook, our code needs credentials for the object storage bucket. 
Paste the credentials copied from the previous step into the first cell and follow the 
rest of the instructions provided in the notebook.

import boto3 alone is enough to connect with a bucket. botocore.session was used during for the
previous boto 1.8 and is not accepted by boto3. you can refer the following boto3 documents С. 
Here is boto 1.8 documents that mentions the 
use of botocore.session http://botocore.readthedocs.io/en/latest/tutorial/

Build  Deep Learning Network Model
We start with a MobileNetV2 architecture as the backbone pretrained feature extractor. 
We then add a couple of dense layers and a softmax layer to perform the classification. 
We freeze the MobileNetV2 backbone with weights trained on ImageNet dataset and only 
train the dense layers and softmax layer that we have added.


## 1.2 Upload data set from Local Drive to Colab

   Use file  MNISTlocalColab.ipynb
   
   Upload following files from Local PC
   
           t10k-images-idx3-ubyte.gz  
           train-images-idx3-ubyte.gz
           t10k-labels-idx1-ubyte.gz  
           train-labels-idx1-ubyte.gz
           
    Use above files in colab to train CNN model or NN model.
    

## 1.3 Upload data set from google Drive to Colab
   
  Use file   MNISTgDriveColab (1).ipynb
  
  Get following files into colab from Google Drive
   
           t10k-images-idx3-ubyte.gz  
           train-images-idx3-ubyte.gz
           t10k-labels-idx1-ubyte.gz  
           train-labels-idx1-ubyte.gz

Use above files in colab to train CNN model or NN model.


# 2 GPU via Colab 
  
    Account in Google Colab or local Machine with GPU device attached 

##  2.1 Step 1
 Colab account provides various account type and in that, user can create account of their choice.  
 Use Following given link to reach Colab page.
 
    [Get aaccess in Colab](https://colab.research.google.com/)
    
    Click on new notebook
    
    
![image](https://user-images.githubusercontent.com/58679469/229681142-634ebd63-00c7-44bd-8c29-e85c8787296d.png)

##  2.2  Step 2
      Switch  runtime from CPU to GPU. 
       Click on Runtime > 
           Click on Change runtime type > 
               Click on Hardware Accelerator > 
                  Click on GPU GPU > 
                      Click on Save.

Above process results in providing access to GPU device such that user can
use GPU to run thier CUDA code. Where CUDA code can be in the form of *.cu file.
Python also useful to program CUDA code. Following few steps provided  for user
to verify presence of GPU for thier acccess and also add required software to use
GPU device.

##  2.3  Step 3
   Check for availability of NVCC tool et to program CUDA cores in Nvidia GPU. 
   Where NVCC is  used in compilation trajectory  which involves several splitting, compilation, preprocessing, and merging steps for each CUDA source file. It is the purpose of nvcc, the CUDA compiler driver, to hide the intricate details of CUDA compilation from developers. It accepts a range of conventional compiler options, such as for defining macros and include/library paths, and for steering the compilation process. All non-CUDA compilation steps are forwarded to a C++ host compiler that is supported by nvcc, and nvcc translates its options to appropriate host compiler command line options
  
 Use following link to know more about NVCC.
 
 [More details on NVCC](https://docs.nvidia.com/cuda/cuda-compiler-driver-nvcc/)
 
 Use following step to check nvcc version which will confirm presence of NVCC for use.
 
     nvcc --version

  nvcc: NVIDIA (R) Cuda compiler driver
  Copyright (c) 2005-2022 NVIDIA Corporation
  Built on Wed_Sep_21_10:33:58_PDT_2022
  Cuda compilation tools, release 11.8, V11.8.89
  Build cuda_11.8.r11.8/compiler.31833905_0

## 2.4  Step 4
 Use following command is used to install a small extension to run nvcc from the Notebook cells.
   
     !pip install git+https://github.com/andreinechaev/nvcc4jupyter.git


## 2.5  Step 5
   Load the extension using the code given below

    %load_ext nvcc_plugin
  
created output directory at /content/src
Out bin /content/result.out

##  2.6 Step 6

Execute the code given below to check if CUDA is working or not.
Now we are ready to run CUDA C/C++ code right in your Notebook.


A kernel must be written to do the work of a single iteration of the loop.  
Because the  kernel  will  ignore  other  running  kernels,  the  execution 
configuration  must ensure  that  the  kernel  executes  the  correct  number 
of  times,  for  example,  the number of times the loop would have iterated.



##  2.7 step 7
###  Example 1 ( cu file )
    
    use ex1.cu in Notebook cell ( copy and past and run in cell)
    
 Use [Link](https://github.com/DLinIoTedge/dltrainBook/tree/jk/Tool-Set/gpu ) to get Example1.cu and Example2.cu


# Reference

1. https://neptune.ai/blog/how-to-use-google-colab-for-deep-learning-complete-tutorial
 

           
    
