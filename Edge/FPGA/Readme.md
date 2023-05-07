

#  1. Deploy in Xilinx Zynq UltraScale+ MPSoC ZU3EG A484



Ultra96 V2 Board is using

1. Xilinx Zynq UltraScale+ MPSoC ZU3EG A484
2. microSD card
3. Power adapter 12V @ 2A AC/DC converter compatible with the 96Boards specification


## 1.1  microSD card 

microSD card in your kit is blank and must have the Linux boot files programmed.
	 Go to  link [URL]( https://avtinc.sharepoint.com/teams/ET-Downloads/Shared%20Documents/Forms/AllItems.aspx?id=%2Fteams%2FET%2DDownloads%2FShared%20Documents%2Fprojects%2Fpublic%5Frelease%2F2020%2E1%2FOOB%2Fultra96v2%5Foob%5F2020%5F1%5F210303%5F8GB%2Ezip&parent=%2Fteams%2FET%2DDownloads%2FShared%20Documents%2Fprojects%2Fpublic%5Frelease%2F2020%2E1%2FOOB&p=true&ga=1) and download the microSD card image. 
	 
File name is Ultra96v2_oob_2018_3_190530.zip

	 ( file download in progress, need to use Micro SD card with 16 GB storage capacity )
	 
MicroSD card with 8GB (Class 10 recommended) or more for storage  16 GB Micro SD card required. NOTE: In both cases ensure the included microSD card is fully inserted in the microSD card cage.

## 1.2 Etcher tool

 Follow instructions to use Etcher to program the microSD card with the image.
 Use {LINK(https://www.raspberrypi.org/magpi/pi-sd-etcher/ ) to get tool set in your pc for the following.
 
1. Install Etcher in Windows 10 System
2. Host machine can be Linux, Mac OS X, or Windows 10

## 1.3 Program Board

Insert the microSD card into the microSDsocket (J2).   ( this part is ok)
Keyboard  and USB mouse are required. Mini Display Port cable to HDMI or Display Port  Mini Display Port cable is required .
 Ultra96 USB-to-JTAG or UART Pod (required for terminal access) or Monitor is required connection to miniDP port.

## 1.4 Set Boot Mode

Set Boot Mode Switch (SW3) to SD boot,with switch 1 = OFF and 2 = ON as shown.  

## 1.5  Board Power supply issues

Attach a 12V DC power supply to the DC Power Supply Jack (J10). NOTE: DC power supply is not included in the Ultra96-V2 kit. It must be purchased as an accessory. Green LED D17 will light indicating 12V power is live.  ( Power supply is there but 4 A instead of 2 A)  Ultra96 with power supply is available  12V @ 2A AC / DC converter compatible with the 96Boards specification, but 12V @ 4 A is given

## 1.6  Power ON

 Press and release the power button (SW4).   Green Power On LED (D2), \lstinline{Red INIT_B LED (D5) }  and the Green User LEDs should also illuminate.

After a few seconds, \lstinline{INIT_B LED }  will turn off and Blue DONE LED (D1) will illuminate   ( this part is ok)

## 1.7 Started Guids

Ultra96-V2    has now booted Linux and several experiments are possible. Please go to [URL](https://www.avnet.com/wps/portal/us/products/avnet-boards/avnet-board-families/ultra96-v2/)    and download the Getting Started Guide for more instructions. ( this part is ok)
 
 ## 1.8  Shutdown sequence

When finished, press and release the power button (SW4) to initiate a shutdown sequence, which takes about 12 seconds. All LEDs with the exception of D17 will turn off. D17 will extinguish once the barrel jack is unplugged.  ( this part is ok)

## 1.9  Driver in Host Computer

Plug a microUSB cable between the Pod’s microUSB Port (J1) and a host computer. If the serial terminal drivers do not automatically install, you can manually install the driver for the FT2232H device. Visit [URL]( www.ftdichip.com/Drivers/VCP.htm  ) 
then download and install the appropriate driver for user operating system. Launch  Serial Terminal with settings of   115200-8-N-1. 
 
##  1.10 Micro service design 

Micro service design and deployment in web ( advantage )



 ## 2 Install SDx
 
   //SDx installation  (  Ubuntu 18.04 on x86 machine )
   
            ./xsetup
         
   //Choose devices  SDSoc = Zynq 7000  ultrascale+ + MPsoc 30 day trial

  // Install  Board Defined Files 

         unzip bdf-master.zip
         $ cp -a ./bdf-master/.
         /tools/Xilinx/Vivado/2018.3/data/boards/board_files

   //Avnet Board Definition Files (BDF) is obtained from URL [link](https://github.com/Avnet/bdf) 
   
       

   // Unzip Avnet Technical Training Notes 

	/U96AI_student_20191028/U96AI/2018_3/Lab_instructions/

	U96AI_2018_3_lab_0_v2.pdf
	U96AI_2018_3_lab_1_v2.pdf
	U96AI_2018_3_lab_6_v2.pdf

 ## 3 Install DNNK

Steps for Installing DNNDK on the native linux machine is given in the following. 
how to install the Deep Neural Network Development Kit (DNNDK v3.0) from the following URL, get gz file

[URL link](https://www.xilinx.com/products/design-tools/ai-inference/ai-developer-hub.html#edgeXlnx_dnndk_v3.0_190624.tar.gz)


