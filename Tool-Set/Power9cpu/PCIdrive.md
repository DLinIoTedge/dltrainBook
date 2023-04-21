
# PCI driver for GPU hardware

Remove any CUDA PPAs that may be setup and also
remove the nvidia-cuda-toolkit  if there is a past installation. 

OS :           Ubuntu 18.04 ( server version) Processor:         Power 9 AC22 <br>
GPU Board:     GeForce RTX 2070 <br>
CUDA:          10.1 libcudnn:           7.5.1 <br>
Driver :       NVIDIA 418.67 <br>

        	sudo rm /etc/apt/sources.list.d/cuda*
		sudo apt remove --autoremove nvidia-cuda-toolkit	
	
Following  is  used  to  remove  NVIDIA  drivers  before  installing  new drivers.   
Recently,  working  engineers  found  out  that  the  CUDA  in- stallation  works 
with the graphics-drivers ppa so if you don’t have it added,  add  it  now

        	sudo apt remove --autoremove nvidia-*
		sudo apt update
		apt list --upgradable
		sudo add-apt-repository ppa:graphics-drivers/ppa	

Use  .run  file  install

		sudo add-apt-repository ppa:graphics-drivers/ppa 	

user  can install  the 430.26 newest  driver or  any that  
suit  your  fancy. Next,  install  the  libcudnn7  by  following:

Install  required  key:
		
		sudo apt-key adv --fetch-keys 	

x86  version:     <br>
Issue  is  above  leading  to  x86-64  and there is a  need  to  find  Power  9  version. 
Use  following  link  to  get  driver  for  Power  9  version 

ppc64el  version:   <br> 

Following  URL  used  to  download  7fa2af80.pub  file

		sudo    apt−key   adv  −−fetch−keys
		ppc64el:    


		// Update  system 
		sudo apt update
	
		// Install libcudnn7.5.1:
		sudo apt install libcudnn7
	
			// Reading package lists... Done
			// Building dependency tree  	 
			// Reading state information... Done
	
The following NEW packages will be installed:

		// libcudnn7
		// 0 upgraded, 1 newly installed, 0 to remove and 8 not upgraded.
		// Need to get 182 MB of archives.
		// After this operation, 432 MB of additional disk space will be used.
		// Get:1 http://developer.download.nvidia.com/compute/machine-
		// learning/repos/ubuntu1804/ppc64el  libcudnn7 7.6.2.24-1+cuda10.1
		//  [182 MB]
		// Fetched 182 MB in 2min 46s (1,097 kB/s) 
		// Selecting previously unselected package libcudnn7.
		// (Reading database ... 
		// 115506 files and directories currently installed.)
		// Preparing to unpack .../libcudnn7_7.6.2.24-1+cuda10.1_ppc64el.deb ...
		// Unpacking libcudnn7 (7.6.2.24-1+cuda10.1) ...
		// Setting up libcudnn7 (7.6.2.24-1+cuda10.1) ...
		// Processing triggers for libc-bin (2.27-3ubuntu1) ...
	

Run  installer: <br>
Unselect  the  driver  and  then  choose  Install  by  using  the  arrow  keys
and  space  bar  to  move  and  select  or  unselect:  Wait  for  the  install 
to finish, it might say errors during, but not to worry.  Add the following lines 
to  your   /.profile  file  for  CUDA  10.1

[Link]( https://tech.amikelive.com/node-731/how-to-properly-install-nvidia-graphics-driver-on-ubuntu-16-04/ ) is useful to get CUDA SDK.

	
		jk@WorkDL:~$ nvidia-smi
		nvidia-smi: command not found
	
	
It  means  that  driver  truly  is  not  installed  yet  and  user  can  safely proceed  
with  the  remaining  installation  steps.   Otherwise,  you  may check  the  driver  
version  and  perform  version  upgrade  if  necessary.
Above shows that the driver for RTX 2070 truly is not installed yet. 
As a next step, safely proceed with the remaining installation steps. 
Otherwise, check the driver version and perform a version upgrade.

Driver URL [Click](https://www.nvidia.com/Download/index.aspx?lang=en-us ) 



        	jk@WorkDL:~$ lspci | grep -i nvidia
		0000:01:00.0 VGA compatible controller: NVIDIA Corporation Device 1f07 (rev a1)
		0000:01:00.1 Audio device: NVIDIA Corporation Device 10f9 (rev a1)
		0000:01:00.2 USB controller: NVIDIA Corporation Device 1ada (rev a1)
		0000:01:00.3 Serial bus controller [0c80]: NVIDIA Corporation Device 1adb (rev a1)

Explanation:   From  the  output  above,  we  can  see  that  the  graphics card  from
Nvidia  is  not  installed. driver:  pick  driver  from  above  URL

		WorkDL:/$ lspci

	 	0000:00:00.0 PCI bridge: IBM Device 04c1  
	 	0000:01:00.0 VGA compatible controller: NVIDIA Corporation Device 1f07 (rev a1)
	 	0000:01:00.1 Audio device: NVIDIA Corporation Device 10f9 (rev a1)
	 	0000:01:00.2 USB controller: NVIDIA Corporation Device 1ada (rev a1)
	 	0000:01:00.3 Serial bus controller [0c80]: NVIDIA Corporation Device 1adb (rev a1) 
	 	0001:00:00.0 PCI bridge: IBM Device 04c1
	 	0001:01:00.0 Non-Volatile memory controller: Realtek Semiconductor Co., Ltd. Device 5762 (rev 01)
	 	0002:00:00.0 PCI bridge: IBM Device 04c1
	 	0003:00:00.0 PCI bridge: IBM Device 04c1
	 	0003:01:00.0 USB controller: Texas Instruments TUSB73x0 SuperSpeed USB 3.0 xHCI Host Controller (rev 02) 
	 	0004:00:00.0 PCI bridge: IBM Device 04c1
	 	0004:01:00.0 Ethernet controller: Broadcom Inc. and subsidiaries NetXtreme BCM5719 Gigabit Ethernet PCIe (rev 01)
	 	0004:01:00.1 Ethernet controller: Broadcom Inc. and subsidiaries NetXtreme BCM5719 Gigabit Ethernet PCIe (rev 01)
		0005:00:00.0 PCI bridge: IBM Device 04c1
	 	0005:01:00.0 PCI bridge: ASPEED Technology, Inc. AST1150 PCI-to-PCI Bridge (rev 04) 
	 	0005:02:00.0 VGA compatible controller: ASPEED Technology, Inc. ASPEED Graphics Family (rev 41) 

In  the  above  list  of  PCI  devices  and  associated  software  items  are present. 
But , only VGA items are selected and given in the following.

		0000:01:00.0  VGA  compatible  controller:  NVIDIA  Corpora- tion  Device  1f07  (rev  a1)
		0005:02:00.0  VGA  compatible  controller:  ASPEED  Technol- ogy,  Inc.  ASPEED  Graphics  Family  (rev  41)


Game  ready  Driver  vs  Studio  Driver If you are a gamer who prioritizes day of launch support 
for the latest games,  patches,  and  DLCs,  choose  Game  Ready  Drivers.  If  you  are a  content
creator  who  prioritizes  stability  and  quality  for  creative workflows  including  video 
editing,  animation,  photography,  graphic design,  and  live  streaming,  choose  NVIDIA  Studio  Driver.

In  the  following  search,  it  is  clear  that  there  is  no  release  of  Driver for  GeForce 
RTX  2070  for  Power  9

Views  from  IBM  :  

Only the Tesla V100 GPU is supported for CUDA 10.1 on POWER9.
Make  sure  that  the  latest  NVIDIA  driver  is  installed  and  running.



        	sudo apt-get update
		sudo apt-get install cuda-drivers
	
		sudo dpkg -i nvidia-driver-local-repo-ubuntu1804-410.72_1.0-1_ppc64el.deb
	
		more /var/log/cuda-installer.log
			[INFO]: Driver not installed.
			[INFO]: Checking compiler version...
			[INFO]: gcc location: /usr/bin/gcc
	
			[INFO]: gcc version: gcc version 7.4.0 (Ubuntu 7.4.0-1ubuntu1~18.04.1)
			[INFO]: Initializing menu
			[INFO]: Setup complete
			[INFO]: Components to install:
			[INFO]: Driver
			[INFO]: 418.87.00
			[INFO]: Executing NVIDIA-Linux-ppc64le-418.87.00.run --ui=none --no-questions --accept-
			license --disable-nouveau --no-cc-version-check --install-libglvnd  2>&1
			[INFO]: Finished with code: 256
			[ERROR]: Install of driver component failed.
			[ERROR]: Install of 418.87.00 failed, quitting 


 
 		run  −−u i=none  −−no−questions   −−accept −license  −−ddisable−nouveau  −−no−cc−version−check   −−install −libglvnd      2>&1
			[ INFO ] :    Finished   with    code :    256
			[ERROR ] :    Install    o f    4 1 8 . 8 7 . 0 0   failed  ,   quiting



Following  given  workflow  had  worked  well.

Deb  File: <br>
cuda−repo−ubuntu1804−10−1−local−10.1.168−418.67  1.0−1  ppc64el. deb

Above  file  downloaded and short name is used for easy handling. 

File  
" cuda-repo-ubuntu1804-10-1-local-10.1.168-418.67_1.0-1_ppc64el.deb " 
is renamed as " cuda.deb " and that is  moved  from local machine  to 
Power9 system  " (home/jk/util) "    by using following "scp"



		run  −−u i=none  −−noquestion   −−accept −license   −−disable −nouveau  −−no−cc−version−check   −−install−l i b g l v n d      2>&1
			[ INFO ] :   Finished   with    code :    256
			[ERROR ] :     Install   of driver  component    f a i l e d  .
			[ERROR ] :   Install  o f    4 1 8 . 8 7 . 0 0   failed. quiting


Following  given workflow had worked well. 

Deb File:  <br>
cuda-repo-ubuntu1804-10-1-local-10.1.168-418.67_1.0-1_ppc64el.deb   

Above file downloaded  


File  
 " cuda-repo-ubuntu1804-10-1-local-10.1.168-418.67_1.0-1_ppc64el.deb "  \\
is renamed as  " cuda.deb "  and that is  moved  from local machine  to 
Power9 system " (home/ jk/util) "    by using following "scp"



		scp  cuda-repo-ubuntu1804-10-1-local-10.1.168-418.67_1.0-1_ppc64el.deb
		jk@192.168.1.14:/home/jk/util/cuda.deb


ppc64le:
[Click ](https://developer.nvidia.com/cuda-downloads?target_os=Linux&target_arch=ppc64le&target_distro=Ubuntu&target_version=1804&target_type=runfilelocal )





        STR1="http://developer.download.nvidia.com/compute/cuda/10.1/Prod"
	STR2="/local_installers/cuda_10.1.243_418.87.00_linux_ppc64le.run"
	STR3=$STR1$STR2
	wget STR3 
	
		sudo sh cuda_10.1.243_418.87.00_linux_ppc64le.run
	
		sudo sh cuda_10.1.243_418.87.00_linux_ppc64le.run
		[sudo] password for jk:

 use  nvidia−smi  to  get  details  on  the  installed  driver.
         
       		 jk@WorkDL:~$ sudo apt-cache search nvidia | grep 'nvidia'
		nvidia-prime - Tools to enable NVIDIA's Prime
		nvidia-settings - Tool for configuring the NVIDIA graphics driver
		libnvidia-common-390 - Shared files used by the NVIDIA libraries
		hashcat-nvidia - Installs hashcat and its dependencies for users with NVIDIA GPU
		nvidia-cg-doc - Cg Toolkit - GPU Shader Authoring Language (documentation)
		nvidia-cuda-dev - NVIDIA CUDA development files
		nvidia-cuda-doc - NVIDIA CUDA and OpenCL documentation
		nvidia-cuda-gdb - NVIDIA CUDA Debugger (GDB)
		nvidia-cuda-toolkit - NVIDIA CUDA development toolkit
		nvidia-modprobe - utility to load NVIDIA kernel modules and create device nodes
		nvidia-nsight - NVIDIA Nsight Eclipse Edition
		nvidia-opencl-dev - NVIDIA OpenCL development files
		nvidia-profiler - NVIDIA Profiler for CUDA and OpenCL
		nvidia-visual-profiler - NVIDIA Visual Profiler for CUDA and OpenCL
		libnvidia-common-418 - Transitional package for libnvidia-common-430
		libnvidia-common-430 - Shared files used by the NVIDIA libraries
		nvidia-machine-learning-repo-ubuntu1804 - nvidia-machine-learning repository configuration files
		libnvidia-common-410 - Shared files used by the NVIDIA libraries
		libnvidia-common-415 - Shared files used by the NVIDIA libraries

File 

cuda-repo-ubuntu1804-10-1-local-10.1.168-418.67_1.0-1_ppc64el.deb	

is renamed as $ cuda.deb $ and same file is  moved  
from local machine  to  Power 9 system (home/user/util)  by using 

		scp  cuda-repo-ubuntu1804-10-1-local-10.1.168-418.67_1.0-1_ppc64el.deb 
		jk@192.168.1.14:/home/jk/util/cuda.deb	






