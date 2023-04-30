

# use tcpdump as a filter

		sudo tcpdump -XX -c 4 -i wlp3s0
		tcpdump: verbose output suppressed, use -v or -vv for full protocol decode
		listening on wlp3s0, link-type EN10MB (Ethernet), capture size 262144 bytes
		14:43:17.299274 IP maa05s28-in-f14.1e100.net.443 > jk.53372: UDP, length 39
		0x0000:  f8da 0c48 b9d1 7832 1b41 dffb 0800 4580  ...H..x2.A....E.
		0x0010:  0043 0000 4000 3d11 1e8e 8efa cdee c0a8  .C..@.=.........
		0x0020:  010b 01bb d07c 002f 90cf 559f 11e6 59d4  .....|./..U...Y.
		0x0030:  f1a6 92fe 24d1 46b0 177d 9170 d916 a612  ....$.F..}.p....
		0x0040:  d3fb 2083 1c9f bfd7 f468 ff93 71e7 d279  .........h..q..y
		0x0050:  9b                                   	.
		14:43:17.299331 IP maa05s28-in-f14.1e100.net.443 > jk.53372: UDP, length 38
		0x0000:  f8da 0c48 b9d1 7832 1b41 dffb 0800 4580  ...H..x2.A....E.
		0x0010:  0042 0000 4000 3d11 1e8f 8efa cdee c0a8  .B..@.=.........
		0x0020:  010b 01bb d07c 002e b98f 5f9f 11e6 6d6d  .....|...._...mm
		0x0030:  6807 5d8c d8e0 5145 64d2 dfc6 c370 d287  h.]...QEd....p..
		0x0040:  e314 6f29 063b b1ab 8b39 eb13 3c55 ef27  ..o).;...9..<U.'
		14:43:17.299341 IP maa05s28-in-f14.1e100.net.443 > jk.53372: UDP, length 262
		0x0000:  f8da 0c48 b9d1 7832 1b41 dffb 0800 4580  ...H..x2.A....E.
		0x0010:  0122 0000 4000 3d11 1daf 8efa cdee c0a8  ."..@.=.........
		0x0020:  010b 01bb d07c 010e e2e9 4d9f 11e6 6674  .....|....M...ft
		0x0030:  be20 15a0 2f82 922e 8c1d f710 a47a cd5c  ..../........z.\
		0x0040:  7123 571f c5d1 7790 383b 74c1 4593 f08d  q#W...w.8;t.E...
		0x0050:  6afc d1d3 0386 df0c 3344 8c39 9bbb 4162  j.......3D.9..Ab
		0x0060:  b8f9 7f0b fdcf 8838 8472 8ace 91ef 33ac  .......8.r....3.
		0x0070:  58e5 5e8b 5c00 e8f4 68e5 e03a bff5 95f5  X.^.\...h..:....
		0x0080:  ee4b 81c2 7165 3334 43a5 cb3f 057a 48c0  .K..qe34C..?.zH.
		0x0090:  2a41 fb60 76c6 b365 01bb d149 6dfa 6064  *A.`v..e...Im.`d
		0x00a0:  8f1b e393 14c4 da0c 92d8 25ee 787c 9bc0  ..........%.x|.. 
		0x00b0:  3b7d 19d4 4cb7 26fb fb81 df1f 7f29 ae7b  ;}..L.&......).{
		0x00c0:  44be b08c 57c7 63b8 d973 dace f51c c756  D...W.c..s.....V
		0x00d0:  77ee 5d31 8458 5c29 f10f dfef c63b feb6  w.]1.X\).....;..
		0x00e0:  445c 0fb4 b474 7307 4160 5a20 9649 af68  D\...ts.A`Z..I.h
		0x00f0:  6b1f af64 2540 26b3 e1b9 70eb d5af e423  k..d%@&...p....#
		0x0100:  216c 2afa c09f 2372 c7bd 93de 3321 5d80  !l*...#r....3!].
		0x0110:  250e 11ce 830c a0d7 4905 e543 bf0a 2eac  %.......I..C....
		0x0120:  00be c64d 2b8e 40c4 b660 178e 81ef 5044  ...M+.@..`....PD
		14:43:17.300812 IP jk.53372 > maa05s28-in-f14.1e100.net.443: UDP, length 32
		0x0000:  7832 1b41 dffb f8da 0c48 b9d1 0800 4500  x2.A.....H....E.
		0x0010:  003c 0000 4000 4011 1c15 c0a8 010b 8efa  .<..@.@.........
		0x0020:  cdee d07c 01bb 0028 1ed6 40bc 3bfe 3036  ...|...(..@.;.06
		0x0030:  0f9a f1ac 3d85 7155 3579 e025 8824 5cf1  ....=.qU5y.%.$\.
		0x0040:  dd7b 4867 2c1f 2586 d29c             	.{Hg,.%...
		4 packets captured
		8 packets received by filter
		1 packet dropped by kernel

# use tcpdump to display active IP devices
		sudo tcpdump -D
		1.enp2s0 [Up, Running]
		2.wlp3s0 [Up, Running]
		3.any (Pseudo-device that captures on all interfaces) [Up, Running]
		4.lo [Up, Running, Loopback]
		5.docker0 [Up]
		6.bluetooth0 (Bluetooth adapter number 0)
		7.nflog (Linux netfilter log (NFLOG) interface)
		8.nfqueue (Linux netfilter queue (NFQUEUE) interface)
		9.usbmon1 (USB bus number 1)
		10.usbmon2 (USB bus number 2)	


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

