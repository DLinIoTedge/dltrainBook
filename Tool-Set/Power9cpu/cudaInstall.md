
# Install CUDA SDK 

## Step 1
       		 sudo sh cuda_10.1.105_418.39_linux.run
		 See log at /var/log/cuda-installer.log for details.
	
		# set PATH for cuda 10.1 installation
		if [ -d "/usr/local/cuda-10.1/bin/" ]; then
		export PATH=/usr/local/cuda-10.1/bin${PATH:+:${PATH}}
		export LD_LIBRARY_PATH=/usr/local/cuda-10.1/lib64${LD_LIBRARY_PATH:
			+:${LD_LIBRARY_PATH}}
		Fi
	
		reboot
  
 ## Step 2
 
NVIDIA System Management Interface (nvidia-smi) is a command line utility, based on top of 
the NVIDIA Management Library (NVML), intended to aid in the management and monitoring 
of NVIDIA GPU devices.  This utility allows administrators to query GPU device state and 
with the appropriate privileges, permits administrators to modify GPU device state.
[Click]( https://developer.nvidia.com/nvidia-system-management-interface ) for more 
inforamtion on "nvidia-smi"

  		jk@WorkDL:~/util$ nvidia-smi 

 ## Step 3
 
Get CUDA 10.2 from the following link.
[ Click ](http://developer.download.nvidia.com/compute/cuda/10.2/Prod/local_installers/cuda_10.2.89_440.33.01_linux_ppc64le.run  ) to 
get following file or  use   wget < above url > 


 ## Step 4
 
Run by using sh command

		sudo sh cuda_10.2.89_440.33.01_linux_ppc64le.run
  
  ## Step 5
  
  Check NVIDIA CUDA Compiler  Version
  
        	 nvcc --version	
	
		// Check libcudnn version
		/sbin/ldconfig -N -v $(sed 's/:/ /' <<< $LD_LIBRARY_PATH) 2>/dev/null | grep libcudnn:
	
		/sbin/ldconfig -N -v $(sed 's/:/ /' <<< $LD_LIBRARY_PATH) 2>/dev/null | grep libcudnnLib
	
		cudnn.so.7 -> libcudnn.so.7.6.2

## Step 6

  		jk@WorkDL:~/util$ sudo sh cuda_10.1.243_418.87.00_linux_ppc64le.run
		[sudo] password for jk:
  	
  
  	       		Driver   Installed    
			Toolkit  Installed   in  /usr/local/cuda-10.1/ 
			Samples & Installed   in  /home/jk/ 
    
    
During installation, it is important to  make sure  the following

		PATH includes /usr/local/cuda-10.1/bin  
		D_LIBRARY_PATH includes /usr/local/cuda-10.1/lib64,
		 or, add /usr/local/cuda-10.1/lib64 to /etc/ld.so.conf 
		 and run ldconfig as root 

  ## Step 7 
  
   To uninstall the CUDA Toolkit, 
   
		run cuda-uninstaller in /usr/local/cuda-10.1/bin 

To uninstall the NVIDIA Driver, 

		run nvidia-uninstall 

## Support on Installtion
For more detail, refer CUDA_Installation_Guide_Linux.pdf  
in  /usr/local/cuda-10.1/doc/pdf  for detailed information on setting up CUDA.

Logfile is  
		/var/log/cuda-installer.log 


# in Power 9 Machine

CUDA C++ extends C++ by allowing the programmer to define C++ functions, called kernels, that,
when called, are executed N times in parallel by N different CUDA threads,
as opposed to only once like regular C++ functions. 

Following is in  Power9  machine

 ## Step 1
 
        jk@WorkDL:~/util$ sudo dpkg -i cuda.deb
	Selecting previously unselected package cuda-repo-ubuntu1804-10-1-local-10.1.168-418.67.
	(Reading database ... 86706 files and directories currently installed.)
	Preparing to unpack cuda.deb ...
	Unpacking cuda-repo-ubuntu1804-10-1-local-10.1.168-418.67 (1.0-1) ...
	Setting up cuda-repo-ubuntu1804-10-1-local-10.1.168-418.67 (1.0-1) ...
	The public CUDA GPG key does not appear to be installed.
	To install the key, run this command:
	sudo apt-key add /var/cuda-repo-10-1-local-10.1.168-418.67/7fa2af80.pub	
  
    ## Step 2
    
  	jk@WorkDL:~/util$ sudo apt-key add /var/cuda-repo-10-1-local-10.1.168-418.67/7fa2af80.pubOK
	
	jk@WorkDL:~/util$ sudo apt-get update
	Get:1 file:/var/cuda-repo-10-1-local-10.1.168-418.67  InRelease
	Ign:1 file:/var/cuda-repo-10-1-local-10.1.168-418.67  InRelease
	Get:2 file:/var/cuda-repo-10-1-local-10.1.168-418.67  Release [574 B]
	Get:2 file:/var/cuda-repo-10-1-local-10.1.168-418.67  Release [574 B]
	Get:3 file:/var/cuda-repo-10-1-local-10.1.168-418.67  Release.gpg [833 B]
	Get:3 file:/var/cuda-repo-10-1-local-10.1.168-418.67  Release.gpg [833 B]
	Get:4 file:/var/cuda-repo-10-1-local-10.1.168-418.67  Packages [24.2 kB]
	Hit:5 http://ppa.launchpad.net/graphics-drivers/ppa/ubuntu bionic InRelease    
	Hit:6 http://in.ports.ubuntu.com/ubuntu-ports bionic InRelease                   	 
	Get:7 http://ports.ubuntu.com/ubuntu-ports bionic-security InRelease [88.7 kB]   	 
	Get:8 http://in.ports.ubuntu.com/ubuntu-ports bionic-updates InRelease [88.7 kB]   
	Get:9 http://in.ports.ubuntu.com/ubuntu-ports bionic-backports InRelease [74.6 kB]
	Fetched 252 kB in 1s (175 kB/s)    
	Reading package lists... Done
  
  ## Step 3
  
	jk@WorkDL:~/util$ sudo apt-get install cuda
	
	jk@WorkDL:~/util$ whereis cuda
	cuda: /usr/local/cuda
	
	jk@WorkDL:~/util$ nvcc --version
	Command 'nvcc' not found, but can be installed with:
	sudo apt install nvidia-cuda-toolkit
	
	jk@WorkDL:~/util$ cat /usr/local/cuda/version.txt
	CUDA Version 10.1.168
	
	
	k@WorkDL:~/util$ sudo apt-get install cuda-drivers
	Reading package lists... Done
	Building dependency tree  	 
	Reading state information... Done
	cuda-drivers is already the newest version (418.67-1).
	cuda-drivers set to manually installed.
	0 upgraded, 0 newly installed, 0 to remove and 7 not upgraded.
	///Reboot the system to load the NVIDIA drivers
	jk@WorkDL:~/util$ reboot 

 ## Step 4
 
	//Set up the development environment by modifying the PATH and LD_LIBRARY_PATH variables:
	$ export PATH=/usr/local/cuda-10.1/bin${PATH:+:${PATH}}
	$ export LD_LIBRARY_PATH=/usr/local/cuda-10.1/lib64\
	${LD_LIBRARY_PATH:+:${LD_LIBRARY_PATH}}
	export PATH=/usr/local/cuda/bin${PATH:+:${PATH}}
	export 
	LD_LIBRARY_PATH=/usr/local/cuda/lib64\${LD_LIBRARY_PATH:+:${LD_LIBRARY_PATH}}

## Step 5

  	jk@WorkDL:~$ whereis cuda
	cuda: /usr/local/cuda
	
	jk@WorkDL:~$ export PATH=/usr/local/cuda/bin${PATH:+:${PATH}}
	jk@WorkDL:~$ export LD_LIBRARY_PATH=/usr/local/cuda/lib64\${LD_LIBRARY_PATH:+:${LD_LIBRARY_PATH}}
	jk@WorkDL:~$ cuda-install-samples-10.1.sh ~
	Copying samples to /home/jk/NVIDIA_CUDA-10.1_Samples now...
	Finished copying samples.	
  
  
  
