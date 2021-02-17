#include <iostream>
#include <string>


auto main(int argc, const char** argv) -> int {
    std::string a,b;
    std::cout<<"Zadaj retazec znakov: ";
    std::getline(std::cin, a);
    for(auto i: a) {
        b += i;
        b += " ";
    }
    std::cout<<b<<std::endl;
    return 0;
}