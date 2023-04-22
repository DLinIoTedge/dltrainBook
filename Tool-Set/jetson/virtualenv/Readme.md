    
    # Working with Jetson Series GPUs
    
              /tmp/jetson$ virtualenv WorkDL
              New python executable in jkDL/bin/python
              Installing setuptools, pip...done.

User can also use the Python interpreter of your choice (like python2.7).

              /tmp/jetson$ virtualenv -p /usr/bin/python2.7 WorkDL  


             /tmp/jetson$ virtualenv WorkDL
              New python executable in jkDL/bin/python
              Installing setuptools, pip...done.

User can also use the Python interpreter of your  choice (like python2.7).

              /tmp/jetson$ virtualenv -p /usr/bin/python2.7 WorkDL

or change the interpreter globally with  an env variable in ~/.bashrc:
                
                $ export VIRTUALENVWRAPPER_PYTHON=/usr/bin/python2.7 ( required )

Activate Virtual Environment

              source WorkDL/bin/activate

From this stage, any package that you install using pip will be 
placed in  the WorkDL folder, isolated from the global Python  
installation. Following used to check version of pip 
in this environment 

        /tmp/jetson$ pip --version
          pip 1.5.4 from 

        /home/tmp/jetson/WorkDL/local/lib/python3.5/site-packages 
          (python 3.5) 

Virtual environment  1.7 onwards appears to be  good  and will not use will not include the  
packages that are installed globally

          /tmp/jetson$ virtualenv --version
          1.11.4

I did try to get tools that are part of WorkDL  and for that i had used pip and pip3.  
both are giving  same result

          /tmp/jetson$ pip list
          pip (1.5.4)
          setuptools (2.2)

          /tmp/jetson$ pip3 list
          pip (1.5.4)
          setuptools (2.2)

I did try to get location of pip installed in workDL .
For that  I did use the following.

        /tmp/jetson$ which pip
        /home/jkhome/tmp/jetson/jkDL/bin/pip

Use freeze to keep your environment consistent.  Presently,  requirements.txt is empty. 
( this is equal to use pip list to get name of installed packages )

        /tmp/jetson$ pip freeze > requirements.txt



      sudo apt update
      sudo apt upgrade
      sudo apt install python3-pip
      sudo apt install python3-venv
      python3 -m venv  jkDL
      
      cd jkDL
      ls
      cd //
      source jkDL/bin/activate
      pip install jupyter
      pip install jupyterlab
      pip  install tensorflow
