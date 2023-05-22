
#  sysML Model  

##  Gaphor Installation 

      sudo apt install python3-virtualenv
      virtualenv sysML
      source /home/jk/sysML/local/bin/activate

      pip install gaphor
      // not worked well because of the above following. 

      sudo apt install libcairo2-dev pkg-config python3-dev
      pip3 install pycairo
      pip install --upgrade pip setuptools wheel

      pip install gaphor 
      // this time , it worked well

      python3 --version
      pip install jupyter

      jupyter notebook
      // above to open in browser

      pip install jupyterlab

      https://gaphor.org/tutorials

      // Get Start
      https://docs.gaphor.org/en/latest/getting_started.html  

       Model Browser
       Diagram Element Toolbox
      Diagrams
      Property Editor

    // following to launch gaphor
    gaphor

    //above is not working,,  thus the following
    sudo apt-get install libgtk-3-dev

    issues [usseful ](https://github.com/jamiemcg/Remarkable/issues/368 )
    
     File "/home/jk/.local/lib/python3.10/site-packages/gaphor/ui/__init__.py", line 12, in <module>


      raise ValueError('Namespace %s not available for version %s' %
      ValueError: Namespace Gtk not available for version 5.0
    
      in the above file..  change from 5 to 4 it will work
      pyut # in the following ,,,let it choose version of its choice
      #gi.require_version("Gtk", "4.0")
      #gi.require_version("Gdk", "4.0")
      #gi.require_version("GtkSource", "4")
      gi.require_version("Adw", "1")
      
      dpkg -l | grep 'gtksource'


      sudo apt-get update

      libgtksourceview-3.0-dev
      //  next try
      gaphor
      
Ref

https://packaging.python.org/en/latest/tutorials/installing-packages/#creating-virtual-environments
  
   ##  Using Gaphor
  
  
