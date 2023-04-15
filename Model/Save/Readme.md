
# 1. Save TF Model

A Keras model consists of multiple components.

The architecture of the model, which specifies its layers and how they are connected with each other.
It also includes the type of model, e.g., sequential, etc.

A set of weights values (the “state of the model”).

An optimizer (defined by compiling the model). A set of losses and metrics

 ## 1.1 Save the model
 
        filepath = './saved_model'
        save_model(model, filepath)
        
 or following can be used to save Deep learnign Network Model
 
          tf.keras.models.save_model(
            model,
           filepath,
           overwrite=True,
           include_optimizer=True,
           save_format=None,
           signatures=None,
           options=None
          )
For example,

      tf.keras.models.save_model(model,'/home/jk/jpynb/Belarus/jj4Model.h5') 

name "jj4Model.h5" is user choice but keep h5 extension.

Revised file to train DL work load and also save model after training in *.h5 file

 LocalDLtrainV3.ipynb  ..pls pick up this and compare with your file that u had used it for 
 DL Training workload. ( model is saved in this file ) 
 
 
 
 Revised file to perform prediction locally  by using model which is saved in the above.
 
 LoadModelV3.ipynb  pick this file ..  
 
   In this file…
   
           Model loading will happen
           Local image open happen
           Local inference will happen in prediction function 

 
 


# 2. Save DLtrain Model
