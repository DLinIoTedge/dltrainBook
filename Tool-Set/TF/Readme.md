

Following List provides TensorFlow and its associated tool set.  <br>
Machine is Ubuntu OS 22.04

# Install Virtualenv 
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

        ./jj/model1$   export   VIRTUALENVWRAPPER PYTHON=/usr / bin / python2 . 7   

User required to use following command to  Activate   Virtual Environment

        ./jj/model1$ source WorkDL/bin/activate  

         ./jj/model1$ pip  −−version 
          pip    1.5.4   from
          /home/jj/model1/WorkDL/local/lib/python3.5/site −packages
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


      
2. How to bring up Tensorflow 2.0 

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



4. How to bring up Python 3 and Tensorflow 2.0  enabled Keras 
5. How to bring up Python 3 enabled Jupyter Notebook
6. How to bring up Python 3  and TF in Docker 
7. How to bring up Python 3 enabled  JupyterLab 
  
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
 
