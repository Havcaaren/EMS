#include <iostream>

auto main(int argc, const char** argv) -> int {
    float* x = new float[11];
    for (int i = 0; i<11;i++){
        std::cout<<"Zadaj "<<i<<"-ty prvok pola"<<std::endl;
        std::cin>>*(x+i);
        std::cout<<i<<"-ty prvok pola je "<<*(x+i)<<std::endl;
    }
    return 0;
}