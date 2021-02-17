#include <iostream>
#include <array>

typedef struct {
    std::string nazov = "0";
    float cena = -1;
} OVOCIE;

auto main() -> int {
    std::array<OVOCIE, 5> a;
    for (auto &i: a) {
        while (i.nazov == "0") {
            std::cout<<"Zadaj nazov: ";
            std::cin>>i.nazov;
        }
        while (i.cena <= 0) {
            std::cout<<"Zadaj cenu: ";
            std::cin>>i.cena;
        }
    }
    for (auto i: a) {
        std::cout<<i.nazov<<"\t"<<i.cena<<std::endl;
    }
    return 0;
}