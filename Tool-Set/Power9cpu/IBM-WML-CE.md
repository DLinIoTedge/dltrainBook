
Install PowerAI in Conda Environment to use  GPU. Get “conda” for Power 9 machine by using the following URL.

[link]( https://www.anaconda.com/distribution/#linux )  is used to get   Python 3.7 version  for ppc64le.

Download ppc64le version from the above Link.  File name is  " Anaconda3-2019.10-Linux-ppc64le.sh  "
and same is  downloaded from the above URL. Use following commands to install “conda” 


		bash Anaconda3-2019.10-Linux-ppc64le.sh
		source ~/.bashrc
		conda list
		conda create --name my_env python=3
		conda activate my_env
	
		conda install powerai=1.6.2
	
Downloading and Extracting Packages

		tensorboard-1.15.0   | 3.8 MB	| ##### | 100%
		| ############# | 100%
		Preparing transaction: done
		Verifying transaction: done

