#include <iostream>
#include <string>

auto main(int argc, const char** argv) -> int {
    std::string a, aa;
    std::cout<<"Zadaj retazec pismen: ";
    std::getline(std::cin, a);
    bool b = true; 
    for (int i = 0; i < a.length(); ++i){
        if (a.at(i) != ' ') {
            aa += a.at(i);
        }
    }
    for (int i = 0; i < aa.length() / 2; ++i) {
        if (aa.at(i) != *(aa.end()-i-1)) {
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