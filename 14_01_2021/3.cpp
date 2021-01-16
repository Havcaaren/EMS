#include <iostream>
#include <string>

auto main(int argc, const char** argv) -> int {
    std::string a, b, c, d;
    std::cout<<"Zadaj 1. retazec: ";
    std::getline(std::cin, a);
    std::cout<<"Zadaj 2. retazec: ";
    std::getline(std::cin, b);
    std::cout<<"Zadaj 3. retazec: ";
    std::getline(std::cin, c);
    d.append(a);
    d.append(b);
    d.append(c);
    std::cout<<d<<std::endl;
    return 0;
}