#include <iostream>

auto main(int argc, const char** argv) -> int {
    std::string a, meno, prezvisko;
    std::cout<<"Zadaj meno a prezvisko: ";
    std::getline(std::cin, a);
    meno = a.substr(0, a.find_first_of(" "));
    prezvisko = a.substr(a.find_first_of(" ")+1, *(a.end()-1));
    std::cout<<"Meno: "<<meno<<std::endl;
    std::cout<<"Prezvisko: "<<prezvisko<<std::endl;
    return 0;
}