


      !pip install scikit-image
    	!pip install selenium	
    	import numpy as np
    	import math as jmath
    	from matplotlib import pyplot as plt
    	from skimage import data
    	from skimage.feature import blob_dog, blob_log, blob_doh
	    from math import sqrt
	    from skimage.color import rgb2gray
	    import glob
	    from skimage.io import imread
	    from numpy import asarray
	    from PIL import Image
	    from scipy import ndimage 
	    import sys
	    from skimage import measure
	    from skimage.io import imsave
	
	    # from IPython.display import display, HTML, IFrame,YouTubeVideo,Image    
      
 Issue.....  Image ..from PIL and IPython.display...both are in conflict mode
 
	    from IPython.display import display, HTML, IFrame,YouTubeVideo      
	    import io
	    import base64
	    from html import escape
    	from selenium import webdriver
	
	
	    image = Image.open('wint_sky.gif')
	    im1 = asarray(image)
	    # confirm pixel range is 0-255
	    print('Data Type: %s' % im1.dtype)
	    print('Min: %.3f, Max: %.3f' % (im1.min(), im1.max()))
	    # convert from integers to floats
	    #pixels = pixels.astype('float32')
	
	    #plt.imshow(im1, cmap=cm.gray)
	    plt.imshow(im1)
	    plt.colorbar()
	    plt.grid(False)
	    plt.show()
    	display(HTML('<h2> <span style="color:blue">  blog_log  </span> is  <span style="color:green">   Used </h2> </span>'))
	    
	    blobs_log = blob_log(im1, max_sigma=30, num_sigma=10, threshold=.1)
	    # Compute radii in the 3rd column.
    	blobs_log[:, 2] = blobs_log[:, 2] * sqrt(2)
    	numrows = len(blobs_log)
	    print("Number of stars counted : " ,numrows)
	
	    kernel_laplace = np.array([np.array([1, 1, 1]), np.array([1, -8, 1]), np.array([1, 1, 1])])
	    out_l = ndimage.convolve(im1, kernel_laplace, mode='reflect')
	    plt.imshow(out_l, cmap='gray')
	
	    <span style="font-family:Papyrus; color:blue; font-size:3em;"> 
	    $ Log(x,y)  = - \frac{1}{2 \pi \sigma^4}  \big[  1 - \frac{x^2 + y^2}{2 \sigma^2} \big]  e^-\frac{x^2 + y^2}{2 \sigma^2} $
	    </span>
	
	    #sigma1 = 1.4
	    #sigma1 = 5
	    sigma1 = 2.5
    	#sigma1 = 0.6
    	#sigma1 = 1.38
    	l=9
    	ax = np.arange(-l // 2 + 1., l // 2 + 1.)
    	xx, yy = np.meshgrid(ax, ax)
	    v00 = jmath.pow(sigma1,2)
	    v01 = jmath.pi
	    v1 = -1/(v01*v00)
	    v2 = -0.5 * (np.square(xx) + np.square(yy)) / np.square(sigma1) 
	    v3 = 1+v2
	    k2 = np.exp(v2)
	    k3  = v1*v3*k2
	    k4 = k3*256
	    k5 =np.int8(k4)
	    print(k5)
	
	    [[  1   1   1   1   1   1   1   1   1]
	    [  1   1   0  -1  -1  -1   0   1   1]
	    [  1   0  -2  -5  -6  -5  -2   0   1]
    	[  1  -1  -5  -9 -11  -9  -5  -1   1]
	    [  1  -1  -6 -11 -13 -11  -6  -1   1]
	    [  1  -1  -5  -9 -11  -9  -5  -1   1]
    	[  1   0  -2  -5  -6  -5  -2   0   1]
	    [  1   1   0  -1  -1  -1   0   1   1]
	    [  1   1   1   1   1   1   1   1   1]]
	
	    out2 = ndimage.convolve(im1, k5, mode='reflect')
	    plt.imshow(out2, cmap='gray')
	    plt.colorbar()
	    plt.grid(False)
    	plt.show()
	
    	contours = measure.find_contours(out2, 0.8)
	    len1 = len(contours)
    	print('Number of stars =',len1)
	    #print(contours[301])
	    #x=contours[301]
	    #len2 = len(x)
	    #x1= x[3]
	    #x2= x1[0]
	    #x3= x1[1]
	    #print(len(x1))
	    #print(x3)
	    fig, ax = plt.subplots(1, 1)
    	plt.imshow(out2)
    	for i in range(len(contours)): 
	    localStar=contours[i]
	    for x4 in localStar:
	    yloc, xloc = x4
	    c = plt.Circle((xloc, yloc), 5, color='lime', linewidth=2, fill=False)
	    ax.add_patch(c)
	
	
	    fig, ax = plt.subplots(1, 1)
	    plt.imshow(im1)
	    for blob in blobs_log:
	    y, x, r = blob
	    c = plt.Circle((x, y), r+5, color='lime', linewidth=2, fill=False)
	    ax.add_patch(c)
	
