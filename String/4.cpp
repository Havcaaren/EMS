#include <iostream>
#include <string>
//#include <algorithm>

auto main(int argc, const char** argv) -> int {
    std::string a, b = "";
    std::cout<<"Zadaj retazec pismen: ";
    std::getline(std::cin, a);
    //std::reverse(a.begin(), a.end());
    //std::cout<<a<<std::endl;
    for (std::string::reverse_iterator i = a.rbegin(); i != a.rend(); ++i) {
        b += *i;
    }
    std::cout<<b<<std::endl;
    return 0;
}