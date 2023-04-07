# J7app

J7app is designed to perform real time inference by using trained CNN and user input via touch panel of Android Phone. Android phone considered to be IoT edge device. In the following Steps are provided for user to create APK filr for J7 app. Use Host PC ( windows version or Ubuntu version) and install Android SDK. APK file is used in Android phone to run DLtrain.

# Step 1 : Working with Android SDK

Android Studio installation

[Download Link](https://linuxize.com/post/how-to-install-android-studio-on-ubuntu-18-04/)


Android Studio requires OpenJDK version 8 or above to be installed to your system 

    sudo apt update
    sudo apt install openjdk-8-jdk
    java -version
    
Installing Android Studio

    sudo snap install android-studio --classic

start Android Studio either by typing android-studio in your terminal or 
by clicking on the Android Studio icon (Activities -> Android Studio).

# Step 2: Working with Android NDK

Use SDK manager to install  the following components of NDK.  
These components useful to build JNI part of Inference engine

 Packages to install:

1. LLDB 3.1 (lldb;3.1)
2. CMake 3.10.2.4988404 (cmake;3.10.2.4988404)
3. NDK (Side by side) 20.1.5948944 (ndk;20.1.5948944)

 
FIX FOR 3.1.2 OR NEWER VERSIONS

Some of my colleagues and I have faced the same issue on AS 3.1.2, but a 
simple Sync didn't help us. For us, the solution was a bit different:

      File -> Invalidate Caches -> Invalidate
      File -> Close Project.

Remove the project from the AS project selector window.

Quit from Android Studio

Start AS and open project again

[select android sdk](https://stackoverflow.com/questions/34353220/how-do-i-select-android-sdk-in-android-studio)

# Step 3: J7app Source Code

[J7app Source code ](https://github.com/DLinIoTedge/dltrainBook/tree/jk/apk/J7)

[Download Link 2](https://www.google.com/url?q=https%3A%2F%2Fgithub.com%2FDLinIoTedge%2FNN&sa=D&sntz=1&usg=AOvVaw39mUyqi-UnVKxQLtHye_mx)

# Step 4: Credential Update

API credentials can be set but in present version it is kept open. 
There is a provision to include credential for secure and paid use

# Step 5: J7app Build 

Build work is given in the following picture

![image](https://user-images.githubusercontent.com/58679469/230653917-36960094-6329-4e81-a76a-71d7c618ce1c.png)



# Step 6: Generate APK

## 6.1 Chose APK option

![image](https://user-images.githubusercontent.com/58679469/230653837-fcf9037a-9d7b-4c8c-bf61-50640e2e4c6c.png)

## 6.2 Chose Password

![image](https://user-images.githubusercontent.com/58679469/230653864-e23e0008-3a7a-4ae1-85e8-e93c0853f8b3.png)

## 6.3 Chose Release version

![image](https://user-images.githubusercontent.com/58679469/230653884-13a6cdbc-5656-4c1e-a6be-2d16644f70c7.png)


# Step 7 : Install APK in Phone

In case, if you not able to create APK in your Android Studio then following
ready to user APK can be download from various storage options. 

Download Ready to install APK (from github  and it is recommended ) 

[Get it from gDrive](https://www.google.com/url?q=https%3A%2F%2Fgithub.com%2FDLinIoTedge%2FdltrainBook%2Ftree%2Fjk%2Fapk&sa=D&sntz=1&usg=AOvVaw3ZleYK0i8mpOwbqROjiVj4)

[Ready to Download](https://drive.google.com/file/d/1AXxpjkwTVgaFhdr2TPC7Fwx05KA5T8ps/view)

# Step 8: Using J7app

Following provides guide line to use J7 successfully

## 8.1 Local
trained model from local storage of Android phone can be loaded in to application

## 8.2 Go
Use button to perform inference after user enter their choice of number ins a given scripting window

## 8.3 Network 
use Network button to load "successfully trained network". 
Wi-Fi link is used to load trained model. 
In host application is given and same required to used along with network button. 
More in detail on this is given in the following page

## 8.4  Previous
Use previous button to move to inference earlier image sample in a given list

## 9.5 Next
Use Next button to move to inference next image sample in a given list

## 8.6 Clear
Press clear button to clear Inference details given in a display

# Setp 9 : User Input via Phone Touch Panel

![image](https://user-images.githubusercontent.com/58679469/230654303-d20c50f6-e0f2-4d70-810d-1d8bf5e19fd1.png)

Where DLtrain take input from user via hand writing on phone touch 
screen and perform Inference to detect numbers.


# Step 10 : Demo

![Demo ]( https://youtube.com/shorts/wZ3P_CQm-F4 )


