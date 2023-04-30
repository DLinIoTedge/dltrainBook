

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
