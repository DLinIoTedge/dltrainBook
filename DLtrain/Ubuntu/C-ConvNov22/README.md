
# C-Conv
Attempting to make a convolutional neural network, without third party libraries. 

The config for the time being must be saved as "network_prop.txt" and must contain the properties "kernel", "num_layers", "layers". All values are comma seperated lists. "kernel" expects a list of 2, "num_layers" expects list of 1, "layers" expects list of size "num_layers". Always have the last layer have a size of 10, to work with numbers.
An example "network_prop.txt" is shown:
```
kernel: 4, 4
layers: 80, 20, 10
num_layers: 3
```
Execute the program with options as follows:
```
./<executable> [OPTIONS]
```
The available options are:
| Alias | Expected Value |
|--|--|
| -m | train/infer |
| -s |\< save-file name \>|
| -c | \< config-file name \> |
| -e | Number of epochs(optional, program will request it later on if not given) |
| -n | Number of images to use from dataset(optional default is 10000)|
| -d | \< path to the folder containing images-ubyte and labels-ubyte \>(optional default looks in Images directory)|

An example:
```
./main.o -m train -s NewNetwork.dat -c network_config.txt -n 2000 -e 30 -d /home/user/datasets/mnist/Images/
```
In the above example the folder /home/user/datasets/mnist/Images/ would contain images-ubyte and labels-ubyte.

The dataset can be downloaded from [the mnist website](http://yann.lecun.com/exdb/mnist/).

Make sure that the images and labels files are named **images-ubyte** and **labels-ubyte** respectively.

The config file is only required if you do not provide an existing save for the network to load from.
