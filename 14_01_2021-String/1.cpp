#include <iostream>
#include <string>

auto main(int argc, const char** argv) -> int {
    std::string input;
    int pocet = 0;
    std::cout<<"Zadaj retazec znakov: ";
    std::getline(std::cin, input);
    for (auto  i: input){
        if (i == 'a') {
            pocet++;
        }
    }
    std::cout<<"V retazci \""<<input<<"\" sa 'a' nachadza "
             <<pocet<<"-krat."<<std::endl;
    return 0;
}