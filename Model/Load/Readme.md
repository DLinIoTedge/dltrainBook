
# 1. Load DL Network which is saved by TF AI Platforn


          # Load the model
          loaded_model = load_model(
            filepath,
            custom_objects=None,
           compile=True
          )
          
          
         
                    model_new = load_model("jj4Model.h5")


#Prepare the training dataset as a data generator object (not required)

                    train_datagen=tf.keras.preprocessing.image.ImageDataGenerator(
                              preprocessing_function=tf.keras.applications.mobilenet_v2.preprocess_input) 
 
 #included in our dependencies  (not required)



                    train_generator=train_datagen.flow_from_directory('data',
                                             	target_size=(224,224),
                                             	color_mode='rgb',
                                             	batch_size=10,
                                             	class_mode='categorical',
                                             	shuffle=True)

model_new   which is loaded in the above is used in the following

                    model_new.compile(loss='binary_crossentropy', optimizer='rmsprop', metrics=['accuracy'])

## Mapping labels

                    label_map = (train_generator.class_indices)

# 2 . Convert DL Network (which is saved by TF AI Platforn)   to use with JavaScript 

Deploy it for use in web browsers with JavaScript and TensorFlow.js 

                    pip install tensorflowjs   //  installation of tool to convert *.h5 model to  json  
                    tensorflowjs_converter  --input_format=keras jj6Model.h5  jj7model_js 
                    //   Open the command line and run 
                    //  converted model in the jj7Model_js directory

                    /jj7model_js/
                    group1-shard1of3.bin  
                    group1-shard2of3.bin  
                    group1-shard3of3.bin   
                    model.json

.json file is our web-enabled model, ready for use in JavaScript


# 3.  Load DL Network which is saved by DLtrain AI platform

 DLtrain platform inference engine degined to load automatically and thus user no need
 to work ahrd to load Deep Learning Network Model.
 

