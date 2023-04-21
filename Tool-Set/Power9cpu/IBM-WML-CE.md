

![lin](https://www.anaconda.com/distribution/#linux)  is used to get   Python 3.7 version  for ppc64le.

Download ppc64le version from the above

File $ Anaconda3-2019.10-Linux-ppc64le.sh  $
is downloaded from the above URL. 

Use following commands to install “conda” 

\lstset{language=C}

\begin{lstlisting}
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
\end{lstlisting}
