

BMC support: [click](https://www.servethehome.com/explaining-the-baseboard-management-controller-or-bmc-in-servers/ ) 

# Step 1: 
  Locate Bus Numbers

	            jk@WorkDL:~$ lspci | grep VGA
	            0000:01:00.0 VGA compatible controller: NVIDIA Corporation Device 1f07 (rev a1)
	            0005:02:00.0 VGA compatible controller: ASPEED Technology, Inc. ASPEED Graphics Family (rev 41)
	            jk@WorkDL:~$
	
# Step 2: 
 Create Xorg Configuration Snippet
 
	            jk@WorkDL:~$ mkdir /etc/X11/xorg.conf.d


Create and open  /etc/X11/xorg.conf.d/21-gpu-driver.conf  for editing and 
update the same with following content in it.


	                WorkDL:~$ modprobe amdgpu	
                  
 Use  generic mode setting Xorg driver for AMD GPUs, or you can use amdgpu 
 from xf86-video-amdgpu. The generic modesetting driver has been reported to 
 work perfectly fine on a Talos with various GPUs, so there is likely no practical 
 reason to use the driver-specific DDX

Create 
/etc/modprobe.d/ast-blacklist.conf
and place the following line in this file

                  blacklist ast

	                k@WorkDL:~$ reboot  
	                jk@WorkDL:~$ nvidia-smi



		          OS :  & Ubuntu 18.04 ( server version)   
		          Processor: & Power 9 AC22 
		          GPU Board: & GeForce RTX 2070 
		          CUDA: &  10.1  
		          libcudnn:  & 7.5.1  
		          Driver :  & NVIDIA 418.67   



