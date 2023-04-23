#  pixel normalization

CNN  with single convolutional, pooling and output layer

##  Model
	    import tensorflow as tf
    	from tensorflow import keras
	    from tensorflow.keras.models import Sequential
	    from tensorflow.keras.layers import Conv2D
    	from tensorflow.keras.layers import MaxPooling2D
    	from tensorflow.keras.layers import Flatten
    	from tensorflow.keras.layers import Dense
	
	
  
      import matplotlib.pyplot as plt
	    from numpy import asarray
	    from PIL import Image
	  
##  load image
	
      image = Image.open('bondi_beach.jpg')
	    pixels = asarray(image)
	    # confirm pixel range is 0-255
	    print('Data Type: %s' % pixels.dtype)
	    print('Min: %.3f, Max: %.3f' % (pixels.min(), pixels.max()))
	    # convert from integers to floats
    	pixels = pixels.astype('float32')
	    # normalize to the range 0-1
	    pixels /= 255.0
      
 ## confirm the normalization
 
	    print('Min: %.3f, Max: %.3f' % (pixels.min(), pixels.max()))


