



# Fashion MNIST Data Set

		https://storage.googleapis.com/tensorflow/tf-keras-datasets/train-labels-idx1-ubyte.gz
		https://storage.googleapis.com/tensorflow/tf-keras-datasets/train-images-idx3-ubyte.gz
		https://storage.googleapis.com/tensorflow/tf-keras-datasets/t10k-labels-idx1-ubyte.gz 
		https://storage.googleapis.com/tensorflow/tf-keras-datasets/t10k-images-idx3-ubyte.gz

	

# fashion mnist dataset from URL base
  
		      fashion_mnist = keras.datasets.fashion_mnist 
          (train_images, train_labels), (test_images, test_labels) = fashion_mnist.jload_data()
		        = 'https://storage.googleapis.com/tensorflow/tf-keras-datasets/'
 
 # fashion mnist dataset from Local PC
 
        import tensorflow as tf
		    from tensorflow import keras
		    import matplotlib.pyplot as plt
		    from __future__ import absolute_import
		    from __future__ import division
		    from __future__ import print_function
		    import gzip
		    import numpy as np
		
		    from tensorflow.python.keras.utils.data_utils import get_file
		    from tensorflow.python.util.tf_export import tf_export
		
		
		    #@tf_export('keras.datasets.fashion_mnist.jload_data')
		    #def load_data():
		
		    dirname = os.path.join('datasets', 'fashion-mnist')
		    base = '/home/tmp/jetson/fMNIST/'
		    files = [
		    'train-labels-idx1-ubyte.gz', 'train-images-idx3-ubyte.gz',
		    't10k-labels-idx1-ubyte.gz', 't10k-images-idx3-ubyte.gz'
	    	]
	    	paths = []
		    for fname in files:
		    paths.append(get_file(fname, origin=fname, cache_subdir=dirname))
		
		
	    	print(paths[0])
		    with gzip.open(paths[0], 'rb') as lbpath:
		    y_train = np.frombuffer(lbpath.read(), np.uint8, offset=8)
		
		    with gzip.open(paths[1], 'rb') as imgpath:
	    	x_train = np.frombuffer(
		    imgpath.read(), np.uint8, offset=16).reshape(len(y_train), 28, 28)
		
		    with gzip.open(paths[2], 'rb') as lbpath:
		    y_test = np.frombuffer(lbpath.read(), np.uint8, offset=8)
		
	    	with gzip.open(paths[3], 'rb') as imgpath:
		    x_test = np.frombuffer(
		    imgpath.read(), np.uint8, offset=16).reshape(len(y_test), 28, 28)
		
		    plt.figure()
		    plt.imshow(x_train[0])
		    plt.colorbar()
		    plt.grid(False)
	    	plt.show()
		
		    # return (x_train, y_train), (x_test, y_test)
		
		    class_names = ['T-shirt/top', 'Trouser', 'Pullover', 'Dress', 'Coat',
		    'Sandal', 'Shirt', 'Sneaker', 'Bag', 'Ankle bo
		
		      #paths.append(get_file(fname, origin=base + fname, cache_subdir=dirname))
