#include <iostream>
#include <string>


auto main(int argc, const char** argv) -> int {
    std::string a,b;
    std::cout<<"Zadaj retazec znakov: ";
    std::getline(std::cin, a);
    b = a;
    for(auto i: a) {
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    return 0;
}