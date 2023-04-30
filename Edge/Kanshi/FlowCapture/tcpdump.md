


# Use tcpdump to read  wlp3s0  and write in to pcap file

		sudo tcpdump -w jkmachine.pcap -c 4 -i wlp3s0
		tcpdump: listening on wlp3s0, link-type EN10MB (Ethernet), capture size 262144 bytes
		4 packets captured
		28 packets received by filter
		0 packets dropped by kernel

		ls -l 
		4 -rw-r--r-- 1 root	root    	2314 Jan 20 14:47 jkmachine.pcap	


# Use tcpdump to read jk1.pcap file.

write into file 




	      sudo tcpdump -r jk1.pcap
	      [sudo] password for abcd
	      reading from file jk1.pcap, link-type EN10MB (Ethernet)
	      15:03:20.103702 IP 113.43.149.34.bc.googleusercontent.com.https > jk.55694: Flags [F.], seq 4259849444, ack 2757208013, win 289, options [nop,nop,TS val 2822279953 ecr 603545624], length 0
	      15:03:20.106087 IP jk.55694 > 113.43.149.34.bc.googleusercontent.com.https: Flags [P.], seq 1:25, ack 1, win 501, options [nop,nop,TS val 603575679 ecr 2822279953], length 24
      	15:03:20.107332 IP jk.55694 > 113.43.149.34.bc.googleusercontent.com.https: Flags [F.], seq 25, ack 1, win 501, options [nop,nop,TS val 603575682 ecr 2822279953], length 0
	      15:03:20.113917 IP 113.43.149.34.bc.googleusercontent.com.https > jk.55694: Flags [R], seq 4259849445, win 0, length 0
	      15:03:20.115940 IP 113.43.149.34.bc.googleusercontent.com.https > jk.55694: Flags [R], seq 4259849445, win 0, length 0
	      
	      
	      
	      
	      
		sudo tcpdump -r jkmachine.pcap
			reading from file jkmachine.pcap, link-type EN10MB (Ethernet)
			14:47:54.496965 ARP, Request who-has 192.168.1.7 tell _gateway, length 28
			14:47:55.009322 IP jk.35166 > maa05s28-in-f14.1e100.net.443: UDP, length 1357
			14:47:55.011909 IP jk.35166 > maa05s28-in-f14.1e100.net.443: UDP, length 660
			14:47:55.015166 IP jk.35166 > maa05s28-in-f14.1e100.net.443: UDP, length 41

