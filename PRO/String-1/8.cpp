#include <iostream>
#include <string>

auto main(int argc, const char** argv) -> int {
    std::string a;
    std::cout<<"Zadaj retazec: ";
    std::getline(std::cin, a);
    while (true) {
        if (a.length() > 3) {
            std::cout<<a.substr(0, 3)<<std::endl;
            a = a.substr(3, *(a.end()-1));
        } else {
            break;
        }
    }
    return 0;
}
