#include <iostream>
#include <cmath>

typedef struct {
    double re; 
    double im;
} KC;

auto nacitaj(KC &x) -> void {
    std::cout<<"Zadaj komplexne cislo:"<<std::endl;
    std::cout<<"Realna cast: ";
    std::cin>>x.re;
    std::cout<<"Imaginarna cast: ";
    std::cin>>x.im;
}

auto vypis(KC x) {
    std::cout<<x.re<<std::showpos<<x.im<<"i";
}

auto absKC(KC x) -> double {
    return std::sqrt(x.re*x.re + x.im*x.im);
}

auto scitanie(KC x, KC y) -> KC {
    return {x.re+y.re, x.im+y.im};
} 

auto main(int argc, const char** argv) -> int{
    KC a, b;
    nacitaj(a);
    nacitaj(b);
    std::cout<<"Sucet A = ";
    vypis(a);
    std::cout<<"\nB = ";
    vypis(b);
    std::cout<<"\nje: ";
    vypis(scitanie(a, b));
    std::cout<<"\nAbs cisla A = ";
    vypis(a);
    std::cout<<"\nje "<<absKC(a)<<std::endl;
    return 0;
}