#include <iostream>

typedef struct {
    int pole[3][3];
} Pole;

auto nacitanie(Pole &a) -> void {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout<<"Zadaj cislo na poziciu "<<i<<"y "<<j<<"x :";
            std::cin>>a.pole[i][j];
        }
    }
}

auto vypis(Pole a) -> void {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout<<a.pole[i][j]<<"\t";
        }
        std::cout<<std::endl;
    }
}

auto AP(Pole a) -> float {
    int x = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            x += a.pole[i][j];
        }
    }
    return (float)x/9;
}


auto main(int argc, const char** argv) -> int {
    Pole a;
    nacitanie(a);
    vypis(a);
    std::cout<<"AP: "<<AP(a)<<std::endl;
    return 0;
}