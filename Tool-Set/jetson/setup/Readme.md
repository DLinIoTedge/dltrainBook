
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




 
 
 



