
# 1. Download Data set

When you’re training a machine learning model on your local machine, you’re likely to have trouble with the storage and bandwidth costs that come with downloading and storing the dataset required for training a model.

Deep learning datasets can be massive in size, ranging between 20 to 50 Gb. Downloading them is most challenging if you’re living in a developing country, where getting high-speed internet isn’t possible.

The most efficient way to use datasets is to use a cloud interface to download them, rather than manually uploading the dataset from a local machine. 

Thankfully, Colab gives us a variety of ways to download the dataset from common data hosting platforms.


## 1.1 Annotations.ai 

Use file DLinColabv1.ipynb

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
    


   
   

# Referen ce
1. https://neptune.ai/blog/how-to-use-google-colab-for-deep-learning-complete-tutorial
2. 
