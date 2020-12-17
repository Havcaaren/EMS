#include <iostream>
#include <string>

auto main(int argc, const char** argv) -> int {
    std::string a;
    std::cout<<"Zadaj retazec pismen: ";
    std::getline(std::cin, a);
    for (int i = a.length()-2; i >= 0; --i){
        a += a[i];
    }
    std::cout<<a<<std::endl;
    return 0;
}