#include <iostream>
#include <string>

auto main(int argc, const char** argv) -> int {
    std::string a, b;
    std::cout<<"Zadaj prvy retazec: ";
    std::getline(std::cin, a);
    std::cout<<"Zadaj druhy retazec: ";
    std::getline(std::cin, b);
    if (!a.compare(b)) {
        std::cout<<"Retazce su rovnake."<<std::endl;
    } else {
        std::cout<<"Retazce nie su rovnake."<<std::endl;
    }
    return 0;
}
