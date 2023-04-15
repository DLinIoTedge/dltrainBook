04/09/2019 <br>
jk

# Near Edge Machine in Local Network

Subject:  How to run (or use)  Jupyterlab in a Power9 machine ( nearEdge )?

![image](https://user-images.githubusercontent.com/58679469/232203176-6f2690a9-d199-494d-87ad-4247321175b4.png)


On nearEdge machine

          jupyter lab --no-browser --port=8889

On local machine

          ssh -N -f -L localhost:8886:localhost:8889 jk@223.226.50.188
          http://localhost:8886



## Step 1
  activate virtual environment  ( in this case dlBox is virtual environment) 

          jk@jkDL:~$source  /home/jk/dlBox/bin/activate
          (dlBox) jk@jkDL:~$ 

## Step 2
run jupyter notebook as given below. Keep in server mode and no 
browser mode on and in this process, the remote machine can use its own 
browser to work with a jupyter notebook that runs in Power9 processor.

          (dlBox) jk@jkDL:~$jupyter notebook --no-browser --port=8889
          
![image](https://user-images.githubusercontent.com/58679469/232203118-441f62fc-d27a-484a-9989-cc9293e63c7c.png)

In the above token is provided. 
token=df8d87dc1c989d7459172df06f0a66f19bee17f7c035dbd5
Keep the above token copy in txt file or any other form storage
( short term storage). Same will be used in step 7.


## Step 3
Above is running in Power9 machine  ( or ssh terminal 
to power 9 machine)  and you should leave this open and running mode

## Step 4

open another  terminal in your machine ( if it is Ubuntu ) 
and use ssh command to connect and reap the URL of the power9 machine such 
that the Jupyter notebook can be used in your machine via  web browser. 
In the following localhost:8889 jk@171.61.123.76
 Is url and port in Power9 machine. URL  localhost:8886 is in your machine.
 
          ssh -N -f -L localhost:8886:localhost:8889 jk@171.61.123.76



## Step 5
This step is useful, if create instance of Jupyter notebook
is not used then the same can be killed by using the following commands 

        (dlBox) jk@jkDLps aux | grep localhost:8889
        jkDL  13643  0.0  0.0  55336  2912 ?    	Ss   12:05   0:00 ssh -N -f -L localhost:8888:localhost:8889 jk@192.168.1.14
        jkDL  14893  0.0  0.0  55240   704 ?    	Ss   12:12   0:00 ssh -N -f -L localhost:8888:localhost:8889 jk@192.168.1.14
        jkDL  14898  0.0  0.0  55240   704 ?    	Ss   12:12   0:00 ssh -N -f -L localhost:8888:localhost:8889 jk@192.168.1.14
        jkDL  14904  0.0  0.0  55240   704 ?    	Ss   12:13   0:00 ssh -N -f -L localhost:8888:localhost:8889 jk@192.168.1.14
        jkDL  14918  0.0  0.0  55240   704 ?    	Ss   12:13   0:00 ssh -N -f -L localhost:8888:localhost:8889 jk@192.168.1.14
        jkDL  15053  0.0  0.0  21536  1084 pts/3	S+   12:19   0:00 grep --color=auto localhost:8889
        jkDL:~$ kill -15 13643
        jkDL:~$ kill -15 14893
        jkDL:~$ kill -15 14898
        jkDL:~$ kill -15 14904
        jkDL:~$ kill -15 14918
        jkDL~$ kill -15 15053

## Step 6
 Open in local machine
http://localhost:8886/


## Step 7
 It will open a  web page in your machine and ask for a Token, Bring token from step 2 or
 the same token will be displayed in the running window of Jupyter notebook.
 
http://127.0.0.1:8889/?token=df8d87dc1c989d7459172df06f0a66f19bee17f7c035dbd5

In the above token is df8d87dc1c989d7459172df06f0a66f19bee17f7c035dbd5  
and copy this and paste in the page opened in step 6.


