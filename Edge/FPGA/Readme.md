

#  1. Deploy in Xilinx Zynq UltraScale+ MPSoC ZU3EG A484

## 1.1 Getting Started with Ultra96 V2

Board is using

1. Xilinx Zynq UltraScale+ MPSoC ZU3EG A484
2. microSD card
3. Power adapter 12V @ 2A AC/DC converter compatible with the 96Boards specification



 ## 1.2 Install SDx
 
   //SDx installation  (  Ubuntu 18.04 on x86 machine )
   
            ./xsetup
         
   //Choose devices  SDSoc = Zynq 7000  ultrascale+ + MPsoc 30 day trial

  // Install  Board Defined Files 

         unzip bdf-master.zip
         $ cp -a ./bdf-master/.
         /tools/Xilinx/Vivado/2018.3/data/boards/board_files

   //Avnet Board Definition Files (BDF) is obtained from URL [link](https://github.com/Avnet/bdf) 
   
       

   // Unzip Avnet Technical Training Notes 

	/U96AI_student_20191028/U96AI/2018_3/Lab_instructions/

	U96AI_2018_3_lab_0_v2.pdf
	U96AI_2018_3_lab_1_v2.pdf
	U96AI_2018_3_lab_6_v2.pdf

 ## 1.3 Install DNNK

Steps for Installing DNNDK on the native linux machine is given in the following. 
how to install the Deep Neural Network Development Kit (DNNDK v3.0) from the following URL, get gz file

[URL link](https://www.xilinx.com/products/design-tools/ai-inference/ai-developer-hub.html#edgeXlnx_dnndk_v3.0_190624.tar.gz)


 



