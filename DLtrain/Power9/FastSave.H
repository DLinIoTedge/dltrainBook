#ifndef FastSave
#define FastSave

#include <fstream>
#include <string.h>
#include <iostream>
#include <sys/stat.h>
#include "Network_Fast.H"

class Save {
    std::fstream fileStream;
    char *fname;
    int i, j, k;
public:
    Save(const char *file);
    void SaveToFile(NetworkFast &net);
    bool ReadToNetwork(NetworkFast &net);
    bool checkForFile();
    ~Save();
};

#endif