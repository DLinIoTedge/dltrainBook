# Kanshi
Deep Learning in  Network  monitoring ( கண்காணிப்பு )  

<blockquote >
 <p><cite> IoT Security at the Edge with Eurotech: “Security is not just a concern. It’s a barrier to adoption”  [Ref 6]   </p>
</blockquote>
  
         Prerequisites: . IT infrastructure,  IT security fundamentals,  Linux, TCP/IP networking
         Lab environment: Course uses the github, JupyterLab, Scapy and few more tool set.
                 
         
   <details>
  <summary> Micro Objectives to Learn </summary> 
 <p> Familiarity with  Scapy to  collect data  and  detect suspicious activities </p> 
 <p> Using  Deep Learning  architecture to handle data flows  </p>
 <p> Design a Navigation  for user interface ( by using IBM Watson Assistant) </p>
 <p> Provide information on  log sources, protocols, and event details </p>
 <p>  Discover how  Scapy collects and analyzes network flow information  </p>
 <p> Deep learning  based  Custom Rule Engine design and development  </p>
 <p> Utilize the Use Case Manager app </p>
 <p> Manage security of asset information in real time </p>
 <p> Learn about a variety of  AI apps for security , content extensions, and the App Framework </p>
 <p>Analyze offenses by using the AI  and the Analyst Workflow app  </p>
 <p> Use Python in Jupyter lab  to create customized reports </p>
  <p>   Search, filter, group, and analyze security data </p> 
   </details>

# 1. Introduction
<div align="justify"> 
<p> 
 The Internet is designed to carry data by using IP packets across the network and deliver,  as per destination given its header segment. Challenge is to monitor above mentioned IP packets in a given enterprise  network and permit the same IP packet to travel to a defined destination mahine. 
 IP packets have few variations such as TCP, UDP and ICMP.  Moreover, mentioned IP packets need  to use PORTs in a given Machine to deliver.  
 </p>
 </div>
 
 
 
 
 
 <p align="center">
  <img alt="Light" src="https://user-images.githubusercontent.com/58679469/150729053-6a1deae5-f6a2-46e0-bac0-7dd676c96e04.png" width="35%">
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
  <img alt="Dark" src="https://user-images.githubusercontent.com/58679469/150728889-8eb74247-8fc9-4691-96a6-9899583756f0.png" width="55%">
</p>



<div align="justify"> 
<p> 
There have been events in which unwanted and harmful IP packets are used  to perform certain act in a remote machine.  Thus, there is a need to stop such IP packets in a given enterprise network and provide safety  to users of the internet in their enterprise. Volume of IP packets travels in a given enterprise network requires a huge amount of computing power to monitor IP packets and safeguard their user application.
 
 </p>
 </div> 

</div>
In Boltzmann machine, each un-directed edge represents dependency. Above example there are 3 hidden units and 4 visible units.   This is not a restricted Boltzmann machine. But, effort is made  to use  Restricted   Boltzmann machine to solve Security problems in IP  Network [Ref 5].
  </div>
  
 
  
  
<div align="justify"> 
<p>  Autonomous monitoring systems require “capturing IP packets “ in neal time and infer safety level of enterprise network,  Digital Assistant with AI provides a method to monitor a given enterprise IP network.   </p>
 </div>

<div align="justify"> 
<p> Above mentioned Assistant is designed to have conversations with Human user.  To have effective and efficient conversion, a design is expected to include “ Intents”  that are very useful for Assistant to narrow down questions and synthesise answers in a given time frame.  “Entities “ expected to helpAssistant to understand conversion from Human at other end.  For example, Port can be intent and entities can be Port is blocked, Port is opened etc. Essentially, there can be manu entities have association with one Intent.   Dialog is useful part for Human being to have conversation with a given Assistant and find out information from Network Monitoring Task.  </p>
 </div>
 




  <div align="justify"> 
<p>  
Deep Learning has been used in solving image classification and associated problems.  Research work at our lab had given a  tool set and associated process to address security monitoring problems.  Comprehensive visibility enables user to Gain centralized insight into logs, flows and events across environments. Real-time threat detection opens up an economically viable workflow with automatically analysing logs and flows to generate prioritized alerts.  Streamlined compliance can be used to resolve security hole issues by using   pre-built reports and templates to speed internal and external compliance. High efficiency workflow mostly using AI and less of human role by   eliminating manual tracking processes to focus on investigation and response. </p>

 </div>

  <div align="justify"> 
<p> 
 National Institute of Standards and Technology (NIST) Framework : 
The NIST CSF framework is threaded throughout the entire program as a commonly used framework. It is a widely used cybersecurity framework that encompasses guidelines for organizations to prepare themselves against cybersecurity attacks.
 </div>
 
 
  <div align="justify"> 
<p> 
  Cloud Security Alliance (CSA) Cloud Controls Matrix (CCM): 
The Cloud Security Alliance (CSA) Cloud Controls Matrix (CCM) is discussed in the defensive cybersecurity section. This framework includes domains covering the aspects of cloud technology
 </div>
 
 
  <div align="justify">  
<p>   MITRE ATT&CK® : 
The MITRE ATT&CK® knowledge base is explored deeper in the offensive and defensive pieces of this program. It contains adversary tactics and techniques that are utilized as the foundational development of specific threat models and methodologies.
 </div>

 

   
## 1.1 Trend in Industry
 
 <p> MIT Technology Review  01.24.22.  [Ref 7]  </p>
<blockquote >
 <p><cite> Escalating actions: Russia has sent more than 100,000 soldiers to the nation's border with Ukraine. While no physical invasion has taken place yet, cyber operations are already underway. Earlier this month, hackers defaced dozens of government websites in Ukraine, a technically simple but attention-grabbing act that generated global headlines. More quietly, they also placed destructive malware inside Ukrainian government agencies. It’s not clear yet who is responsible, but Russia is the leading suspect    </p>
</blockquote>  


 <div align="justify"> 
 <p> 
 Throughout 2021, we observed low  sophistication threat actors learn that they  could create big impacts in the operational  technology (OT) space—perhaps even bigger than they intended. Actors will continue to  explore the OT space in 2022 and increasingly use ransomware in their attacks. This targeting  will occur because of the need to keep OT environments fully operational, especially when the systems are part of critical infrastructure. Attacks against critical OT environments can cause serious disruption and even threaten human lives, thereby increasing the pressure for organizations to pay a ransom. To compound the issue, many of these OT devices are not built with security at the forefront of the design, and we’re currently seeing a massive uptick in the number of vulnerabilities being identified in OT environments

   </p>
    </div>
    
 <details>
           <summary> Post Graduate (from MIT)  Certificate in Cybersecurity </summary> 
<p>  Introduction to Cybersecurity Risk Management </p> 
<p>  Secure Systems Administration </p> 
<p>  Cybersecurity Foundation Concepts </p> 
<p>  Secure Network Administration </p> 
<p>  Federal Government Role: Law, Operations, and Standards </p> 
<p>  Cloud Security </p> 
<p>  Threats and Vulnerabilities </p> 
<p>  Preparing for a Job in Cybersecurity Operations </p> 
<p>  Cybersecurity for Critical Urban Infrastructure </p> 
<p>  Introduction to Offensive Cybersecurity </p> 
<p>  Identity and Access Management (IAM) Concepts </p> 
<p>  Penetration Testing Part 1 </p> 
<p>  IAM Layers and Technology </p> 
<p>  Penetration Testing Part 2 </p> 
<p> Preparing for a Job in Cybersecurity Risk Management </p> 
<p>  Social Engineering </p> 
<p>  Introduction to Defensive Cybersecurity </p> 
<p>  Artificial Intelligence </p> 
<p> Cryptography </p> 
<p> Policy and Privacy, Regulation, and Data Governance </p> 
<p> Security Operations Center (SOC) </p> 
<p>  OT and IoT Risk </p> 
<p> Incident Response (IR) </p> 
<p>  Preparing for a Job in Offensive Cybersecurity Operations </p> 
   </details>
   
    
# 2. Problem Definition 

<div align="justify"> 
<p>  Packet sniffing provides IP packets for analysis.  Often, mentioned analysis is expected to happen in near real time.   IBM Watson Assistant provides a tool set to design “கண்காணிப்பு Monitoring  Assistant '', in a short period of time and deploy it in cloud or in on-premise infrastructure.  </p>
 </div>
 

<div align="justify"> 
<p> Kanshi Assistant is required to perform  deep learning model based inference on one side and continue to have a meaningful conversation with Human being. IB< Watson Assistant provides infrastructure for design and development of Kanshi Assistant.  Moreover, experts in network security can handle the above mentioned design and development of Kanshi Assistant.  In fact, during development, No limitations, no complications, no code required to build Kanshi Assistant.  </p>
 </div>
 
 

# 3. Tool Set  used in creating  Kanshi Assistant 

## 3.1 IBM Watson Assistant


<div align="justify"> 
<p>  Create and launch a highly-intelligent, AI-powered virtual agent in an hour without writing a single line of code. Connect to existing content sources and applications to get stuff done for your customers { Ref 1 ]. 
</p>
 <p>
The new Watson Assistant experience, focused on using actions to build customer conversations, is designed to make it simple enough for anyone to build a virtual assistant. Building, testing, publishing, and analyzing your assistant can all now be done in one simple and intuitive interface. </p>
 </div>



<div align="justify"> 
<p> 
<ul>
  <li>  New navigation provides a workflow for building, previewing, publishing, and analyzing your assistant.  </li>
   <li>  Each assistant has a home page with a task list to help you get started.  </li>
   <li> Build conversations with actions, which represent the tasks you want your assistant to help your customers with. Each action contains a series of steps that represent individual exchanges with a customer.  </li>
   <li> 
    A new way to publish lets you review and debug your work in a draft environment before going live to your customers.  </li>
   <li>     Use a new suite of analytics to improve your assistant. Review which actions are being completed to see what your customers want help with, determine if your assistant understands and addresses customer needs, and decide how can you make your assistant better.  </li>
</ul>
 </p>
 </div>


## 3.2 Hardwaare for Flow Collection 

<div align="justify"> 
<p>  Flow collection requires custom made hardware and associated software such that near real time Packet capture cam be carried out.   IBM Security QRadar Network Packet Capture (MTM 4412-F2C) offers an optional IBM Security QRadar  Packet Capture appliance to store and manage data that is used by QRadar Incident Forensics when no other network packet capture (PCAP) device is deployed. Any number of these appliances can be installed as a tap on a network or sub-network to collect the raw packet data. </p>
 <p> QRadar® Network Insights appliances connect to network TAPs, SPAN, or mirror ports to access full packet data for real-time analysis. All QRadar Network Insights appliances provide detailed analysis of network flows to extend the threat detection capabilities of QRadar.  </p>
 </div>
 

 [![](https://mermaid.ink/img/eyJjb2RlIjoic3RhdGVEaWFncmFtLXYyXG4gICBcbiAgICAgUEMyIC0tPiBUQVBcbiAgICAgIFRBUCAtLT4gUm91dGVyXG4gICAgICBUQVAgLS0-IFBhY2tldENhcHR1cmVcbiAgICAgIFBhY2tldENhcHR1cmUgLS0-IFFSYWRhckNvbnNvbGVcbiAgICAgICAgUEMxIC0tPiBTd2l0Y2hcbiAgICBQQzIgLS0-IFBDMVxuICAgIFBDMSAtLT4gUEMyXG4gICAgICAgICAgICAgICAgIiwibWVybWFpZCI6eyJ0aGVtZSI6ImRlZmF1bHQifSwidXBkYXRlRWRpdG9yIjpmYWxzZSwiYXV0b1N5bmMiOnRydWUsInVwZGF0ZURpYWdyYW0iOmZhbHNlfQ)](https://mermaid-js.github.io/mermaid-live-editor/edit/#eyJjb2RlIjoic3RhdGVEaWFncmFtLXYyXG4gICBcbiAgICAgUEMyIC0tPiBUQVBcbiAgICAgIFRBUCAtLT4gUm91dGVyXG4gICAgICBUQVAgLS0-IFBhY2tldENhcHR1cmVcbiAgICAgIFBhY2tldENhcHR1cmUgLS0-IFFSYWRhckNvbnNvbGVcbiAgICAgICAgUEMxIC0tPiBTd2l0Y2hcbiAgICBQQzIgLS0-IFBDMVxuICAgIFBDMSAtLT4gUEMyXG4gICAgICAgICAgICAgICAgIiwibWVybWFpZCI6IntcbiAgXCJ0aGVtZVwiOiBcImRlZmF1bHRcIlxufSIsInVwZGF0ZUVkaXRvciI6ZmFsc2UsImF1dG9TeW5jIjp0cnVlLCJ1cGRhdGVEaWFncmFtIjpmYWxzZX0)




### 3.2.1 TAP
<div align="justify"> 
<p> TAP devices provide a way to access the data flowing across a computer network, typically for the benefit of network security and performance monitoring tools. The monitored traffic is referred to as the “pass-through” traffic and the ports used for monitoring are called “monitor ports.” For a greater visibility into the network, a TAP can be placed between the router and the switch.
 </p>
 </div>



### 3.2.2 SPAN
<div align="justify"> 
<p> Port mirroring, also known as SPAN or roving analysis, is a method of monitoring network traffic that forwards a copy of each incoming and/or outgoing packet from one or more port (or VLAN) of a switch to another port where the network traffic analyzer is connected. SPAN is often used on simpler systems to monitor multiple stations at once  </p>
 </div>
   
 ### 3.3.3  Enterprise / Home  Router
 
 <div align="justify"> 
   <p>  
 Private IP addresses are known only for a small part of the devices on the Internet. For example, the IP address of your computer is known for your home router and, maybe, for your ISP too. Private IP addresses may overlap because they are used in internal networks. That’s why your friend and you may have the same IP addresses for your home routers. Since your IP address is not unique and publicly known, it seems that you can’t just send the information to a server across the Internet without having a public IP address, because the server won’t be able to send the reply to you. However, there’s a solution!.
  </p>
 </div>
 
  [![](https://mermaid.ink/img/eyJjb2RlIjoic3RhdGVEaWFncmFtLXYyXG4gICAgTWFjaGluZSAtLT4gTG9jYWxJUGFkcmVzcyBcbiAgICAgTG9jYWxJUGFkcmVzcyAgLS0-IEhvbWVSb3V0ZXJcbiAgICAgSG9tZVJvdXRlciAtLT4gSVNQICBcbiAgICAgSG9tZVJvdXRlciAtLT4gTG9jYWxJUGFkcmVzc1xuICAgIElTUCAtLT4gSG9tZVJvdXRlclxuICAgIElTUCAtLT4gIFB1YmxpY0lQYWRyZXNzXG4gICAgUHVibGljSVBhZHJlc3MgLS0-IElCTWNsb3VkU2VydmVyXG4gICAgSUJNY2xvdWRTZXJ2ZXIgLS0-IElTUFxuICAgIElCTWNsb3VkU2VydmVyIC0tPiBETlNzZXJ2ZXJcbiAgICAgICAgICAgICIsIm1lcm1haWQiOnsidGhlbWUiOiJkZWZhdWx0In0sInVwZGF0ZUVkaXRvciI6ZmFsc2UsImF1dG9TeW5jIjp0cnVlLCJ1cGRhdGVEaWFncmFtIjpmYWxzZX0)](https://mermaid-js.github.io/mermaid-live-editor/edit/#eyJjb2RlIjoic3RhdGVEaWFncmFtLXYyXG4gICAgTWFjaGluZSAtLT4gTG9jYWxJUGFkcmVzcyBcbiAgICAgTG9jYWxJUGFkcmVzcyAgLS0-IEhvbWVSb3V0ZXJcbiAgICAgSG9tZVJvdXRlciAtLT4gSVNQICBcbiAgICAgSG9tZVJvdXRlciAtLT4gTG9jYWxJUGFkcmVzc1xuICAgIElTUCAtLT4gSG9tZVJvdXRlclxuICAgIElTUCAtLT4gIFB1YmxpY0lQYWRyZXNzXG4gICAgUHVibGljSVBhZHJlc3MgLS0-IElCTWNsb3VkU2VydmVyXG4gICAgSUJNY2xvdWRTZXJ2ZXIgLS0-IElTUFxuICAgIElCTWNsb3VkU2VydmVyIC0tPiBETlNzZXJ2ZXJcbiAgICAgICAgICAgICIsIm1lcm1haWQiOiJ7XG4gIFwidGhlbWVcIjogXCJkZWZhdWx0XCJcbn0iLCJ1cGRhdGVFZGl0b3IiOmZhbHNlLCJhdXRvU3luYyI6dHJ1ZSwidXBkYXRlRGlhZ3JhbSI6ZmFsc2V9)
    
 <div align="justify"> 
   <p>     
    When your ISP router receives a packet from you, it changes your private source IP address to its public IP address. Thus when a server gets the packet from you, it sends the reply to your ISP router, which changes the public destination IP address in the packet to your private IP address. For example, in the next scheme, the server doesn’t know how to reach the 192.168.100.5 IP address, but your ISP router knows and that’s why it does such changes with the IP addresses in packets:
     </p>
 </div>
 


 

## 3.3 Softwaare for Flow Collection

###  3.3.1 Wireshark 
<div align="justify"> 
<p>  Wireshark is a network protocol analyzer, or an application that captures packets from a network connection, such as from your computer to your home office or the internet. Packet is the name given to a discrete unit of data in a typical Ethernet network.  </p>
<p>  Wireshark is the most often-used packet sniffer in the world. Like any other packet sniffer, Packet Capture, Wireshark listens to a network connection in real time and then grabs entire streams of traffic – quite possibly tens of thousands of packets at a tim  </p>
 </div>
 
###  3.3.2 tcpdump 
<div align="justify"> 
<p> tcpdump is a network analysis tool—combining both power and simplicity into a single command-line interface  </p>
<p> Tcpdump prints out a description of the contents of packets on a network interface that match the boolean expression specified on the command line. It can also run with the -w flag, which causes it to save the packet data to a file for later analysis, or with the -r flag, which causes it to read from a saved packet file rather than to read packets from a network interface  </p>
 </div>
 
 
<p align="center">
  <img alt="Light" src="https://user-images.githubusercontent.com/58679469/150745873-8bcdfc8e-4c22-47d5-9628-fa5f17fe9559.png" width="45%">
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
  <img alt="Dark" src="https://user-images.githubusercontent.com/58679469/150745930-80e5fab3-9e3c-4480-b6c4-61f0ce09141d.png" width="45%">
</p>


 
###  3.3.3 Firesheep

<div align="justify"> 
<p>  Firesheep was an extension for the Firefox web browser that used a packet sniffer to intercept unencrypted session cookies from websites such as Facebook and Twitter. </p>
<p>  he collected identities (victims) are displayed in a side bar in Firefox. By clicking on a victim's name, the victim's session is taken over by the attacker </p>
 </div>
 
###  3.3.4  Scapy
<div align="justify"> 
<p>  
Scapy is a python package used to sniff, analyze, and send and receive arbitrary network packets. It comes with many of the common network layers built in. It can send packets at the "link layer", which means that even custom WiFi packets are possible (more on that later). With Scapy, nothing is hidden from you, all parts of the packets you send and receive are modifiable and can be inspected </p>
<p>  Scapy is a powerful and versatile tool that can replace most of the networking tools you're used to, like nmap, tcpdump, and traceroute. It allows you to experiment with low level networking code in a high level language. You can write servers, routers, firewalls, network tracing tools, and pretty much anything in Scapy, due to it's ability to sniff, send, and respond to packets. All of these properties make it very useful for network based attacks. </p>
 </div>

<p align="center">
  <img alt="Light" src="https://user-images.githubusercontent.com/58679469/150744603-81d8c417-e80a-4b82-9e07-a2c11719c548.png" width="45%">
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
  <img alt="Dark" src="https://user-images.githubusercontent.com/58679469/150745295-7d5d0fdf-55ad-4d3f-81bd-aef53633e709.png" width="45%">
</p>


###  3.3.5  QRadar

<div align="justify"> 
<p> IBM® QRadar® Network Insights 1940-C (MTM 4654-F7G) appliance provides detailed analysis of network flows to extend the threat detection capabilities of IBM QRadar. QRadar Network Insights 1940-C is based on the Dell R740xd XL server </p>
 </div>




![v7](https://user-images.githubusercontent.com/58679469/150686420-3b85e3df-344a-4cc8-923a-427ebbfc8b3e.png)


<div align="justify"> 
<p>  Berkeley Packet Filters (BPF) provide a powerful tool for intrusion detection analysis. Use BPF filtering to quickly reduce large packet captures to a reduced set of results by filtering based on a specific type of traffic. Both admin and non-admin users can create BPF filters </p>
<p> Build complex filter expressions by using modifiers and operators to combine protocols with primitive BPF filters  </p>
 <p> QRadar collects network activity information, or what is referred to as "flow records".  Flows represent network activity by normalizing IP addresses, ports, byte and packet counts, as well as other details, into "flows", which effectively represent a session between two hosts. QRadar can collect different types of flows, which differ greatly in the collected details. In this video series, we explain and demonstrate the differences between the following network flow capture mechanisms:  </p>
 </div>
 

<ul>
  <li> Cisco Netflow </li>
   <li> QRadar QFlow  </li>
   <li> QRadar Network Insights (QNI)  </li>
</ul>


<div align="justify"> 
<p> Difference between QRadar events and flows??,  packet header and payload: which information is available in the header and packet, and which technologies to use to investigate header and payload information.  </p>
<p>  
QRadar analyzes your flow data for applications, flow direction, and superflows. You also learn how to build a QRadar flow rule, and how to perform flow searches in QRadar. </p>
 <p> IBM Security QRadar flows represent network activity by normalizing IP addresses, ports, byte and packet counts, and other data, into flow records, which are records of network sessions between two hosts. Flows are a differentiating component in QRadar that provide detailed visibility into your network traffic.
  </p>
 </div>
 





# 4. Mathematical Model

 [ Introduction](https://www.jkuse.com/dltrain/mathematical-theory) 

Build a model for Normal state. For example use data of TCP/IP flow  in Enterprise  Network   to model Normal state 
Measured state is Captured Flow 

 ## 4.1  Quantitative Risk assessment 


<div align="justify"> 
<p>  Bayesian networks are directed acyclic graphs (DAGs) whose nodes represent variables in the Bayesian sense: they may be observable quantities, latent variables, unknown parameters or hypotheses. Edges represent conditional dependencies; nodes that are not connected (no path connects one node to another) represent variables that are conditionally independent of each other. Each node is associated with a probability function that takes, as input, a particular set of values for the node's parent variables, and gives (as output) the probability (or probability distribution, if applicable) of the variable represented by the node. </p>
<p> Probabilistic graphical model that represents a set of variables and their conditional dependencies via a directed acyclic graph (DAG)  </p>
 <p> Mostly this part is getting attraction in DL  </p>
<p> Gibbs sampling is applicable when the joint distribution is not known explicitly or is difficult to sample from directly, but the conditional distribution of each variable is known and is easy (or at least, easier) to sample from.  The Gibbs sampling algorithm generates an instance from the distribution of each variable in turn, conditional on the current values of the other variable. Gibbs sampling is particularly well-adapted to sampling the posterior distribution of a Bayesian network, since Bayesian networks are typically specified as a collection of conditional distributions.  Given an input vector v we are using p(h|v)  for prediction of the hidden values h. Knowing the hidden values we use p(v|h)for prediction of new input values v. This process is repeated k times. After k iterations we obtain an other input vector v_k which was recreated from original input values v_0  </p>
 </div>


<div align="justify"> 
<p>  This can be measured as the direct cost of the risk and indirect cost of the risk
 Mathematical representation of the risk in statistical terms gets very complex and is beyond the present scope of the paper. When using quantitative risk assessment looks logical, there some drawbacks of this approach in using for information systems. It’s easy to define the cost of the system, but the indirect costs are high, and the recovery cost is high and sometimes unknown. This quantitative risk is described mathematically as Annualized Loss of expectancy (ALE). The expected risk in terms of cost and loss in monetary terms can be expressed as the loss occurred due to risk over a year.
ALE=SLE* ARO
SLE (Single Loss Expectancy) is the value of a single loss of the asset. This may or may not be the entire asset. This is the impact of the loss. ARO (Annualized Rate of Occurrence) is how often the loss occurs.   </p>
<p>  The quantitative risk assessment for information systems comes with a huge error margin as this method was not designed primarily for information systems in focus. Nowadays, there is a lot of improvement with new data processing and the high availability of data to use complex statistical processes to extrapolate and uncover hidden trends and risks. The statistical process also ensures that the quantitative risk assessment is repeatable and reproducible with the same consistency  </p>
 <p> 
The main reason for this is complexity in the identification and assigning of value to assets and limitations of statistical data, which helps in determining the frequency  </p>
 </div>





 
 ## 4.2  Qualitative Risk assessment 
 <div align="justify"> 
 <p> 
 The inclusion of qualitative scales is especially useful when quantitative data for estimation of probabilities are lacking and experts are reluctant to express their opinions quantitatively. In reliability and risk analysis such situation occurs when for example human and organizational root causes of systems are modeled explicitly. Such causes are often not quantifiable due to limitations in the state of the art and lack of proper quantitative metrics
  </p>
<p>  Assumption in qualitative risk assessment is that there exists a high degree of uncertainty of impact values and likelihood that’s defined. Risk is subjective in terms of issues where the greater the difficulty in qualitative risk is in describing the likelihood and impact values. These values should be standard scaled so that it can be used with consistency across different risk assessment methods Some drawbacks of qualitative risk assessment are harder to communicate the results to management without precise information. Just saying the risk is high or low will not give a better understanding. To improve and overcome this hurdle, a table with impact and likelihood tables and the potential impact will assist the management in better handling the risk.  </p>
 </div>
 
 # 5  Digital Twin 
 
 <div align="justify"> 
 Digital Twin is used in Simulate the risk of network configuration changes and advice security measure in advance. User can use a topology model to define virtual network models based on your existing network. You can create a network model that is based on a series of modifications that can be combined and configured.User can use a topology model to determine the effect of configuration changes on your network using a simulation. Topology models can be made to include the following,
 </div>

<ul>
  <li> Create virtual topologies for testing network changes. </li>
   <li> Simulate attacks against virtual networks. </li>
   <li>  Lower risk and exposure to protected assets through testing. </li>
   <li> Virtual network segments allow you to confine and test sensitive portions of your network or assets. </li>
</ul>
       


To simulate a network configuration change
<ul>
  <li>  Create a topology model. </li>
   <li>   Simulate an attack against the topology model. </li>
</ul>


# 6. Data Set : PCAP file / Stream to Tensor


## 6.1 Read Packets from PCAP Stream

- Collect data from Netowrk and store it in PCAP File
- Process PCAP file as given in the following diagram to get Tensor
- Tensor is having time stamp column and Packet Data column


![NetworkSecurityLab](https://user-images.githubusercontent.com/58679469/150686458-0f1f0f10-84d9-4580-a694-15644f2064ec.jpg)

 ## 6.2 Create Tensor from PCAP Packets
 If a new pcap record was populated successfully, the scalars are placed into respective tensor placeholders. The shape of the resulting output tensor is a matrix with two columns. One column holds the timestamp scalars for each read pcap packet. The other column holds the corresponding packet data as a string. Each row in the output tensor (matrix) corresponds to a pcap packet

![NetworkSecurityLab(1)](https://user-images.githubusercontent.com/58679469/150686463-becf05b1-cd0e-4d4c-868e-d07a55f7f4f2.jpg)


# 7. Train Deep Learning Model

 
[Training DL Networks](https://www.jkuse.com/home/jkevents/baranovichi)

Following links 2a, ab, ac and 2e provides methods and process to train a given Deep learning Model by using Data set

2a:  Train in Colab   [Link to Google](https://github.com/DLinIoTedge/dltrainBook/tree/jk/Tool-Set/UseColab)

2b:  Train in  Ubuntu 18.04  [Link to Google](https://www.jkuse.com/dltrain/train-dl-networks/dltrain-for-dl)

 2c:  Train in  Power 9 CPU [Link to Google](https://github.com/DLinIoTedge/dltrainBook/tree/jk/DLtrain/Power9)
 
 2e:  Train in  Jetson Nano GPU [Link to Google](https://github.com/DLinIoTedge/dltrainBook/tree/jk/DLtrain/Jetson-Nano)
 


# 8. Inference by using  Deep Learning Model

<div align="justify"> 
<p> Training platform is different from deployment platform. Same provides obstruction to carry trained network in to limited capability deployment edge. Mostly there is a need to cut down Model size or optimise weights of each node in Model. This mentioned optimisation of Model size of node weight may not be there if deployment happens in cloud side of infrastructure.   </p>
 </div>
 
[Deployment](https://www.jkuse.com/dltrain/deploy-dl-networks/cloud-native-service/flask-micro-service)




# 9. Kanshi Assistant Development 

IBM Watson Assistant helps user to  overcome the steep learning curve and frustrating jargon other virtual agent products use. It’s now easier than ever to design AI chatbots without complex decision trees or any kind of coding required. Watson Assistant now allows you, the one closest to the customer, to build better virtual agents your customers will actually want to use.

Wake up Kanshi is using Text or voice or both. Design Wake Word Listener and Design Wake Word Model are possible method to wake up Kanshi assistant In the following voice based method is given. 
  
  Use Voice to Wake up Kanshi
   - Use Speech Recognition  to get Text
   - Use Tect handle Dialog Flow
   - Use NLP for Dialog Flow
   - use Speech Synthesis to displaay message to user.
  
  Conversation  ability  of Kanshi requires to have , Indents, Entities, Dialog and search skill

<p align="center">
  <img width="460" height="300" src="https://user-images.githubusercontent.com/58679469/151119111-c454f20c-0d3b-4c66-b63b-e0559a33a176.png">
</p>


<ul>
  <li> Powered: IBM Watson Assistant is built on deep learning, machine learning, and natural language processing (NLP) models to understand questions, find or search for the best answers, and complete the user’s intended action. Watson also uses intent classification and entity recognition to better understand customers in context and transfer them to a human agent when needed </li>
   <li> Integrations: Watson Assistant is designed to extend and enhance your customer service applications, giving customers and agents the answers they need wherever they ar </li>
     <ul>
           <li> Seamlessly route customers to the right agent  </li>
           <li>  Respond to customer inquiries via phone and digital channels  </li>
           <li>Find answers within any existing structured or unstructured content  </li> 
      </ul>
   <li>Virtual Builder : IBM Watson Assistant helps you overcome the steep learning curve and frustrating jargon other virtual agent products use. It’s now easier than ever to design AI chatbots without complex decision trees or any kind of coding required. Watson Assistant now allows you, the one closest to the customer, to build better virtual agents your customers will actually want to use.  </li> 
   <li>Analytics :  Watson Assistant provides a summary of the interactions between users and your virtual agent. Visualization and analysis of critical metrics and KPIs help you understand the topics users want addressed, if the virtual agent is meeting those needs, and how to improve the service it provides  </li>
   <li> Security : Watson Assistant provides large, complex and data-sensitive organizations with the security and scalability capabilities you need to safeguard against misuse of customer data and support your virtual agent during peak times. </li>
</ul>

## 9.1 Watson Assistant: Intelligent virtual agent

 IBM [Watson™ Assistant](https://cloud.ibm.com/docs/assistant) and walk you through the process of creating your assistant.

## 9.2 Kanshi Assistant Deployment

This topic reviews the basic steps and concepts that are involved to make your assistant available to customers. For more information about the different steps, see the following topics:


<ul>
  <li> Previewing and sharing your assistant  </li>
   <li> Publishing your content  </li>
   <li>    Deploying your assistant </li>
</ul>

<p align="center">
  <img width="460" height="300" src="https://user-images.githubusercontent.com/58679469/151121794-26e69cb3-7b40-41a5-b8df-8fbda74bccd2.png">
</p>

    
To deploy an assistant to customers, a channel integration must be added. By default, a web chat integration is created, allowing an assistant to be embedded in a website. Other channel integrations are available in the Integrations catalog. For more information about deploying to your website, see Adding the web chat to your website.   
 


## 9.3 Voice-enabled Android chatbot

Tutorial in [Watson](https://cloud.ibm.com/docs/solution-tutorials?topic=solution-tutorials-android-watson-chatbot )  provide the process of defining intents and entities and building a dialog flow for your chatbot to respond to customer queries. You will learn how to enable Speech to Text and Text to Speech services for easy interaction with the Android app.






# 10. Reference 

1. https://cloud.ibm.com/registration?target=/developer/watson/launch-tool/conversation&hideTours=true&cm_sp=WatsonPlatform-WatsonPlatform-_-OnPageNavCTA-IBMWatson_Conversation-_-Watson_Developer_Website&cm_mmca1=000027BD 
2. https://www.ibm.com/products/watson-assistant/artificial-intelligence  AI chatbot that’s easy to use, Natural language AI that understands human conversation and improves the customer experience
3.  https://towardsdatascience.com/how-to-build-a-custom-dataset-for-tensorflow-1fe3967544d8 Handling PCAP file stream
4.  https://www.jkuse.com/dltrain/mathematical-theory/restricted-boltzmann-machine  RBM 
5.  https://www.jkuse.com/dltrain/tool-set/colab IoT and Security 
6.  https://www.technologyreview.com/2022/01/21/1043980/how-a-russian-cyberwar-in-ukraine-could-ripple-out-globally/?truid=&utm_source=the_download&utm_medium=email&utm_campaign=the_download.unpaid.engagement&utm_term=&utm_content=01-24-2022&mc_cid=df41641f1f&mc_eid=f3a31df9fd  MIT ne
7.  https://medium.com/geekculture/network-intrusion-detection-using-deep-learning-bcc91e9b999d  Network Intrusion Detection using Deep Learning
8.  https://github.com/abhinav-bhardwaj/Network-Intrusion-Detection-Using-Machine-Learning/blob/master/Data_Preprocessing_NSL_KDD.ipynb  Data Preprocessing
9.  https://www.communicationstoday.co.in/1402809-cyber-security-incidents-were-reported-by-cert-in-in-2021/?utm_source=newsletter&utm_medium=email&utm_campaign=March4  1402809 cyber security incidents reported in India





  
![formula](https://render.githubusercontent.com/render/math?math=e^{i\pi}=-1)





