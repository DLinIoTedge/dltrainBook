#include "FastSave.H"

#define p(x) std::cout << x
#define pln(x) std::cout << x << '\n'

Save::Save(const char* file) {
    fname = new char[strlen(file)];
    strcpy(fname, file);
}

void Save::SaveToFile(NetworkFast &net) {
    fileStream.open(fname, std::ios::out | std::ios::binary);
    int holder = NetworkFast::num_layers;
    fileStream.write((char*)&holder, sizeof(holder));
    for(k = 1; k <= NetworkFast::num_layers; k++) {
        holder = net.getSize(k);
        fileStream.write((char*)&holder, sizeof(holder));
    }
    float temp;
    float*** w_pointer = net.getWeightPointer();
    float** b_pointer = net.getBiasPointer();
    for(k = 0; k < NetworkFast::num_layers; k++) {
        for(i = 0; i < net.getSize(k + 1); i++) {
            for(j = 0; j < net.getSize(k); j++) {
                temp = w_pointer[k][i][j];
                fileStream.write((char*)&temp, sizeof(temp));
            }
            temp = b_pointer[k][i];
            fileStream.write((char*)&temp, sizeof(temp));
        }
    }
    fileStream.close();
}

bool Save::ReadToNetwork(NetworkFast &net) {
    fileStream.open(fname, std::ios::in | std::ios::binary);
    int holder;
    fileStream.read((char*)&holder, sizeof(holder));
    int nlay = holder;
    if(holder != NetworkFast::num_layers) {
        pln("Wrong configuration for this file, printing details.");
        p("Number of layers:");
        pln(holder);
        p("Layers: ");
        for(i = 0; i < nlay; i++) {
            fileStream.read((char*)&holder, sizeof(holder));
            p(holder);
            p(", ");
        }
        pln("END");
        return false;
    }
    p("Saved Network Configuration: ");
    bool flag = false;
    for(i = 0; i < nlay; i++) {
        fileStream.read((char*)&holder, sizeof(holder));
        if(holder != net.getSize(i + 1)) {
            flag = true;
        }
        p(holder);
        p(", ");
    }
    pln("END");
    if(flag) {
        return false;
    }
    float ***w_pointer = net.getWeightPointer();
    float **b_pointer = net.getBiasPointer();
    float temp;
    for(k = 0; k < NetworkFast::num_layers; k++) {
        for(i = 0; i < net.getSize(k + 1); i++) {
            for(j = 0; j < net.getSize(k); j++) {
                fileStream.read((char*)&temp, sizeof(temp));
                w_pointer[k][i][j] = temp;
            }
            fileStream.read((char*)&temp, sizeof(temp));
            b_pointer[k][i] = temp;
        }
    }
    fileStream.close();
    return true;
}

bool Save::checkForFile() {
    struct stat buffer;   
    return (stat (fname, &buffer) == 0);
}

Save::~Save() {
    delete[] fname;
    if(fileStream.is_open()) {
        fileStream.close();
    }
}