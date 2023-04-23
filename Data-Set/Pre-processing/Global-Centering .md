# Global Centering 

 ## calculate global mean
 
      	mean = pixels.mean()
      	print('Mean: %.3f' % mean)
      	print('Min: %.3f, Max: %.3f' % (pixels.min(), pixels.max()))

## global centering of pixels

	    pixels = pixels - mean
	
## confirm it had the desired effect
	
      mean = pixels.mean()
	    print('Mean: %.3f' % mean)
	    print('Min: %.3f, Max: %.3f' % (pixels.min(), pixels.max()))
  
