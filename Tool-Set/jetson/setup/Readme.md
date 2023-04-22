
# Setting Up AI Computer ( Jetson Nano)

## 1.1 Resources

![image](https://user-images.githubusercontent.com/58679469/233796058-058dfdbe-9017-4690-ab0e-3a4b4ec1f07d.png)

### 1.1.1 Development Machine side requirement   
  

1. ubuntu 18.04 or Windows 10 Machine  
2. Internet Connection 
3. SSH service 

### 1.1.2  Power Supply

As an example of a good power supply, NVIDIA has validated Adafruit’s 5V 2.5A Switching Power Supply with 20AWG MicroUSB Cable (GEO151UB-6025). It was specifically designed to overcome common problems with USB power supplies; see the linked product page for details.


### 1.1.3 Items Required   

1. Monitor 
2. Keyboard,
3. Mouse, 
4. USB power supply 
5. USB-A to micro USB cable to connect it to Jetson Nano, 
6. HDMI cable to connect the Jetson Nano to display monitor 
7. micro SD Card, with a minimum size of 32GB.
8. Internet Connection with Wired LAN

## 1.2 Reference
[click](https://www.youtube.com/watch?v=Uvu6NNOvhg4 ) to view youtube video from Nvidia. 
Mentioned video provide detail elcture on installation of Jetson Nano Developer kit.

## 1.3 Installation

 Make micro SDcard for jetson Nano   <br> 
 Write Image to the microSD Card
 
 Download OS Image [click](https://developer.nvidia.com/jetson-nano-sd-card-image ) <br>
 SD Car Foramt and  Write OS Image [click](https://developer.nvidia.com/embedded/learn/get-started-jetson-nano-devkit#write )
 
 ## 1.4 Powering Jetson Nano
 
 [click](https://developer.nvidia.com/sites/default/files/akamai/embedded/images/jetsonNano/gettingStarted/Jetbot_animation_500x282_2.gif ) to view conenction details of Developer kit
 
1. Unfold the paper stand and place inside the developer kit box
2. Set the developer kit on top of the paper stand. 
3. Insert the microSD card (with system image already written to it) into the slot on the underside of the Jetson Nano module. 
4. Power on your computer display and connect it. 
5. Connect the USB keyboard and mouse.
6. Connect your Micro-USB power supply (5V⎓2A). The Jetson Nano Developer Kit will power on and boot automatically.
7. A green LED next to the Micro-USB connector will light as soon as the developer kit powers on. When you boot the first time, the Jetson Nano Developer Kit will take you through some initial setup, including:
8. Review and accept NVIDIA Jetson software EULA
9. Select system language, keyboard layout, and time zone 
10. Create username, password, and computer name
11. Log in

## 1.5 JetPack Version 4.3

Installing Jetpack <br>
First, let’s install the NVIDIA JetPack. NVIDIA JetPack SDK is the most comprehensive solution for building AI applications. Use the JetPack installer to flash your Jetson Developer Kit with the latest OS image, install developer tools for both host PC and the Developer Kit, and install libraries and APIs, samples, and documentation needed to jumpstart your development environment. The most recent version at the time of writing this article is JetPack 4.1.1.

For the most part, installation is easy. From an Ubuntu 16.04 or Ubuntu 18.04 PC host computer, you simply download JetPack from the NVIDIA JetPack web page(you’ll have to sign in with your developer account to download JetPack) and follow the instructions in the setup guide.

      jk@amma:~/util$ git clone https://github.com/jetsonhacks/jetsonUtilities.git </br>
      Cloning into 'jetsonUtilities'... 
      remote: Enumerating objects: 84, done. 
      remote: Total 84 (delta 0), reused 0 (delta 0), pack-reused 84
      Unpacking objects: 100% (84/84), done. 
    
      jk@amma:~/util$ cd jetsonUtilities 
      jk@amma:~/util/jetsonUtilities$ python jetsonInfo.py  
      NVIDIA Jetson TX1
      L4T 32.1.0 [ JetPack 4.2 ] 
      Ubuntu 18.04.2 LTS 
      Kernel Version: 4.9.140-tegra 
      CUDA 10.0.166 
      JetPack 4.3 is good for input/output but 4.2 is  detected as a version on board.


## 1.6 I/O : GPIO , SPI,  I2C, I2S  etc 

introduction of JetPack 4.3 ( ( L4T 32.3.1) brings with it a new tool, Jetson-IO. All of the Jetson developer kits include a 40-pin GPIO expansion header. Many of the pins can be used either as General Purpose I/O (GPIO) or Special Function I/O (SFIO). SFIO are functions such as I2C, I2S, SPI, and so on

[click](https://www.jetsonhacks.com/2020/05/04/spi-on-jetson-using-jetson-io/ )  to information on Jetson Nano I/O

[click](https://github.com/JetsonHacksNano/SPI-Playground ) to get information from JetsonHacksNano 

        cat /etc/nv_tegra_release
        dmesg |grep SPI

        "32.4.3") JETSON_JETPACK="4.4" ;;
      	"32.4.2") JETSON_JETPACK="4.4 DP" ;;
    	  "32.3.1") JETSON_JETPACK="4.3" ;;
    	  "32.2.3") JETSON_JETPACK="4.2.3" ;;
    	  "32.2.1") JETSON_JETPACK="4.2.2" ;;
      	"32.2.0" | "32.2") JETSON_JETPACK="4.2.1" ;;
    	  "32.1.0" | "32.1") JETSON_JETPACK="4.2" ;;
    	  "31.1.0" | "31.1") JETSON_JETPACK="4.1.1" ;;
    	  "31.0.2") JETSON_JETPACK="4.1" ;;
    	  "31.0.1") JETSON_JETPACK="4.0" ;;
    	  "28.2.1") JETSON_JETPACK="3.3 | 3.2.1" ;;
    	  "28.2.0" | "28.2") JETSON_JETPACK="3.2" ;;
    	  "28.1.0" | "28.1") JETSON_JETPACK="3.1" ;;
    	  "27.1.0" | "27.1") JETSON_JETPACK="3.0" ;;
    	  "24.2.1") JETSON_JETPACK="3.0 | 2.3.1" ;;
    	  "24.2.0" | "24.2") JETSON_JETPACK="2.3" ;;
    	  "24.1.0" | "24.1") JETSON_JETPACK="2.2.1 | 2.2" ;;
    	  "23.2.0" | "23.2") JETSON_JETPACK="2.1" ;;
    	  "23.1.0" | "23.1") JETSON_JETPACK="2.0" ;;
    	  "21.5.0" | "21.5") JETSON_JETPACK="2.3.1 | 2.3" ;;
    	  "21.4.0" | "21.4") JETSON_JETPACK="2.2 | 2.1 | 2.0 | 1.2 DP" ;;
    	  "21.3.0" | "21.3") JETSON_JETPACK="1.1 DP" ;;
    	  "21.2.0" | "21.2") JETSON_JETPACK="1.0 DP" ;;
    	  *) JETSON_JETPACK="UNKNOWN" ;;

        JETSON_JETPACK="4.4" ;;  and above…


## 1.7 Connect with Internet

Wired LAN   and Wireless connect also possible.

## 1.8  SSH / RDP

![image](https://user-images.githubusercontent.com/58679469/233797214-9d1740e9-b6f7-4017-afda-9695667a36cf.png)

SSH is good for user to login and work in Jetson Nano.  Since Console option is available directly, it is good enough to have SSH. In case some user want to try with RDP then they can try it out
 Easiest way is probably going to be running an RDP server called xrdp. Installation is a lot simpler than setting up VNC.
 
        $ sudo apt-get install xrdp

 After installation has completed, you should go ahead and reboot the Jetson Nano board. Once the reboot has completed you can check installation of xrdp was successful by using the command nmap from your laptop.
 
        $ nmap jetson
        
 RDP server is running despite us currently being at the login screen on the physical machine. While RDP is a proprietary protocol, Microsoft do provide viewers for most platforms for free, including the Mac, which is available in the Mac App Store and install it.
 


## 1.9 Install git

        sudo apt-get install git


## 1.10 nvcc

The claim is that the microSD image of 64Bit Ubuntu Linux that NVIDIA provides for this computer has all the NVIDIA libraries and utilities you need all pre-installed. The programming guide made it clear that if you need to use the NVIDIA C compiler nvcc to compile your work. But if I typed nvcc at a command prompt, I just got an error that this command wasn’t found. A bit of Googling revealed that everything is installed, but it did it before installation created your user, so you need to add the locations to some PATHS. Adding:

      export PATH=${PATH}:/usr/local/cuda/bin        
      export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:/usr/local/cuda/lib64
   
To my .bashrc file got everything working. It also shows where cuda is installed. This is handy since it includes a large collection of samples.

 ![image](https://user-images.githubusercontent.com/58679469/233797391-56587bc0-84db-42fc-a919-68c8862c3f27.png)

 
 Compiling the deviceQuery sample 
 
 ![image](https://user-images.githubusercontent.com/58679469/233797413-bc9bb2a5-e6b5-484f-87c1-ab5caa55afc6.png)

![image](https://user-images.githubusercontent.com/58679469/233797425-c91fd55e-08d7-42fc-a34e-75f8f46f3c26.png)

![image](https://user-images.githubusercontent.com/58679469/233797465-08af4289-1c82-4e2a-8586-cf667548e367.png)

## 1.11 Install cmake 3.14

      jk@amma:~/tmp/oct16/build$ sudo apt-get install cmake
      
Unable to acquire the dpkg frontend lock (/var/lib/dpkg/lock-frontend), is another process using it?

      jk@amma:~/tmp/oct16/build$ sudo kill all apt apt-get
      sudo rm /var/lib/dpkg/lock-frontend 
      sudo dpkg --configure -a 
      sudo poweroff
      sssh jk@192.168.1.4
      sudo apt-get install cmake

## 1.12 Python installation


       sudo apt-get install lsof  
       sudo apt-get install -y python3-pip 
       sudo apt-get  install -y python3-venv 
       sudo pip3 install virtualenv  
       virtualenv jkDL2 
       source jkDL2/bin/activate
 
      pip3 install numpy ( use this command to install numpy)

There are a few more packages and development tools to install to ensure that we have a robust set-up for our programming environment:

        sudo apt-get install build-essential libssl-dev libffi-dev python-dev

Once Python is set up, and pip and other tools are installed, we can set up a virtual environment for our development projects.

        sudo apt-get install -y python3-venv


venv module, part of the standard Python 3 library, so that we can create virtual environments

        mkdir environments
        cd environments
        python3 -m venv jk_env // jk_env is created  ,u can give your name Vijay_env
        ls_env
        source environments/jk_env/bin/activate

Creating 	sample program
Use vi or any other editor and create “hello.py” , in that file just keep

        print(" jk is keep working on innovation!")  // this is in hello.py 
        
        python hello.py

Above will make program to work well

          jk@amma:~/tmp/oct16/build$ sudo apt-get install cmake


Unable to acquire the dpkg frontend lock (/var/lib/dpkg/lock-frontend), is another process using it?

        sudo killall apt apt-get
        sudo rm /var/lib/dpkg/lock-frontend
        sudo dpkg --configure -a
        sudo poweroff 	 	 	
        sudo apt-get install lsof
        sudo apt-get install -y python3-pip
        sudo apt-get install -y python3-venv
	 	 	 	
Use virtual environments: use virtual environments for your Python programming needs. You might be familiar with conda, but unfortunately it can’t be installed on ARM. Instead you can use the Python3-venv package that can be installed with:

        sudo pip3 install virtualenv
        virtualenv WorkDL2
        source WorkDL2/bin/activate
        sudo apt-get install cmake
        sudo apt-get install git
        git clone https://github.com/dusty-nv/jetson-inference
        cd jetson-inference
        git submodule update --init
	 	 	 	
        mkdir build
        cd build
        cmake ../
        make
        sudo make install
        cd ~/jetson-inference/build/aarch64/bin
        ./detectnet-console ~/dog.jpg out.jpg coco-dog

Took dog pic from
[click](https://blog.hackster.io/getting-started-with-the-nvidia-jetson-nano-developer-kit-43aa7c298797 )
and placed in /home/siri/dog.jpg
	 	 	 	
            $ cd ~/jetson-inference/build/aarch64/bin
            $ ./detectnet-console ~/dog.jpg out.jpg coco-dog

 	 	 	
///DL SDK doc from NVIDIA [click](https://docs.nvidia.com/deeplearning/sdk/tensorrt-developer-guide/index.html#import_model_python )

// hello world in TF RT [click](https://docs.nvidia.com/deeplearning/sdk/tensorrt-sample-support-guide/index.html#end_to_end_tensorflow_mnist )

Python Matrices and NumPy Arrays [click](https://www.programiz.com/python-programming/matrix  )

[click](https://stackoverflow.com/questions/28831854/how-do-i-add-python3-kernel-to-jupyter-ipython ) ipython


          sudo pip3 install ipython>=5.0.0
          :~/tmp/pub$ pip3 --version
          pip 19.1.1 from /usr/local/lib/python3.4/dist-packages/pip (python 3.4)
          /tmp/pub$ pip2 --version
          pip 19.1.1 from /usr/local/lib/python2.7/dist-packages/pip (python 2.7)


//following worked well ,,,installed 3.5 version with ease

          sudo apt-get install libssl-dev openssl
          wget https://www.python.org/ftp/python/3.5.0/Python-3.5.0.tgz 
          sudo tar -xzvf Python-3.5.0.tgz
          cd Python-3.5.0
          ./configure
          sudo make
          sudo make install

//following worked well
          
          jupyter-notebook

//////////// issue on TensorRT
[click](https://devtalk.nvidia.com/default/board/360/container-tensorrt/)

[click](https://devtalk.nvidia.com/default/board/304/)


//download tensorRT

[click](https://developer.nvidia.com/tensorrt)

TensorRT 5.0 Usage Survey
[click](https://developer.nvidia.com/embedded/downloads#?search=Jetson%20Nano )

TensorRT 5.1 GA ( general availability RC is release candidate)
Tar File Install Packages For Linux Power

TensorRT-5.1.3.6 for Ubuntu <br>
installation of tensorrT <br>
[click](https://docs.nvidia.com/deeplearning/sdk/tensorrt-install-guide/index.html ) 

//model

        export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:<eg:TensorRT-5.1.x.x/lib>

//wrong

         export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:</home/tmp/jetson/TensorRT-5.1.3.6/lib>

//correct one

        export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/home/tmp/jetson/TensorRT-5.1.3.6/lib
        export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/home/tmp/jetson/TensorRT-5.1.2.2/lib
        sudo pip3 install tensorrt-5.1.3.6-cp35-none-linux_ppc64le.whl
        sudo pip3 install tensorrt-5.1.2.2-cp35-none-linux_x86_64.whl
        sudo pip3 install uff-0.6.3-py2.py3-none-any.whl

//issue

        sudo pip3 install graphsurgeon-0.4.1-py2.py3-none-any.whl

//working

        sudo pip3 install graphsurgeon-0.4.0-py2.py3-none-any.whl

//CUDA
[click](https://developer.nvidia.com/cuda-downloads?target_os=Linux&target_arch=x86_64&target_distro=Ubuntu&target_version=1404&target_type=clusterlocal )

[click](https://developer.nvidia.com/cuda-downloads?target_os=Linux&target_arch=x86_64&target_distro=Ubuntu&target_version=1404&target_type=runfilelocal )



// upgrade from 3.4 to 3.5

      sudo apt-get install python3.5
      python3 --version

I'm getting <br>
Python 3.4.3 <br>
didn't do anything wrong and things are not working as intended. Even after you have installed Python 3.6 from a PPA, the /usr/bin/python3 symlink on your Ubuntu 14.04 system still points to /usr/bin/python3.4, not /usr/bin/python3.6. Therefore, to invoke the Python 3.6 interpreter, you explicitly run python3.6.

how to install jupyter notebook in ubuntu 14.04 <br>
Python Prerequisites

        sudo apt install python3-pip
	      sudo apt install ipython3
	      pip3 install jupyter
	        Downloading ipywidgets-7.4.2-py2.py3-none-any.whl (111kB): 111kB downloaded
	        Cleaning up...
	        Exception:
	        Traceback (most recent call last):
        pip --version
        pip 1.5.4 from /usr/lib/python2.7/dist-packages (python 2.7)

        sudo pip install --upgrade pip
          Not uninstalling pip at /usr/lib/python2.7/dist-packages, owned by OS

//following worked

        sudo -H pip install --upgrade pip
        sudo pip3 install --upgrade pip

// appear to be worked partly

        sudo pip3 install --upgrade setuptools

// again issues

        pip3 install jupyter

Installing collected packages:  <br>
jupyter, jupyter-console, qtconsole, ipywidgets, notebook, nbconvert, ipykernel, jupyter-client, prompt-toolkit, pygments, ipython-genutils, jupyter-core, traitlets, widgetsnbextension, nbformat, jinja2, terminado, pyzmq, tornado, Send2Trash, prometheus-client, bleach, pandocfilters, defusedxml, entrypoints, testpath, mistune, python-dateutil, wcwidth, jsonschema, MarkupSafe, ptyprocess, webencodings, attrs, pyrsistent 
Cleaning up...

Setting up Jupyter with Python 3 on Ubuntu
[click](https://datawookie.netlify.com/blog/2017/06/setting-up-jupyter-with-python-3-on-ubuntu/)

// tried with sudo ,..but still not ok

Installing  TensorFlosudo pip3 install jupyter <br>
...You are using pip version 10.0.1, however version 19.1.1 is available.
You should consider upgrading via the 'pip install --upgrade pip' command

        sudo -H pip install --upgrade pip --user

How can I uninstall python 2.7 and reinstall 3.5 in Ubuntu 14.04?

        sudo apt-get install python3-notebook jupyter-core python-ipykernel
       
       [click](https://askubuntu.com/questions/847263/install-jupyter-notebook-for-python-2-7 )


///windows file
Found Windows Boot Manager on /dev/sda1@/EFI/Microsoft/Boot/bootmgfw.efi <br>
Adding boot menu entry for EFI firmware configuration

        sudo apt-get update
        sudo apt-get autoremove
        sudo apt-get -y install python3-pip python3-dev
        sudo -H pip3 install --upgrade pip
        sudo apt-get -y install ipython3 ipython3-notebook
        sudo -H pip3 install jupyter

        sudo -H pip3 install jupyter --user

Consider adding this directory to PATH or, if you prefer to suppress this warning, use --no-warn-script-location.

[click](https://github.com/jupyter/notebook/issues/2786 )
command not found: 'jupyter <br>
/usr/local/bin/pip3 <br>
/usr/local/bin/jupyter


      export PATH=$PATH:~/.local/bin
        File "/tmp/pip-install-Ej0KVF/tornado/setup.py", line 146, in <module>
      	raise ImportError("Tornado requires an up-to-date SSL module. This means "

      sudo pip install 'Tornado>=4.0.0,<5.0.0'
        matplotlib 1.3.1 requires nose, which is not installed.
[click](https://github.com/googlesamples/assistant-sdk-python/issues/264 )
Try using

        sudo easy_install nose
        sudo easy_install tornado
        sudo pip install 'Tornado>=4.0.0,<5.0.0'
        sudo -H pip install jupyter


[click](https://github.com/Tony607/tf_jetson_nano )

Run Keras/Tensorflow model on Jetson Nano [click](https://ehmatthes.github.io/pcc/chapter_01/osx_setup.html )

To be able to run jupyter notebook from terminal, you need to make sure that ~/.local/bin is in your path.
Do this by running export PATH=$PATH:~/.local/bin for your current session, or adding that line to the end of ~/.bashrc to make your changes last for future sessions (e.g. by using nano ~/.bashrc). If you edit ~/.bashrc you will need to log out and log back in to make see your changes take effect


jupyter notebook //// now it worked .....// 11.07 PM <br>
[click](https://github.com/Tony607/tf_jetson_nano )Run Keras/Tensorflow model on Jetson Nano

        git clone https://github.com/Tony607/tf_jetson_nano
        pip3 install -r requirements.txt
        git clone https://github.com/Tony607/tf_jetson_nano.git
        pip install numpy --upgrade
        sudo pip install numpy --upgrade --ignore-installed

        kernel2 or kerl 3 issue in Jypeter notebook
        
[click](https://stackoverflow.com/questions/30492623/using-both-python-2-x-and-python-3-x-in-ipython-notebook )

        sudo apt-get install python-dev python3-dev python-pip python3-pip
        sudo python -m pip install virtualenv --user

///worked

        sudo apt install python-pip
        sudo pip install absl-py
        sudo pip install gast
        sudo pip install grpcio
        sudo pip install mock
        sudo pip install tensorboard>=1.8.0
        pip install numpy --upgrade

///DL SDK doc from NVIDIA
[click](https://docs.nvidia.com/deeplearning/sdk/tensorrt-developer-guide/index.html#import_model_python )

// hello world in TF RT
[click](https://docs.nvidia.com/deeplearning/sdk/tensorrt-sample-support-guide/index.html#end_to_end_tensorflow_mnist )

Python Matrices and NumPy Arrays
[click]( https://www.programiz.com/python-programming/matrix )

[click](https://stackoverflow.com/questions/28831854/how-do-i-add-python3-kernel-to-jupyter-ipython )

        sudo pip3 install ipython>=5.0.0
        /tmp/pub$ pip3 --version
        pip 19.1.1 from /usr/local/lib/python3.4/dist-packages/pip (python 3.4)
        /tmp/pub$ pip2 --version
        pip 19.1.1 from /usr/local/lib/python2.7/dist-packages/pip (python 2.7)

//following worked well ,,,installed 3.5 version with ease

        sudo apt-get install libssl-dev openssl
        wget https://www.python.org/ftp/python/3.5.0/Python-3.5.0.tgz
        sudo tar -xzvf Python-3.5.0.tgz
        cd Python-3.5.0
        ./configure
        sudo make
        sudo make install

//following worked well

        jupyter-notebook

////// issue on TensorRT
[click](https://devtalk.nvidia.com/default/board/360/container-tensorrt/ )

[click](https://devtalk.nvidia.com/default/board/304/ )

//download tensorRT
[click](https://developer.nvidia.com/tensorrt )
TensorRT 5.0 Usage Survey

[click](https://developer.nvidia.com/embedded/downloads#?search=Jetson%20Nano  )
TensorRT 5.1 GA ( general availability RC is release candidate)
Tar File Install Packages For Linux Power

TensorRT-5.1.3.6 for Ubuntu <br>
installation of tensorrT
[click](https://docs.nvidia.com/deeplearning/sdk/tensorrt-install-guide/index.html )

//model

      export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:<eg:TensorRT-5.1.x.x/lib>

//wrong

      export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:</home/tmp/jetson/TensorRT-5.1.3.6/lib>

//correct one

      export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/home/tmp/jetson/TensorRT-5.1.3.6/lib
      export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/home/tmp/jetson/TensorRT-5.1.2.2/lib
      sudo pip3 install tensorrt-5.1.3.6-cp35-none-linux_ppc64le.whl
      sudo pip3 install tensorrt-5.1.2.2-cp35-none-linux_x86_64.whl
      sudo pip3 install uff-0.6.3-py2.py3-none-any.whl
      
//issue

       sudo pip3 install graphsurgeon-0.4.1-py2.py3-none-any.whl
       
//working

       sudo pip3 install graphsurgeon-0.4.0-py2.py3-none-any.whl


        $ which jupyter
        /usr/local/bin/jupyter
        
TensorRT, OpenCV <br>
TensorFlow is one of the most popular deep learning frameworks today. NVIDIA® TensorRT™ is a deep learning platform that optimizes neural network models and speeds up inference across all kinds of GPU-accelerated platforms running in data centers, embedded and automotive devices. TensorFlow integrates nicely with TensorRT, which seems a natural fit, particularly as NVIDIA provides platforms well-suited to accelerate TensorFlow. This enables TensorFlow users to have extremely high inference performance and a near transparent workflow when using TensorRT.


Adding TensorRT to the TensorFlow inference workflow involves an additional step, as shown in Figure 3. In this step (highlighted in green), TensorRT builds an optimized inference graph from a frozen TensorFlow graph.

Throughout this article, we will use python 3. Let’s install TensorFlow and TensorRT on the device. You can find good instructions in the NVIDIA TensorFlow/TensorRT Models on Jetson repository. But first, you should install python3-dev and libfreetype6-dev packages. They may solve some problems with matplotlib installation:

        sudo apt-get update
        sudo apt-get upgrade
        sudo apt-get install libfreetype6-dev python3-dev

Also, we recommend installing the last version of TensorFlow, currently it is 1.10.1.


After installing TensorRT we had a problem with the jupyter example. Since the example uses a ssd_inception_v2 model which tries to allocate a lot of GPU memory, the session run process gets killed by the system. To resolve this problem we changed the model to SSD Lite MobileNet v2 from TensorFlow Model ZOO. The model zoo is Google’s collection of pre-trained object detection models that have various levels of processing speed and accuracy.


## 1.13 Kernel Update

How to build NVIDIA Jetson Nano kernel
[click](https://developer.ridgerun.com/wiki/index.php?title=Jetson_Nano/Development/Building_the_Kernel_from_Source )

Installing SPIdev Kernel Module <br>
The Linux driver provides a user interface for accessing SPI to userspace processes and applications. Although SPIdev is not compiled into the L4T kernel by default, it can be compiled and loaded as a kernel module. This is able to be done from onboard the Jetson without recompiling the entire kernel or can be cross-compiled from x86 host if desired

[click](https://elinux.org/Jetson/TX1_SPI#Loopback_Testing )

	sudo cat /sys/kernel/debug/tegra_gpio
	Name:Bank:Port CNF OE OUT IN INT_STA INT_ENB INT_LVL
	A: 0:0 64 40 40 04 00 00 000000
	B: 0:1 f0 00 00 00 00 00 000000
	C: 0:2 1f 00 00 00 00 00 000000
	D: 0:3 00 00 00 00 00 00 000000
	E: 1:0 40 00 00 00 00 00 000000
	F: 1:1 00 00 00 00 00 00 000000
	G: 1:2 0c 00 00 04 00 00 000000
	H: 1:3 fd 99 00 60 00 00 000000
	I: 2:0 07 05 00 02 00 00 000000
	J: 2:1 f0 00 00 00 00 00 000000
	K: 2:2 00 00 00 00 00 00 000000
	L: 2:3 00 00 00 00 00 00 000000
	M: 3:0 00 00 00 00 00 00 000000
	N: 3:1 00 00 00 00 00 00 000000
	O: 3:2 00 00 00 00 00 00 000000
	P: 3:3 00 00 00 00 00 00 000000
	Q: 4:0 00 00 00 00 00 00 000000
	R: 4:1 00 00 00 00 00 00 000000
	S: 4:2 a0 80 00 00 00 00 000000
	T: 4:3 01 01 00 00 00 00 000000
	U: 5:0 00 00 00 00 00 00 000000
	V: 5:1 03 00 00 02 00 00 000000
	W: 5:2 00 00 00 00 00 00 000000
	X: 5:3 78 08 08 70 00 60 606000
	Y: 6:0 06 00 00 02 00 00 000000
	Z: 6:1 0f 08 08 04 00 06 020600
	AA: 6:2 00 00 00 00 00 00 000000
	BB: 6:3 01 00 00 00 00 00 000000
	CC: 7:0 12 00 00 12 00 12 121200
	DD: 7:1 01 00 00 00 00 00 000000
	EE: 7:2 00 00 00 00 00 00 000000
	FF: 7:3 00 00 00 00 00 00 000000
	jk@amma:~$
	
	cat /boot/extlinux/extlinux.conf TIMEOUT 30

	DEFAULT primary

	MENU TITLE p3450-porg eMMC boot options

	LABEL primary
	MENU LABEL primary kernel
	LINUX /boot/Image
	INITRD /boot/initrd
	APPEND ${cbootargs} rootfstype=ext4 root=/dev/mmcblk0p1 rw rootwait

	jk@amma:~$
	Downloading Kernel Sources

	wget --no-check-certificate 'https://developer.nvidia.com/embedded/dlc/l4t-sources-24-2-1' -O sources_r24.2.1.tbz2 tar -xvf sources_r24.2.1.tbz2
	cd sources
	tar -xvf kernel_src.tbz2
	Updating the Kernel Config
	cd kernel
	zcat /proc/config.gz > .config
	make prepare // had an issue and not done



