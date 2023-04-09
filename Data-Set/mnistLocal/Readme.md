
#  Read MNIST data from Local PC

tf.data API enables you to build complex input pipelines from simple, reusable pieces. 
For example, the pipeline for an image model might aggregate data from files in a 
distributed file system, apply random perturbations to each image, and merge randomly
selected images into a batch for training. The pipeline for a text model might involve 
extracting symbols from raw text data, converting them to embedding identifiers with a l
ookup table, and batching together sequences of different lengths. The tf.data API makes 
it possible to handle large amounts of data, read from different data formats, and perform 
complex transformations.  https://www.tensorflow.org/guide/data

To create an input pipeline, you must start with a data source. For example, to construct 
a Dataset from data in memory, you can use tf.data.Dataset.from_tensors() or 
tf.data.Dataset.from_tensor_slices(). Alternatively, if your input data is stored in 
a file in the recommended TFRecord format, you can use tf.data.TFRecordDataset().

Following 5 steps are handled in a file readMNISTdataAp9Y23.ipynb, User can 
download readMNISTdataAp9Y23.ipynb and run it in their local machine.


## Step 1 : Download Potato leaves images from gDrive
   
  
[Click](https://drive.google.com/drive/folders/1msPCMZA1mmH7ykjEHppeoJWeergQtsQD?usp=share_link) to download potato leaves files from gDrive of jk. 

( these files are in /events/Belarus/mnist/data/ folder of gDrive jkuse)

##  Step 2:  Create Folder Configuration

 Use downloded files and keep in the following folder configuration in your PC or Server
 
      readMNISTdataAp9Y23.ipynb
      /data/train-labels-idx1-ubyte.gz   
      /data/train-images-idx3-ubyte.gz   
      /data/t10k-labels-idx1-ubyte.gz  
      /data/t10k-images-idx3-ubyte.gz     
      /data/img.raw                     is used for inference


 ## Step 3:  Datasets
 Following provides train, validation and test options in a Data set. Part of them used
 in testing and others in traning and validations.
 
    _Datasets = collections.namedtuple('_Datasets', ['train', 'validation', 'test'])
 
 ## Step 4: MNIST data from Local PC
 
          path = '/home/jk/dev/OnlineSource/DataSet/mnist/data/'
          jdata = read_data_sets(path, 
                       fake_data=False, 
                       one_hot=False,
                       dtype=dtypes.float32,
                       reshape=True,
                       validation_size=5000,
                       seed=Nonel)
      
   Funciton read_data_sets is implemented in the above and assocaited functions are listed in a  file readMNISTdataAp9Y23.ipynb
   
  ## Step 5: Get Traning and Testing Data from Datasets
  
      x_train, y_train = jdata.train.next_batch(5000) 
      # just get 5000 images for tranining ..total is 55000 images
      
      total_batch = x_train.shape  # numpy  ndarray ..it is not tensor
      print(total_batch)
      
      a = x_train[1]
      print(a.shape)   #  784 x 1 need to be used in Flatten model
      
 
 ## Step 6:  Create  Deep Learning Network Model 
   
    Deep Learning Network Model  is  Neural Network
    
   Input_shape  need to be equal to to image size in MNIST data.
   
      model5 = tf.keras.models.Sequential([
        tf.keras.layers.Flatten(input_shape=(784, 1)),
        tf.keras.layers.Dense(128, activation='relu'),
        tf.keras.layers.Dense(10)
      ])

      model5.compile(
       optimizer=tf.keras.optimizers.Adam(0.001),
       loss=tf.keras.losses.SparseCategoricalCrossentropy(from_logits=True),
       metrics=[tf.keras.metrics.SparseCategoricalAccuracy()],
      )
  
## Step 7 : Train Deep Learning Network Model 
  
      model5.fit(x_train, y_train,epochs=2)

## Step 8:  Test Deep Learning Network Model

      x_test, y_test = jdata.test.next_batch(50) # 50 files used in testing
      
      _, acc = model5.evaluate(x_test, y_test, verbose=1)
      print('> %.3f' % (acc * 100.0))
