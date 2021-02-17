#include <iostream>
#include <string>

auto main(int argc, const char** argv) -> int {
    std::string vyh, tmp;
    int N = 0,  p = 0;
    std::cout<<"Zadaj pocet predanych zrebov: ";
    std::cin>>N;
    std::cout<<"Zadaj posledne trojcislie vyhernych zrebov: ";
    std::cin>>vyh;
    for (int i = 0; i < N; ++i) {
        std::cout<<"Zadaj cislo zrebu: ";
        std::cin>>tmp;
        if (tmp.length() >= 3) {
            if (vyh == tmp.substr(tmp.length()-3,tmp.length())) {
                std::cout<<"Vyhral"<<std::endl;
                ++p;
            } else {
                std::cout<<"Nevyhral"<<std::endl;
            }
        } else {
            std::cout<<"Neplatna dlzka."<<std::endl;
            --i;
        }
    }
    std::cout<<"Pocet vyhernych zrebov: "<<p<<std::endl;
    return 0;
}