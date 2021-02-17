#include <iostream>
#include <string>

auto main(int argc, const char** argv) -> int {
    std::string DNA, a;
    int pocet = 0, off = 0;
    std::cout<<"Zadaj retazec DNA: ";
    std::getline(std::cin, DNA);
    std::cout<<"Zadaj trojznakový podreťazec: ";
    std::getline(std::cin, a);
    while (true) {
        size_t tmp = DNA.find(a,off);
        if(tmp != std::string::npos) {
            pocet++;
            off = tmp + a.size();
        } else {
            break;
        }
    }
    std::cout<<"V DNA \""<<DNA<<"\""<<std::endl
             <<"Sa '"<<a<<"' nachadza "<<pocet<<"-krat."<<std::endl;
    return 0;
}