# Monitor Potato leaves by using Pre Trained Model

Use Pre trained Model is used to build a  Deep Learning Network to classify an image 


## Step 1: Use MobileNetV2 Model as a Base Model
We start with a [MobileNetV2](https://arxiv.org/abs/1801.04381) architecture as the backbone [pretrained feature extractor](https://github.com/tensorflow/models/tree/master/research/slim/nets/mobilenet). We then add a couple of dense layers and a softmax layer to perfom the classification. We freeze the MobileNetV2 backbone with weights trained on ImageNet dataset and only train the dense layers and softmax layer that we have added.


      base_model=tf.keras.applications.MobileNetV2(weights='imagenet',include_top=False) 
      #imports the mobilenet model and discards the last 1000 neuron layer.
      x=base_model.output
      x=tf.keras.layers.GlobalAveragePooling2D()(x)
      x=tf.keras.layers.Dense(512,activation='relu')(x) #dense layer 1
      x=tf.keras.layers.Dense(256,activation='relu')(x) #dense layer 2
      preds=tf.keras.layers.Dense(3,activation='softmax')(x) #final layer with softmax activation

      model=tf.keras.Model(inputs=base_model.input,outputs=preds)
      
WARNING:tensorflow:`input_shape` is undefined or non-square, or `rows` is not in [96, 128, 160, 192, 224]. Weights for input shape (224, 224) will be loaded as the default

      #Freeze layers from MobileNetV2 backbone (not to be trained)
      for layer in base_model.layers:
        layer.trainable=False


## Step 2 : Download Potato leaves images from gDrive
   
  
[Click](https://drive.google.com/drive/folders/1_tvKRq8S6N_Je3Lbhhr3kdBUwmH8Luet?usp=share_link) to download potato leaves files from gDrive of jk. 

( these files are in /events/Belarus/potato folder of gDrive jkuse)

##  Step 3:  Create Folder Configuration

 Use downloded files and keep in the following folder configuration in your PC or Server
 
      PotatoLocalPretrained.ipynb
      /data/eb1compress/   is having 80 image files
      /data//healthyv1/    is having 152 image files
      /data/lb1compress/   is having 94 image files
      /data/smpl.JPG       is used for inference
      
## Step 4 :  Read Potato Leaves image from local PC

Prepare the training dataset as a data generator object.

             train_datagen=tf.keras.preprocessing.image.ImageDataGenerator(
             preprocessing_function=tf.keras.applications.mobilenet_v2.preprocess_input
             ) 
             
             train_generator=train_datagen.flow_from_directory('data',
                                                 target_size=(224,224),
                                                 color_mode='rgb',
                                                 batch_size=10,
                                                 class_mode='categorical',
                                                 shuffle=True)
                                                 
                                                 
                                                 
## Step 5: Build Model with Adam optimizer
  
      model.compile(optimizer='Adam',loss='categorical_crossentropy',metrics=['accuracy'])
      model.summary()
      
 ## Step 6: Train DL Networks
 
 
      tf.random.set_seed(1)
      model.fit(train_generator, epochs=5, batch_size=10)

 ## Step 7: Inference
 
 Figure of Training Loss and Accuracy.
 
 Perform inference on some sample data points to determine the performance of trained model.

        label_map = (train_generator.class_indices)
        model.save('jkvision/1')
        
        def prediction(image_path, model):
          img = tf.keras.preprocessing.image.load_img(image_path, target_size=(224, 224))
           x = tf.keras.preprocessing.image.img_to_array(img)
           x = np.expand_dims(x, axis=0)
           x = tf.keras.applications.mobilenet_v2.preprocess_input(x)
           preds = model.predict(x)
           #print('Predictions', preds)
    
           for pred, value in label_map.items():    
              if value == np.argmax(preds):
                 print('Predicted class is:', pred)
                 print('With a confidence score of: ', np.max(preds))
    
           return np.argmax(preds)
           
           image = Image.open("data/smpl.JPG")
           image
           
           prediction('data/smpl.JPG', model)
           
           tf.keras.models.save_model(model,'/home/jk/dev/OnlineSource/DataSet/jj9Model.h5')
        

