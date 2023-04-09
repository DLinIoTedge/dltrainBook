

# Deep Learning Networks to Monitor Potato leaves 


## Step 1 : Download Potato leaves images from gDrive
   
  
[Click](https://drive.google.com/drive/folders/1_tvKRq8S6N_Je3Lbhhr3kdBUwmH8Luet?usp=share_link) to download potato leaves files from gDrive of jk.  ( these files are in /events/Belarus/potato folder of gDrive jkuse)

##  Step 2:  Create Folder Configuration

 Use downloded files and keep in the following folder configuration in your PC or Server
 
      PotatoLeavesInference.ipynb
      /data/eb1compress/   is having 80 image files
      /data//healthyv1/    is having 152 image files
      /data/lb1compress/   is having 94 image files
      /data/smpl.JPG       is used for inference
     
## Step 3 : Read Potato leaves Data from data folder

         train_datagen=tf.keras.preprocessing.image.ImageDataGenerator() 

         train_generator=train_datagen.flow_from_directory('data',
                                                 target_size=(224,224),
                                                 color_mode='rgb',
                                                 batch_size=10,
                                                 class_mode='categorical',
                                                 shuffle=True)
                                                 
##  Step 4 : Image size vs Input Shape
 
      input_shape = (224, 224, 3) # color image with 224x 224 size
      nClasses = 3  # number of classes used in Potato leaves
      label_map = (train_generator.class_indices)  # map classes to number
    
 
## Step 5:  CNN Model of Deep Learning Networks


### Input layer
Input layer in CNN should contain image data. Image data is represented by three dimensional matrix       as  shown earlier.  Reshape is required to  get a single column. 

Suppose image of dimension is 28 x 28 =784,then there is a  need to convert it into 784 x 1 before         feeding into input. 

If there is  “m” training     examples then dimension of input will be (784, m).

For the case of Potato,   Image data  is  224 x 224 x 3 ( because of color image)
Number  224 x 224 x 3  is Huge. 
  
Convo layer (Convo + ReLU) : Convo layer is sometimes called feature extractor layer because features of the image are get extracted within this layer. First of all, a part of image is connected to Convo layer to perform convolution operation as we saw earlier and calculating the dot product between receptive field(it is a local region of the input image that has the same size as that of filter) and the filter. Result of the operation is single integer of the output volume. Then we slide the filter over the next receptive field of the same input image by a Stride and do the same operation again. We will repeat the same process again and again until we go through the whole image. The output will be the input for the next layer.

Pooling layer :Pooling layer is used to reduce the spatial volume of input image after convolution. It is used between two convolution layer. If we apply FC after Convo layer without applying pooling or max pooling, then it will be computationally expensive and we don’t want it. So, the max pooling is only way to reduce the spatial volume of input image. In the above example, we have applied max pooling in single depth slice with Stride of 2. It can be observed the 4 x 4 dimension input is reduce to 2 x 2 dimension. There is no parameter in pooling layer but it has two hyperparameters — Filter(F) and Stride(S). In general, if we have input dimension W1 x H1 x D1, then

      W2 = (W1−F)/S+1
      H2 = (H1−F)/S+1
      D2 = D1
      Where W2, H2 and D2 are the width, height and depth of output.

### Fully connected(FC) layer 
Fully connected layer involves weights, biases, and neurons. It connects neurons in one layer to neurons in another layer. It is used to classify images between different category by training.

### Softmax/logistic layer 
Softmax or Logistic layer is the last layer of CNN. It resides at the end of FC layer. Logistic is used for binary classification and softmax is for multi-classification.

### Output layer
Output layer contains the label which is in the form of one-hot encoded.

      def createModel():
        model = Sequential()
        # The first two layers with 32 filters of window size 3x3
        model.add(Conv2D(32, (3, 3), padding='same', activation='relu', input_shape=input_shape))
        model.add(Conv2D(32, (3, 3), activation='relu'))
        model.add(MaxPooling2D(pool_size=(2, 2)))
        model.add(Dropout(0.25))

        model.add(Conv2D(64, (3, 3), padding='same', activation='relu'))
        model.add(Conv2D(64, (3, 3), activation='relu'))
        model.add(MaxPooling2D(pool_size=(2, 2)))
        model.add(Dropout(0.25))

        model.add(Conv2D(64, (3, 3), padding='same', activation='relu'))
        model.add(Conv2D(64, (3, 3), activation='relu'))
        model.add(MaxPooling2D(pool_size=(2, 2)))
        model.add(Dropout(0.25))

        model.add(Flatten())
        model.add(Dense(512, activation='relu'))
        model.add(Dropout(0.5))
        model.add(Dense(nClasses, activation='softmax'))
      
       return model

##  Step 6  Optimization Algorithms
    1. adam, 
    2. SGD, 
    3. GradientDescent, 
    4. Adagrad, 
    5. Adadelta 
    6. Adamax
    7. rmsprop

      model5 = createModel()
      model5.compile(optimizer='rmsprop', loss='categorical_crossentropy', metrics=['accuracy'])

## Step 7 : Hyper Parameter
 
      batch_size = 20
      epochs = 3
 
## Step 8 :  Train Deep Learning Networks

      model5.fit(train_generator, epochs=3, batch_size=10)

## Inference by using Deep Learning Networks 

 Folowing is used for  inference.  

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
    

      image = Image.open("data/smpl.JPG")  # provide file with path
      image  # display image 
      
      #performing inference on above image
      prediction('data/smpl.JPG', model5)
 
