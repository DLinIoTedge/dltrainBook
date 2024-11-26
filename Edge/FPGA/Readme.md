#  1. Deploy in in INTEL FPGA by using ONNX model

 Sample Code ( Y = Ax +b  to  GPU )
 
  trt.py file is having sample code to deploy ONNX in FPGA

 Deploying a TensorFlow Model in Intel FPGA via ONNX Model Graph

Deploying a TensorFlow model on Intel FPGA requires converting the model into an optimized format that FPGAs can process efficiently. The Open Neural Network Exchange (ONNX) format serves as a bridge, enabling TensorFlow models to be transformed into an intermediate representation suitable for hardware-specific optimization. By leveraging ONNX's interoperability and Intel's OpenVINO toolkit, developers can seamlessly deploy AI workloads on Intel FPGA, enabling high-performance and low-latency inference.

The process begins with exporting a TensorFlow model into ONNX format using libraries such as tf2onnx. The exported ONNX model graph is then passed through Intel's OpenVINO Model Optimizer, which optimizes the graph by pruning unnecessary layers, quantizing weights, and converting operations into an Intermediate Representation (IR). This IR format is FPGA-compatible, enabling inference on edge devices with minimal latency. Once optimized, the FPGA plugin in OpenVINO facilitates execution by mapping the model's computational graph onto the FPGA fabric for parallel processing.

Intel's FPGA SDK for OpenCL further supports deploying customized workloads by compiling the ONNX model into a bitstream that programs the FPGA hardware. This combination of ONNX, OpenVINO, and FPGA-specific toolchains allows developers to efficiently offload complex AI workloads to the FPGA, achieving performance improvements for applications such as real-time image recognition, anomaly detection, and sensor fusion. By using this pipeline, developers ensure scalability, energy efficiency, and the ability to meet the demanding requirements of modern AI systems.

## 1.1 Prepare the Environment
Before starting, ensure the following:
- **Intel FPGA Board**: Supported models include Stratix, Arria, or Cyclone series.
- **Intel Toolkits Installed**:
  - Intel oneAPI Toolkit
  - OpenVINO Toolkit
- **Python Libraries**:
  - `numpy`
  - `tensorflow`
  - `openvino`
- Your trained TensorFlow model (`.pb` format).

---



## 1.2 Convert the TensorFlow Model
Convert your TensorFlow model to an FPGA-compatible format using the **OpenVINO Model Optimizer**:
```bash
mo_tf.py --input_model tensorflow_model.pb --output_dir optimized_model --data_type FP16

## 1.3 Install Intel FPGA Toolchain
To program the FPGA, install the required toolchains.

### Download and Install oneAPI Toolkit
Use the following commands to download and install the Intel oneAPI toolkit:

```bash
wget https://software.intel.com/content/dam/develop/external/us/en/prodtools/oneapi/installer/IntelOneAPIInstallerLinux.zip
unzip IntelOneAPIInstallerLinux.zip
./install.sh

## 1.4 Program the FPGA
To execute the optimized model on Intel FPGA, compile the OpenCL kernel using the following command:

```bash
aoc model.aocx

---

## 1.5 Deploy and Run the Model
Once the model is optimized, deploy and run it using the **OpenVINO Inference Engine** on the Intel FPGA.

### Python Example:
Use the following Python code to load and execute the model:

```python
from openvino.inference_engine import IECore

# Initialize the Inference Engine
ie = IECore()

# Load the network
net = ie.read_network(model="fpga_model.xml", weights="fpga_model.bin")
exec_net = ie.load_network(network=net, device_name="FPGA")

# Input data and inference
input_data = ... # Prepare your input data here
result = exec_net.infer(inputs={input_name: input_data})

print("Inference Result:", result)

---

## 1.6 Evaluate and Optimize Performance
After deploying the model, it's important to evaluate and optimize its performance for maximum efficiency. Intel provides tools specifically designed for this purpose:

### Recommended Tools:
1. **[Intel VTune Profiler](https://software.intel.com/content/www/us/en/develop/tools/vtune.html)**  
   Use VTune Profiler to analyze performance metrics such as latency, throughput, and hardware utilization.

2. **[Intel Advisor](https://software.intel.com/content/www/us/en/develop/tools/advisor.html)**  
   Intel Advisor helps identify optimization opportunities for model execution, including vectorization and memory access patterns.

### Key Steps:
- Run profiling tools while the model is executing on the FPGA.
- Identify performance bottlenecks (e.g., memory bandwidth, compute unit utilization).
- Optimize the OpenCL kernel or adjust model parameters based on the insights.

---

---

## 1.7 Verify the Output
Once the model is deployed, verify its accuracy and performance by validating the output against expected results.

### Key Steps for Verification:
1. **Input Preprocessing**: Ensure the input data is correctly formatted and preprocessed to match the model's requirements.
2. **Data Pipeline Accuracy**: Check for consistency in the input data flow from preprocessing to inference.
3. **Output Validation**: Compare the model's predictions or outputs against known expected values or benchmarks.

### Debugging Tips:
- If results are inconsistent, revisit the model optimization process to ensure no critical information was lost during conversion.
- Check the OpenCL kernel for compatibility issues or inefficiencies.
- Validate each step in the pipeline to isolate potential errors.

By following these steps, you can ensure the deployed model performs accurately and meets the desired application requirements.

------

## Resources
For more information and further guidance, explore the following resources:

- [Intel oneAPI Toolkit](https://software.intel.com/content/www/us/en/develop/tools/oneapi.html)  
  The oneAPI toolkit is a comprehensive set of tools to program Intel FPGAs and other hardware for accelerated computing.

- [Intel OpenVINO Toolkit](https://software.intel.com/content/www/us/en/develop/tools/openvino.html)  
  OpenVINO Toolkit helps optimize deep learning models for Intel hardware, including FPGAs, CPUs, and VPUs.

- [Intel FPGA SDK for OpenCL](https://www.intel.com/content/www/us/en/programmable/solutions/fpga/overview.html)  
  Provides the necessary SDK to use OpenCL on Intel FPGAs and compile OpenCL code into a format suitable for FPGA execution.

- [TensorFlow Official Site](https://www.tensorflow.org/)  
  The official site for TensorFlow, an open-source platform for machine learning, where you can learn about and access tools for training models.

---

## 2. Convert the TensorFlow Model
Convert your TensorFlow model to an FPGA-compatible format using the **OpenVINO Model Optimizer**:

```bash
mo_tf.py --input_model tensorflow_model.pb --output_dir optimized_model --data_type FP16
  
#  2. Deploy in Xilinx Zynq UltraScale+ MPSoC ZU3EG A484



Ultra96 V2 Board is using

1. Xilinx Zynq UltraScale+ MPSoC ZU3EG A484
2. microSD card
3. Power adapter 12V @ 2A AC/DC converter compatible with the 96Boards specification


## 2.1  microSD card 

microSD card in your kit is blank and must have the Linux boot files programmed.
	 Go to  link [URL]( https://avtinc.sharepoint.com/teams/ET-Downloads/Shared%20Documents/Forms/AllItems.aspx?id=%2Fteams%2FET%2DDownloads%2FShared%20Documents%2Fprojects%2Fpublic%5Frelease%2F2020%2E1%2FOOB%2Fultra96v2%5Foob%5F2020%5F1%5F210303%5F8GB%2Ezip&parent=%2Fteams%2FET%2DDownloads%2FShared%20Documents%2Fprojects%2Fpublic%5Frelease%2F2020%2E1%2FOOB&p=true&ga=1) and download the microSD card image. 
	 
File name is Ultra96v2_oob_2018_3_190530.zip

	 ( file download in progress, need to use Micro SD card with 16 GB storage capacity )
	 
MicroSD card with 8GB (Class 10 recommended) or more for storage  16 GB Micro SD card required. NOTE: In both cases ensure the included microSD card is fully inserted in the microSD card cage.

## 2.2 Etcher tool

 Follow instructions to use Etcher to program the microSD card with the image.
 Use {LINK(https://www.raspberrypi.org/magpi/pi-sd-etcher/ ) to get tool set in your pc for the following.
 
1. Install Etcher in Windows 10 System
2. Host machine can be Linux, Mac OS X, or Windows 10

## 2.3 Program Board

Insert the microSD card into the microSDsocket (J2).   ( this part is ok)
Keyboard  and USB mouse are required. Mini Display Port cable to HDMI or Display Port  Mini Display Port cable is required .
 Ultra96 USB-to-JTAG or UART Pod (required for terminal access) or Monitor is required connection to miniDP port.

## 2.4 Set Boot Mode

Set Boot Mode Switch (SW3) to SD boot,with switch 1 = OFF and 2 = ON as shown.  

## 2.5  Board Power supply issues

Attach a 12V DC power supply to the DC Power Supply Jack (J10). NOTE: DC power supply is not included in the Ultra96-V2 kit. It must be purchased as an accessory. Green LED D17 will light indicating 12V power is live.  ( Power supply is there but 4 A instead of 2 A)  Ultra96 with power supply is available  12V @ 2A AC / DC converter compatible with the 96Boards specification, but 12V @ 4 A is given

## 2.6  Power ON

 Press and release the power button (SW4).   Green Power On LED (D2), \lstinline{Red INIT_B LED (D5) }  and the Green User LEDs should also illuminate.

After a few seconds, \lstinline{INIT_B LED }  will turn off and Blue DONE LED (D1) will illuminate   ( this part is ok)

## 2.7 Started Guids

Ultra96-V2    has now booted Linux and several experiments are possible. Please go to [URL](https://www.avnet.com/wps/portal/us/products/avnet-boards/avnet-board-families/ultra96-v2/)    and download the Getting Started Guide for more instructions. ( this part is ok)
 
 ## 2.8  Shutdown sequence

When finished, press and release the power button (SW4) to initiate a shutdown sequence, which takes about 12 seconds. All LEDs with the exception of D17 will turn off. D17 will extinguish once the barrel jack is unplugged.  ( this part is ok)

## 2.9  Driver in Host Computer

Plug a microUSB cable between the Pod’s microUSB Port (J1) and a host computer. If the serial terminal drivers do not automatically install, you can manually install the driver for the FT2232H device. Visit [URL]( www.ftdichip.com/Drivers/VCP.htm  ) 
then download and install the appropriate driver for user operating system. Launch  Serial Terminal with settings of   115200-8-N-1. 
 
##  2.10 Micro service design 

Micro service design and deployment in web ( advantage )


# 3 Install SDx
 
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

# 4 Install DNNK

Steps for Installing DNNDK on the native linux machine is given in the following. 
how to install the Deep Neural Network Development Kit (DNNDK v3.0) from the following URL, get gz file

[URL link](https://www.xilinx.com/products/design-tools/ai-inference/ai-developer-hub.html#edgeXlnx_dnndk_v3.0_190624.tar.gz)


