
# Global Standardization 

The example below calculates the mean and standard deviation across 
all color channels in the loaded image, then uses these values to 
standardize the pixel values.


## calculate global mean and standard deviation

	      std = pixels.std()
	      print('Mean: %.3f, Standard Deviation: %.3f' % (mean, std))
	      # global standardization of pixels
	      pixels = (pixels - mean) / std
	      # confirm it had the desired effect
	      mean, std = pixels.mean(), pixels.std()
	      print('Mean: %.3f, Standard Deviation: %.3f' % (mean, std))
	      plt.figure()
	      plt.imshow(pixels)
	      plt.colorbar()
      	plt.grid(False)
      	plt.show()	

