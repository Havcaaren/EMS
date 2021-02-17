#include <iostream>
#include <string>

auto main(int argc, const char** argv) -> int {
    int p = 0;
    std::string a;
    std::cout<<"Zadaj retazec pismen: ";
    std::getline(std::cin, a);
    while (!a.empty()) {
        if (a.find_first_of(" ") != std::string::npos) {
            a = a.substr(a.find_first_of(" ")+1, *(a.end()-1));
            p++;
        } else {
            p++;
            break;
        }
    }
    std::cout<<"Pocet slov v retazci je: "<<p<<std::endl;
    return 0;
}