
# Build DLtrain for Ubuntu X86

Workflow create DLtrain executable for Training in ubuntu  X86 machine.
 
 Let cpuTrain be root folder for the following steps.
 build folder created in cpuTrain folder for cmake 

	mkdir build
	cd mkdir
	cmake  −D  CMAKE C COMPILER=gcc −9  −D  CMAKE CXX COMPILER=g++−9   . .
	make

  

	cd cpuInfer	
	mkdir build
             cd mkdir
	cmake  −D  CMAKE C COMPILER=gcc −9  −D  CMAKE CXX COMPILER=g++−9   . .
	make

Above workflow create DLtrain executable for  Inference in ubuntu  X86 machine.  


