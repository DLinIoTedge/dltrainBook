# load CSV file dataset

        dataset = numpy.loadtxt("pima-indians-diabetes.csv", delimiter=",")
	      # split into input (X) and output (Y) variables
	      X = dataset[:,0:8]
	      Y = dataset[:,8]	
