# Running NVIDIA Omniverse on Ubuntu with RTX GPU

You can run **NVIDIA Omniverse** on a local Ubuntu workstation with PCIe RTX cards, but there are some important conditions:

---

##  Requirements

- **GPU**: NVIDIA RTX (Quadro RTX, RTX A-series, or GeForce RTX 20xx/30xx/40xx with enough VRAM).  
  Omniverse heavily relies on RTX ray tracing and AI cores.  
- **Driver**: Latest NVIDIA proprietary driver (not Nouveau). Usually `>= 535` or whatever is current LTS for your card.  
- **CUDA Toolkit**: Matching the driver version (Omniverse services use CUDA + OptiX).  
- **OS**: Ubuntu **20.04 LTS** or **22.04 LTS** (officially supported).  
- **RAM**: At least **32 GB** recommended.  
- **Storage**: Fast **SSD** (NVMe preferred).  

---

## Installation Steps

1. Install NVIDIA driver + CUDA toolkit  
   *(ensure `nvidia-smi` shows your card correctly).*  

2. Install Docker  
   *(most Omniverse services are containerized).*  

3. Install NVIDIA Container Toolkit  
   *(to give Docker GPU access).*  

4. Download and install Omniverse components  
   (e.g., **Nucleus, Create, View**) from **NVIDIA Omniverse Launcher**  
   or via direct `.deb` installers.  

5. Run `omniverse-launcher` and configure a Nucleus server locally  
   *(or connect to an external server).*  

---

##  Performance Notes

- A single RTX card (like RTX 3080/3090/4090) can handle smaller Omniverse projects fine.  
- For heavier workloads (large scenes, USD collaboration), **multi-GPU setups** or professional **RTX A-series** cards are better.  
- Running **Nucleus + Create + Isaac Sim** locally will stress both GPU and CPU — make sure your workstation is well-cooled.  

---


