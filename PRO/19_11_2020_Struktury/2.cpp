#include <iostream>


typedef struct {
    std::string meno = " ";
    std::string priezvisko = " ";
    int vek = -1;
} Osoba;

auto nacitanie(Osoba &a) -> void {
    while (a.meno == " ") {
        std::cout<<"Zadaj meno: ";   
        std::cin>>a.meno;
    }
    while (a.priezvisko == " ") {
        std::cout<<"Zadaj prizvisko: ";   
        std::cin>>a.priezvisko;
    }
    while (a.vek < 0) {
        std::cout<<"Zadaj vek: ";   
        std::cin>>a.vek;
    }
}

auto vypis(Osoba a) -> void {
    std::cout<<"Meno: "<<a.meno<<std::endl
             <<"Priezvisko: "<<a.priezvisko<<std::endl
             <<"Vek: "<<a.vek<<std::endl;
}

auto AP(Osoba a, Osoba b) -> float {
    float x = (float)a.vek + (float)b.vek;
    return x / 2;
}

auto main(int argc, const char** argv) -> int {
    Osoba a, b;
    nacitanie(a);
    nacitanie(b);
    vypis(a);
    vypis(b);
    std::cout<<"Priemerny vek: "<<AP(a, b)<<std::endl;
    return 0;
}