#include <iostream>
#include <fstream>

void display(int number[784]) {
    for(int i1 = 0; i1 < 28; i1++) {
        for(int j1 = 0; j1 < 28; j1++) {
            std::cout << (number[i1*28 + j1] != -1 ? 'o' : '.') << ' ';
        }
        std::cout << '\n';
    }
}


int main(int argc, char const *argv[])
{
    std::cout << "Hello\n";
    std::ifstream bmp_file("two.bmp", std::ios::binary);
    bmp_file.seekg(0x0A);
    int start_pos;
    bmp_file.read((char*)&start_pos, 4);
    bmp_file.seekg(start_pos, std::ios::beg);
    int img[768];
    int ch;
    for(int i = 0; i < 768; i++) {
        bmp_file.read((char*)&ch, sizeof(ch));
        img[i] = ch;
    }
    display(img);
    std::cout << start_pos << '\n';
    return 0;
}
