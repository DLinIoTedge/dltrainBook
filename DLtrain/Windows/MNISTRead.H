#ifndef MNISTRead
#define MNISTRead
#include <fstream>
typedef unsigned char uchar;
class MNISTData {
    int l;
    int reverseInt(int);
    int number_imgs;
    std::ifstream labels;
    std::ifstream images;
    int getMagicNum(std::ifstream&);
    public:
    MNISTData(const std::string, const std::string, int n = -1);
    char* getLabels();
    bool** getImages(int&);
    ~MNISTData();
};

#endif