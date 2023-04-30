# Scapy for Flow Capture

     sudo apt install python-scapy 	
     sudo scapy
      INFO: Can't import matplotlib. Won't be able to plot.
       INFO: Can't import PyX. Won't be able to use psdump() or pdfdump().
    WARNING: No route found for IPv6 destination :: (no default route?)
    INFO: Can't import python ecdsa lib. Disabled certificate manipulation tools
    Welcome to Scapy (2.3.3)
    >>> packet = Ether()
    >>> packet.show()
    WARNING: Mac address to reach destination not found. Using broadcast.
    ###[ Ethernet ]###
    dst= ff:ff:ff:ff:ff:ff
    src= f8:da:0c:48:b9:d1
    type= 0x9000
    
    >>> hex(packet.type)
    '0x9000'
    
    >>> capture = sniff(count=5)
    WARNING: DNS RR prematured end (ofs=36, len=2)
    WARNING: DNS RR prematured end (ofs=36, len=2)
    >>> capture = sniff(filter="tcp", count=5)
    >>> capture.summary()
    Ether / IP / TCP 34.149.43.113:https > 192.168.1.11:55694 FA
    Ether / IP / TCP 192.168.1.11:55694 > 34.149.43.113:https PA / Raw
    Ether / IP / TCP 192.168.1.11:55694 > 34.149.43.113:https FA
    Ether / IP / TCP 34.149.43.113:https > 192.168.1.11:55694 R
    Ether / IP / TCP 34.149.43.113:https > 192.168.1.11:55694 R


    	>>> capture = sniff(filter="tcp", count=5)
	    >>> capture.summary()
	    Ether / IP / TCP 34.149.43.113:https > 192.168.1.11:55694 FA
	    Ether / IP / TCP 192.168.1.11:55694 > 34.149.43.113:https PA / Raw
	    Ether / IP / TCP 192.168.1.11:55694 > 34.149.43.113:https FA
	    Ether / IP / TCP 34.149.43.113:https > 192.168.1.11:55694 R
	    Ether / IP / TCP 34.149.43.113:https > 192.168.1.11:55694 R
	    >>> wrpcap("jk1.pcap",capture)	
