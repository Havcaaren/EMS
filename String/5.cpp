#include <iostream>
#include <string>

auto main(int argc, const char** argv) -> int {
    std::string a;
    std::cout<<"Zadaj retazec pismen: ";
    std::getline(std::cin, a);
    bool b = true; 
    for (int i = 0; i < a.length() / 2; ++i) {
        if (a.at(i) != *(a.end()-i-1)) {
            b = false;
        }
    }
    if(b){
        std::cout<<"Zadany retazec je palindrom."<<std::endl;
    } else {
        std::cout<<"Zadany retazec nie je palindrom."<<std::endl;
    }
    return 0;
}