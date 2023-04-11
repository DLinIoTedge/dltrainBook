# Send2Phone
 Send2Phone is an application in Host machine and also in Android phone.  Mentioned Send2Phone is tranfer "tranined CNN or NN model from Host machine to Android  Device. 

## Q: How to build toPhone/SndModel.jar ??

 Source code }main.java" is provided in the above folder. 

Ans: 

               javac main.java


##  Q: How to use toPhone/SndModel.jar ??

Ans:

              java -jar  toPhone/SndModel.jar
  
Above will result in requesting " model name which is trained and stored in the same folder".  

For example "jjnet.dat" is a model name which is used in conf and the same name can be given.
In case model name changed to some other name then revised name need to be used.  

After Model name, it will request for IP address of  Andriod phone in which  J722 client is running.  

Before giving IP address, use Load button in J722 app and make J722 app to wait for Model file 
from Host machine via Wireless Wi-Fi communication.  Enter IP addres.  

Now, applicaiton J722 is loaded with revised model and same  is used for inference.


![64](https://user-images.githubusercontent.com/58679469/231179241-fb763fc3-faaf-4ad8-bb97-d4fffd1bd6eb.png)
