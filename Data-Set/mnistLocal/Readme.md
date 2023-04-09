
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


 ## Step 1:  Datasets
 Following provides train, validation and test options in a Data set. Part of them used
 in testing and others in traning and validations.
 
    _Datasets = collections.namedtuple('_Datasets', ['train', 'validation', 'test'])
 
 ## Step 2: MNIST data from Local PC
 
          path = '/home/jk/dev/OnlineSource/DataSet/mnist/data/'
          jdata = read_data_sets(path, 
                       fake_data=False, 
                       one_hot=False,
                       dtype=dtypes.float32,
                       reshape=True,
                       validation_size=5000,
                       seed=None,
                       source_url=DEFAULT_SOURCE_URL)

