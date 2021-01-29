#include <iostream>

int main(int argc, const char** argv) {
    int x = 0, b = 0, a = 0;
    for (int i = 0; i < 10; ++i) {
        std::cin>>x;
        if(x == 6) {
            a++;
        } else if (x == 1) {
            b++;
        }
    }
    if (a > b) {
        std::cout<<"Alicka"<<std::endl;
    } else if (a < b) {
        std::cout<<"Barborka"<<std::endl;
    } else {
        std::cout<<"Remiza"<<std::endl;
    }
    return 0;
}