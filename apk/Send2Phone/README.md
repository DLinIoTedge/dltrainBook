# Send2Phone
push  JJnet model to phone

## Q: How to build toPhone/SndModel.jar ??

Ans: 

               javac main.java


##  Q: How to use toPhone/SndModel.jar ??

Ans:

              java -jar  toPhone/SndModel.jar
  
Above will result in requesting " model name which is trained and stored in the same folder".  For example "jjnet.dat" is a model name which is used in conf and the same name can be given. In case model name changed to some other name then revised name need to be used.  After Model name, it will request for IP address of  Andriod phone in which  J722 client is running.  Before giving IP address, use Load button in J722 app and make J722 app to wait for Model file from Hosgt machine via Wireless Wi-Fi communication.  Enter IP addres.  Now, applicaiton J722 is loaded with revised model and then you use the same for inference.


 
![GitHub Logo](https://github.com/DLinIoTedge/Send2Phone/blob/master/64.png)


