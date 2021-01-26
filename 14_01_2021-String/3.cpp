#include <iostream>
#include <string>

auto main(int argc, const char** argv) -> int {
    std::string a, b;
    std::cout<<"Zadaj 1. retazec: ";
    std::getline(std::cin, a);
    b.append(a);
    std::cout<<"Zadaj 2. retazec: ";
    std::getline(std::cin, a);
    b.append(a);
    std::cout<<"Zadaj 3. retazec: ";
    std::getline(std::cin, a);
    b.append(a);
    std::cout<<b<<std::endl;
    return 0;
}