
# TensorFlow in Virtual Environment
Following List provides TensorFlow and its associated tool set.  <br>
Machine is Ubuntu OS 22.04

## Install Virtualenv 
How to bring up Virtual Environment ? ( Anaconda can be instead of Virtual Environment  )  <br>
       
      
           /jj/model1$    sudo   apt−get  install python-virtualenv   

Check  version of  installed virtualenv  

          /jj/model1$ virtualenv  --version
           1.11.4
          
Where WorkDL is name given to Virtual Environment  

          /jj/model1$ virtualenv WorkDL
          
 User  can use python interpreter of their choice. For example, if user is keen on python 2.7 then 
 following command is useful. 
 
        ./jj/model1$ virtualenv −p   /usr /bin /python2.7   WorkDL

Or change the python interpreter globally  with an env variable in  /.bashrc 

        ./jj/model1$   export   VIRTUALENVWRAPPER PYTHON=/usr/bin/python2 . 7   

User required to use following command to  Activate   Virtual Environment

        ./jj/model1$ source WorkDL/bin/activate  

         ./jj/model1$ pip  −−version 
          pip    1.5.4   from
          /home/jj/model1/WorkDL/local/lib/python3.5/site−packages
          (python   3.5 )
 
 Check version of Virtual Environment.
 
          ./jj/model1$   virtualenv --version  
        1.11.4

Use following command inside Virtual Environment. pip and pip3 are used in the following.
         pip list 
           pip    (1.5.4)
           setuptools    (2.2)
           
          pip3 list 
           pip    (1.5.4)
           setuptools    (2.2)

Location of pip is obatined by using following command.
            which pip
            /home/jj/model1/WorkDL/bin/pip
            

List installed packages name.
             pip freeze > requirments.txt 


## Install Tensorflow 2.0 
      


          sudo   apt   update
          sudo   apt   upgrade
          sudo   apt   install   python3−pip
          sudo   apt   install    python3−venv
          python3  −m  venv     WorkDL
          cd   WorkDL
          ls 
          cd   //
          source   WorkDL/bin/activate  
          pip   install jupyter  
          pip   install jupyterlab  
          pip   install tensorflow    

OR
    ### Step 1 :
      check availability of  Python ( in not, install )
               python3 --version 
               python 3.5.2 or high



    ### Step 2: 
     Install PIP id not installed
              pip3 --version
              pip 7.1.2 from /usr/local/lib/python3.5/site−packages  
              (python 3.5)
   ### Step 3:  
      Install  Virtual Environment.
       
             virtualenv --version  
             1.11.4
  
  ### Step 4 :
     This is to make python3 as default version in this virtual env 
              virtualenv --system-site-packages -p python3 ./venv

 ###  Step 5 :
            source ./ venv/bin/activate 

### Step 6: .  
  Use pip3 and install necessary dependencies for TF 2.0 to work . May be 137 packages or more required 
  for TensorFlow 2.0 to work  successfully. Huge list ( beware of issues on each dependency versions). 


 ### Step 7 :
  install TensorFlow 2.0 or higher versions.
  
              pip install tensorflow  ==  2.0.0-alpha
              /WorDL/bin$ python3 -c 'import tensorflow as tf ; print(tf.version)'
              2.0.0

In case TF 2.0 not installed then following will be shown for above command

           ImportError :   No   module   named   ’tensorflow’



# TensorFlow with Keras
4. How to bring up Python 3 and Tensorflow 2.0  enabled Keras 

Manual mode installation
( finally, back to NO automation) 

              /WorkDL/jetson$ pip install h5py
              /WorkDL/jetson$ pip install scikit-learn
              /WorkDL/jetson$ pip install scipy
              /WorkDL/jetson$ pip install jupyter
              /WorkDL/jetson$ pip install Pillow
              /WorkDL/jetson$ pip install grpcio-tools
              /WorkDL/jetson$ pip install pyhocon
              /WorkDL/jetson$ pip install dill
              /WorkDL/jetson$ pip install typing
              /WorkDL/jetson$ pip install overrides
              /WorkDL/jetson$ pip install nltk
              /WorkDL/jetson$ pip install spacy
              /WorkDL/jetson$ pip install numpy
              /WorkDL/jetson$ pip install matplotlib
              /WorkDL/jetson$ pip install pylint==1.6.5
              /WorkDL/jetson$ pip install ptest
              /WorkDL/jetson$ pip install pytest -pythonpath
              /WorkDL/jetson$ pip install pytest -cov
              /WorkDL/jetson$ pip install flaky
              /WorkDL/jetson$ pip install coverage
              /WorkDL/jetson$ pip install codecov
              /WorkDL/jetson$ pip install argparse
              /WorkDL/jetson$ pip install pandas==0.19.2
              /WorkDL/jetson$ pip install tqdm
              /WorkDL/jetson$ pip install sphinx==1.6.5
              /WorkDL/jetson$ pip install bleach==2.1.0
              /WorkDL/jetson$ pip install spinx-autobuild
              /WorkDL/jetson$ pip install numpydoc
              /WorkDL/jetson$ pip install spinx rtd theme
              /WorkDL/jetson$ pip install pypandoc



 There is issue in dependency and may be this is not required for Linux
 
              pip3 install wine
              sudo pip3 install keras
              numpy.distutils.system info.NotfoundError
              no la[ck/blas resoruces found
              
User can conform "keras" installed correctly
import keras :

  Note.. for current versions of TF will include keras as well ( thus it is easy) 

# Jupyter Notebook
How to bring up Python 3 enabled Jupyter Notebook

upgrade  python  from   3.4 to 3.5 
            sudo   apt−get    install    python3.5
            python3  −−version 

             //   How   to    install  a   jupyter r   notebook   i n
             //   ubuntu   1 4 . 0 4?   Python   Prerequisites 
              sudo   apt   install   python3−pip
              sudo   apt    install    ipython3
              pip3    install   jupyter



# TensorFlow via Docker
How to bring up Python 3  and TF in Docker 

Good to run TF in docker by using default tag: latest

               docker pull tensorflow/tensorflow 
               latest: Pulling from tensorflow/tensorflow 
               Digest :    sha256 : 0 1 7 ccbb4f04054a4
               Status :   Image   is  up   to   date   for  tensorflow/tensorflow : latest
               
               docker pull tensorflow/tensorflow :  devl -gpu
               docker pull tensorflow/tensorflow  {latest -gpu-jupyter
               
               // following is used
               docker pull tensorflow/tensorflow : latest -cpu-jupyter
               
               Error repsonse from daemon : manifest for
               tensorflow/tensorflow :latest -cpu-jupyter not found
               
               // not worked , it is asking for user ID
               docker run -i t -p 8888:8888 tensorflow/tensorflow 
               docker : error response from daemon : driver failed
               programming external connectivity on end point gracious franklin 3cf9c25):
               Error starting user land proxy: listen tcp 0.0.0.0:8888
               bind : address already in use
               
               
              // not good ..
              // Mount source code ,and set workind dir
              docker container run -rm -i t \\
              -v $ (app): /app \
              --workdir /app \
              
              
              // Run as given user and build env image..make assets  ..not good
              --user 1000:1000 \
                      mydocker /my-build-environment : latest \ 
                      
              docker container run --rm -i t --workdir /home/jj/jetson --user $(ir-u): $(id-g)
              
              my−docker /my−build −environment : latest        make   assets
              Unable   to  find  image    ’my−docker /my−build −environment : latest  ’
              
              locally docker : Error response from daemon : pull access denied for my-docker /my-build -environment
              repository does not exist 
              or
              may requires 'docker login' see 'docker run --help'
              
              // following is not working 
              //  it suppose to automatically locate UID and GID and use it
              docker run -i t --user $(id -u) : $(id -g) -g 8888:8888 tensorflow/tensorflow
              docker: error response from daemon : driver failed programming external connectivity on endpoint
              eloquet 
              bind: address already in use
              
              // following is used to check TF installation
              docker run -i t --user $ (id -u) $(id-hg) --rm tensorflow/tensorflow python -c "import tensorflow as tf"
              tf.enable eager execution();
              print(tf.reduce sum(tf.random normal([1000,1000])))"
              1019-05-18 
              Your CPU supports instructions that this tensorflow binary was not compiled to use " AVX2 FMA
              
              I tensorflow/core/platform/profile utils/cpu utils.cc :94 
              CPU frequency:   2711950000   Hz
              
              I tensorflow/compiler/xla/service/service.cc:150
              XLA service 0 x3337b40   excuting   computations   on
               platform   Host .    Devices :
              
               I tensorflow/compiler/xla/service/service.cc:158
              StreamExecutor   device  ( 0 ) :   <undefined >,  <undefined>
               t f . Tensor(542.5927 ,   shape =() ,   dtype=float32 )
              
               docker run -i t --user $(id -u) $(id -g) --rm tensorflow/tensorflow 
               You are running this container as a user with this 1000 and group 1000
               which   should   map   to   the   ID   
               and   group   f o r   your
               user to the docker host. Great!
   
               tf -docker / > python 
               Python   2.7.12    ( defaultt  ,   Nov   12   2018 ,  14:36:30 )
               [GCC   5 . 4 . 0    20160609]   on   linux2
               Type "hel" "copyright" or "license" for more information
               
               >> x =10
               >> print(x)
               10
               >>quit()
               tf =docker /> exit
               /jj/jetson/$
                 


10. How to bring up Python 3 enabled  JupyterLab 
  
      Setting up JupyterLab with virtual environments on Windows 10
  
      Step 1 – Download Anaconda . [Link](https://www.anaconda.com/products/distribution#Downloads) 
         Go to the Ananaconda website for the Windows distribution and download the Python 3.8 installer
         
      Step 2 – Install Anaconda  <br>
      Step 3 – Set Chrome as web browser for JupyterLab  <br>
      Step 4 – Install nb_condas_kernels  <br>
      Step 5 – Edit the Conda configuration file to create environments with default packages  <br>
      Step 6 – Create the desired environments  <br>
      Step 7 – Start JupyterLab  <br>

  Use the [Link   ](https://mycartablog.com/2019/07/09/from-zero-to-jupyterlab-pro-on-windows-10/)  to install Jupyter-lab on your Windows 10 Machine
  
 7. How to bring up Python 3 enabled jupyterlab-latex
 
