
Docker is an open-source container engine and a set of tools to compose, build, ship, and run distributed applications. The Docker container engine provides for the execution of applications composed as Docker images. Docker hub and Docker private registries are services that enable sharing of Docker images. The Docker command-line tool enables developers to build Docker images, to work with Docker hub and private registries, and to instantiate Docker images as containers in a Docker container engine. The relatively small size of Docker images—compared with VM images—and their portability enable developers to move applications seamlessly between test, quality assurance, and production environments, increasing the agility of application development and operations.

Although Docker has been a very popular technology for some time, until recently its ecosystem has been primarily restricted to x86 architectures and the Linux operating system. Systems such as IBM POWER Linux, IBM z/Linux, and ARM Linux require a porting effort to support Docker. I  how to use Docker on the POWER Linux platform. We also illustrate the process of building Docker from scratch on the POWER platform, a process developers on other platforms can use as a template for enabling Docker on their own platforms.




# Create Docker Image of DL Networks

1. How to create a docker file ?
2. How to build docker image ?
3. How to deploy docker image ?
4. How to run docker image ?
5. How to stop Docker image  running ?
6. How to delete docker image  ?
7. How to create Container with Docker image?
8. How to deploy container? 

 [Click](https://docs.google.com/document/d/1j3BrdxtS4ne8wsYICOKkjbRu08Lu96gOa0_0bl5vbmE/edit?usp=sharing) to access  document on "Docker Image,  Docker Container and Kubernetes Cluster
Creation and Deployment".

 
 Deployment of trained model on to cloud side  requires to  support  clients with varying languages.  REST API appears to be one such a method in which Client can communicate with Inference Engine which is performing inference for a given input data. Where, input data come from Client applications which are written in different language 

# get Data Set  Files


[Click](https://drive.google.com/drive/folders/1ZSe9HKynmpXQjLyuyfQq_-8q6wpcEJc3?usp=sharing) to download  MNIST data set for training of Deep learning Networks.

My Drive/events/DLbook/DataSet/ubyteMNIST/ is location following files in jk's gDrive.



 Following files required to be place in \Images folder.  
  
    \Images\images-ubyte
    \Images\labels-ubyte
    
# Useful commands to handle Docker  

   List of Useful commands to handle Docker

    sudo docker rmi  -f  << docker image ID>>   // delete docker image with  this ID
    sudo docker rm   -f << docker  container ID>>   // delete docker container with  this ID
    sudo docker image ls  //To see the image you just pulled, type the below command
    sudo docker run hello-world
    sudo docker run --rm -it  hello-world:latest  // runs latest and rm deletes after it runs 
    

# DLtrain working with CNN Model  (via Docker )

A drawback with this multi-platform support is that one Docker image has to be built for each specific target platform, i.e. a specific operating system and hardware architecture. So, if you want to be able to run your Docker container on both Linux and Windows using Intel 64-bit hardware you must create two Docker images, one for Linux and one for Windows. You also have to create each Docker image using a Docker engine running on the specific target platform.


A Dockerfile is a text document that contains the list of commands which can be invoked by a user using the command line in order to assemble an image  Docker Image read-only templates are nothing but the building blocks of a Docker Container  . A Docker Container is the running instance of a Docker Image.


       /dev/app$ sudo docker login

Authenticating with existing credentials... <br>
WARNING! Your password will be stored unencrypted in /home/jk/.docker/config.json. <br>
Configure a credential helper to remove this warning. See <br>
https://docs.docker.com/engine/reference/commandline/login/#credentials-store <br>


Login Succeeded <br>
appbuildforbbuntu  Build this first  (Base container)  <br>
app container is  building need to taken up after Base Container build <br>

      dltrain:1.0.0


// following worked to push local image to docker hub


     /dev/app$ sudo docker tag  dltrain:1.0.0 jkhome/dltrain:1.0.0
     /dev/app$ sudo docker push jkhome/dltrain:1.0.0
     /dev/app$ sudo docker push jkhome/dltrain:1.0.0

The push refers to repository [docker.io/jkhome/dltrain]

     d55ee02ea098: Pushed
     6557b027d9ae: Pushed
   
      ....

     .....

      805802706667: Pushed

       1.0.0: digest: sha256:94d71c05c731b64676eff04b3e975868 size: 2610

       /dev/app$


Build appbuildforbbuntu:0.1.0 and keep this is ready then build dltrain:1.0.0 
Mentioned above process is worked well


       /dev/app$sudo docker build . -t appbuildforbbuntu:0.1.0
       /dev/app$   sudo docker build . -t dltrain:1.0.0


# Use Docker Image of Dltrain

        dev/app$    docker run --rm -it dltrain:1.0.0 -m train -s NewNetwork.dat -c  network_prop.txt -n 2000 -e 3

Train Deep learning Networks by using  DLtrain with CNN Model  (via Docker )

//////sudo docker pull jkhome/dltrain:1.0.0

       /tst1$ sudo docker pull jkhome/dltrain:1.0.0

       1.0.0: Pulling from jkhome/dltrain

171857c49d0f: Already exists <br>
419640447d26: Already exists <br>
61e52f862619: Already exists <br>
4ac9b033c679: Pull complete <br>
bf21ea76f89b: Pull complete <br>
fcf360b180ac: Pull complete <br>
043a8708b6d2: Pull complete <br>
138c09806188: Pull complete <br>
5e15a5a3d6b4: Pull complete <br>
0978d35d7bc5: Pull complete <br>
2cd4d5cea17d: Pull complete <br> 
Digest: sha256:94d71c05c716e7d234e66cfa51f58120d47b209aaf31b64676eff04b3e975868 <br>
Status: Downloaded newer image for jkhome/dltrain:1.0.0 <br>
docker.io/jkhome/dltrain:1.0.0 <br>


This image is pulled from docker hub and same used in the following ( worked well)

         /tst1$  sudo docker run --rm -it jkhome/dltrain:1.0.0 -m train -s NewNetwork.dat -c  network_prop.txt -n 2000 -e 3

 

Loaded 2000 image data!



Constructed required matrices.

Loaded network successfully!

       1% | Epoch left: 2
       2% | Epoch left: 2
       3% | Epoch left: 2
       4% | Epoch left: 2
       5% | Epoch left: 2
       6% | Epoch left: 2
       7% | Epoch left: 2

DLtrain used to infer given image

      dev//app$  sudo docker run --rm -it dltrain:1.0.0 -m infer -s NewNetwork.dat -c  network_prop.txt -n 14

      /tst1$  sudo docker run --rm -it jkhome/dltrain:1.0.0 -m infer -s NewNetwork.dat -c  network_prop.txt -n 14

Loaded 14 image data!

Constrcuted required matrices

Loaded network successfully!
       Running inference on 14 images.Number: 5 | Guessed: 7 | Accuracy: -nan
       Number: 0 | Guessed: 0 | Accuracy: 100
       Number: 4 | Guessed: 4 | Accuracy: 100
       Number: 1 | Guessed: 1 | Accuracy: 100
       Number: 9 | Guessed: 4 | Accuracy: 75
       Number: 2 | Guessed: 4 | Accuracy: 60
       Number: 1 | Guessed: 1 | Accuracy: 66.6667
       Number: 3 | Guessed: 3 | Accuracy: 71.4286
       Number: 1 | Guessed: 1 | Accuracy: 75
       Number: 4 | Guessed: 4 | Accuracy: 77.7778
       Number: 3 | Guessed: 3 | Accuracy: 80
       Number: 5 | Guessed: 1 | Accuracy: 72.7273
       Number: 3 | Guessed: 0 | Accuracy: 66.6667
       Number: 6 | Guessed: 6 | Accuracy: 69.2308


