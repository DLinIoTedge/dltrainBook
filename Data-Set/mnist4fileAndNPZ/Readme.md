# 1. MNSIT Data set : 4 file version

## Step 1 : Download MNIST images from gDrive
   
  
[Click](https://drive.google.com/drive/folders/1msPCMZA1mmH7ykjEHppeoJWeergQtsQD?usp=share_link) to download potato leaves files from gDrive of jk. 

( these files are in /events/Belarus/mnist/data/ folder of gDrive)

##  Step 2:  Create Folder Configuration

 Use downloded files and keep in the following folder configuration in your PC or Server
 
      MnistTfApril9Y23.ipynb
      /data/train-labels-idx1-ubyte.gz   
      /data/train-images-idx3-ubyte.gz   
      /data/t10k-labels-idx1-ubyte.gz  
      /data/t10k-images-idx3-ubyte.gz     
      /data/img.raw                     is used for inference



## Step 3:  Read MNIST dataset from Local Disk

      train = {}
      test = {}
      train['features'], train['labels'] = read_mnist(
      'mnist/data/train-images-idx3-ubyte.gz', 
      'mnist/data/train-labels-idx1-ubyte.gz')
      
      test['features'], test['labels'] = read_mnist(
      'mnist/data/t10k-images-idx3-ubyte.gz', 
      'mnist/data/t10k-labels-idx1-ubyte.gz')

Function read_mnist is provided in MnistTfApril9Y23.ipynb

## Step 4: Analysis on Data Set

      def display_image(position):
          image = train['features'][position].squeeze()
          plt.title('Example %d. Label: %d' % (position, train['labels'][position]))
          plt.imshow(image, cmap=plt.cm.gray_r)
    
      print('# of training images:', train['features'].shape[0])
      print('# of test images:', test['features'].shape[0])
      
      display_image(4)
      
      train_labels_count = np.unique(train['labels'], return_counts=True)
      dataframe_train_labels = pd.DataFrame({'Label':train_labels_count[0], 'Count':train_labels_count[1]})
      dataframe_train_labels
      
   Above feew lines is helpful to view a paricular image and and also other information on
   read data set from 4 files of MNIST data set.
 
## Step 5: Split Data Set

       validation = {}
       train['features'], validation['features'], train['labels'], validation['labels'] = train_test_split(
         train['features'], 
         train['labels'], 
         test_size=0.2, 
         random_state=0)

  
 # 2. Deep Learning Network Model  1
 
  ##  2.1  Model
  
  Following is CNN Model with 32 filters. Each Filter size is 3x3.
    
      model1 = Sequential()
      model1.add(Conv2D(32, (3, 3), activation='relu', kernel_initializer='he_uniform', input_shape=(28, 28, 1)))
      model1.add(MaxPooling2D((2, 2)))
      model1.add(Flatten())
      model1.add(Dense(100, activation='relu', kernel_initializer='he_uniform'))
      model1.add(Dense(10, activation='softmax'))

  ## 2.2 Optimization 
  
      opt = SGD(learning_rate = 0.01, momentum=0.9)
      model1.compile(optimizer=opt, loss='categorical_crossentropy', metrics=['accuracy'])
      print(model1.summary())

  ##  2.3 Hyper Parameter
  
         EPOCHS = 10
         BATCH_SIZE = 128
         
  ## 2.4 Generate batches of tensor image data 

Real time data augmentation is possible.

Use  data read from Local file

      X_train, y_train = train['features'], to_categorical(train['labels'])
      X_validation, y_validation = validation['features'], to_categorical(validation['labels'])

      train_generator = ImageDataGenerator().flow(X_train, y_train, batch_size=BATCH_SIZE)
      validation_generator = ImageDataGenerator().flow(X_validation, y_validation, batch_size=BATCH_SIZE)

##  2.5 Train DL Model 1

      scores1, histories1 = list(), list()
      history1 = model1.fit(X_train, 
                 y_train, 
                 epochs=2, 
                 batch_size=32, 
                 validation_data=(X_validation,  y_validation ), 
                 verbose=1)
     
   ## 2.6  Test  DL Model 1
   
       _, acc = model1.evaluate(X_validation, y_validation, verbose=1)
       print('> %.3f' % (acc * 100.0))
  
  
# 3. Deep Learning Network Model  2
  
  ## 3.1  ImageDataGenerator
  
  ImageDataGenerator is used to pipe line data during training.
  
     datagen = ImageDataGenerator(
         featurewise_center=True,
         featurewise_std_normalization=True,
         rotation_range=20,
          width_shift_range=0.2,
          height_shift_range=0.2,
          horizontal_flip=True,
         validation_split=0.2)

  ##  3.2  Batch by Batch Data used in Training
  
  It is more "manual" example in which training called for each batch of data set.
  
         epochs = 2
         kval2 =0
         for e in range(epochs):
         print('Epoch', e)
         batches = 0
         for x_batch, y_batch in datagen.flow(X_train, y_train, batch_size=32):
             model2.fit(x_batch, y_batch,verbose=0)
             batches += 1
            kval =  batches % 20
            if ( kval == 0 ):
               print('.',end=" ")
               kval2 +=1
            
           if ( kval2 > 20 ):
              print('just for time being ...Done')
              break
            
           if batches >= len(X_train) / 32:
              # we need to break the loop by hand because
              # the generator loops indefinitely
              print('Done')
              break
              
              
   ## 3.3 Testing Model 2
   
        _, acc = model2.evaluate(X_validation, y_validation, verbose=1)
         print('> %.3f' % (acc * 100.0))

# 4 MNSIT Data set : NPZ 1 file version

mnist.npz file is having all 4 files of MNIST data set. 

( these files are in /events/Belarus/mnist/dataNPZ/ folder of gDrive)

[click](https://drive.google.com/drive/folders/1fr5hw1EZnJSDy-xhGekOZ_2-kTVSKC1C?usp=share_link) to down load mnist.npz file.



         path="/localmachinefolder/mnist/dataNPZ/mnist.npz"
         mnist_dataset = tf.keras.datasets.mnist.load_data(path)
         (x_train, y_train), (x_test, y_test) = mnist_dataset
 
         print(x_train.shape)
         print(y_train.shape)
 
         print(x_test.shape)
         print(y_test.shape)
         
Following also same as the above in loading data from npz file. 
         
         path = '/home/jk/dev/OnlineSource/DataSet/mnist/dataNPZ/mnist.npz'
         (X_train, y_train), (X_test, y_test) = tf.keras.datasets.mnist.load_data(path)

# 5. Deep Learning Network Model  3

  
   ## 5.1 Model  3
   input_shape shape is critical and its value is same as image size value. 
   In this case image size is 28x28.
   
      model3 = tf.keras.models.Sequential([
       tf.keras.layers.Flatten(input_shape=(28, 28)),  
       tf.keras.layers.Dense(128, activation='relu'),
      tf.keras.layers.Dense(10)
      ])

      model3.compile(
         optimizer=tf.keras.optimizers.Adam(0.001),
        loss=tf.keras.losses.SparseCategoricalCrossentropy(from_logits=True),
        metrics=[tf.keras.metrics.SparseCategoricalAccuracy()],
      )
      
    
 ## 5.2  Train Model 3
 
      model3.fit(x_train, y_train,epochs=2)
 
 ## 5.3  Test Model 3
 
      _, acc = model3.evaluate(X_test, y_test, verbose=1)
      print('> %.3f' % (acc * 100.0))

    
   
