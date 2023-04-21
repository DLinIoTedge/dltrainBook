               
               
   # Get CPU Information        
               
               sudo apt install sofware -properties -common
               sudo add-aptrepository ppa:ubuntu-toolchain -r /test 
               sudo apt install  gcc -9 g++ -9
 
               cat /proc/cpuinfo
               processor 
               cpu : POWER9 altivec supported
               clock 2154 MHz
               
               sudo  lshw
               
               WorkDL
               descritption : PowerNV
               product : T2P9S01 Rev 1.01 ( rcs, talos )
               vendor : IBM
               width 64 bits
               capabilities smp   powernv   opal     ∗−core
               description :   Motherboard
               
               cat /proc/scsi/scsi
               cat /proc/cpuindo
               lspci 
               
               sudo apt install software-properties-common
	
  
               sudo add-apt-repository ppa:ubuntu-toolchain-r/test
	
	//sudo apt install gcc-7 g++-7 gcc-8 g++-8 gcc-9 g++-9
	
	            sudo apt install  gcc-9 g++-9
	
	            cat /proc/cpuinfo
	            processor    : 0
	            cpu   	 : POWER9, altivec supported
	            clock   	 : 2154.000000MHz
	            revision    : 2.2 (pvr 004e 1202)
	
	            sudo lshw
	            [sudo] password for jk:
	
	            WorkDL                   	 
	            description: PowerNV
	            product: T2P9S01 REV 1.01 (rcs,talos)
	            vendor: IBM
	            serial: A1000492
	            width: 64 bits
	            capabilities: smp powernv opal  *-core
	            description: Motherboard
	            physical id: 0  	*-cpu:0
	            description: POWER9, altivec supported
	            product: 02CY297
	            physical id: 20
	            bus info: cpu@0
	            version: 2.2 (pvr 004e 1202)
              	    serial: YA1935039090
	            slot: UOPWR.A100049-Node0-Proc0
	            size: 2154MHz
	            capacity: 3800MHz
            	    capabilities: performance-monitor cpufreq
            	    configuration: threads=4    	*-cache:0
            	    description: L1 Cache (instruction)
	            physical id: 0
	
	            size: 32KiB    	*-cache:1
	            description: L1 Cache (data)
	            physical id: 1
	            size: 32KiB    	*-cache:2
	            description: L2 Cache (unified)
	            physical id: 2
	            size: 512KiB    	*-cache:3
	            description: L3 Cache (unified)
            	    physical id: 3
            	    size: 10MiB 	*-cpu:1
	
	
            	    cat /proc/scsi/scsi
	            cat /proc/cpuinfo
	            lspci
                
