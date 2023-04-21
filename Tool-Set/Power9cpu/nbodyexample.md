
 # Build nbody application  for GPU hardware 
 
 Folder Location :   /5_Simulations/nbody/5_Simulations/nbody$ 
  
  		/5_Simulations/nbody/5_Simulations/nbody$ make
  
 		/usr/local/cuda-10.1/bin/nvcc -ccbin g++ -I../../common/inc  -m64	-ftz=true -gencode arch=compute_30,code=sm_30 -gencode arch=compute_35,code=sm_35 -gencode arch=compute_37,code=sm_37 -gencode arch=compute_50,code=sm_50 -gencode arch=compute_52,code=sm_52 -gencode arch=compute_60,code=sm_60 -gencode arch=compute_61,code=sm_61 -gencode arch=compute_70,code=sm_70 -gencode arch=compute_75,code=sm_75 -gencode arch=compute_75,code=compute_75 -o bodysystemcuda.o -c bodysystemcuda.cu
	
		/usr/local/cuda-10.1/bin/nvcc -ccbin g++ -I../../common/inc  -m64	-ftz=true -gencode arch=compute_30,code=sm_30 -gencode arch=compute_35,code=sm_35 -gencode arch=compute_37,code=sm_37 -gencode arch=compute_50,code=sm_50 -gencode arch=compute_52,code=sm_52 -gencode arch=compute_60,code=sm_60 -gencode arch=compute_61,code=sm_61 -gencode arch=compute_70,code=sm_70 -gencode arch=compute_75,code=sm_75 -gencode arch=compute_75,code=compute_75 -o nbody.o -c nbody.cpp

		/usr/local/cuda-10.1/bin/nvcc -ccbin g++ -I../../common/inc  -m64	-ftz=true -gencode arch=compute_30,code=sm_30 -gencode arch=compute_35,code=sm_35 -gencode arch=compute_37,code=sm_37 -gencode arch=compute_50,code=sm_50 -gencode arch=compute_52,code=sm_52 -gencode arch=compute_60,code=sm_60 -gencode arch=compute_61,code=sm_61 -gencode arch=compute_70,code=sm_70 -gencode arch=compute_75,code=sm_75 -gencode arch=compute_75,code=compute_75 -o render_particles.o -c render_particles.cpp

		/usr/local/cuda-10.1/bin/nvcc -ccbin g++   -m64  	-gencode arch=compute_30,code=sm_30 -gencode arch=compute_35,code=sm_35 -gencode arch=compute_37,code=sm_37 -gencode arch=compute_50,code=sm_50 -gencode arch=compute_52,code=sm_52 -gencode arch=compute_60,code=sm_60 -gencode arch=compute_61,code=sm_61 -gencode arch=compute_70,code=sm_70 -gencode arch=compute_75,code=sm_75 -gencode arch=compute_75,code=compute_75 -o nbody bodysystemcuda.o nbody.o render_particles.o  -L/usr/lib/nvidia-compute-utils-418 -lGL -lGLU -lglut
	
		mkdir -p ../../bin/ppc64le/linux/release

		cp nbody ../../bin/ppc64le/linux/release
	


 # run nbody application  by GPU hardware 
 
 nbody example is ditributed in samples folder of  CUDA SDK


		/nbody$ ./nbody  -benchmark -hostmem
	
	 		Run "nbody -benchmark [-numbodies=<numBodies>]" to measure performance.
			-fullscreen   	(run n-body simulation in fullscreen mode)
			-fp64         	(use double precision floating point values for simulation)
			-hostmem      	(stores simulation data in host memory)
			-benchmark    	(run benchmark to measure performance)
			-numbodies=<N>	(number of bodies (>= 1) to run in simulation)
			-device=<d>   	(where d=0,1,2.... for the CUDA device to use)
			-numdevices=<i>   (where i=(number of CUDA devices > 0) to use for simulation)
			-compare      	(compares simulation results running once on the default GPU and once on the CPU)
			-cpu          	(run n-body simulation on the CPU)
			-tipsy=<file.bin> (load a tipsy model file for simulation)
	
NOTE: 
The CUDA Samples are not meant for performance measurements. Results may vary when GPU Boost is enabled.
	
		> Windowed mode
		> Simulation data stored in system memory
		> Single precision floating point simulation
		> 1 Devices used for simulation
		GPU Device 0: "GeForce RTX 2070" with compute capability 7.5
	
		> Compute 7.5 CUDA device: [GeForce RTX 2070]
		36864 bodies, total time for 10 iterations: 60.494 ms
		= 224.644 billion interactions per second
		= 4492.870 single-precision GFLOP/s at 20 flops per interaction

  
  
