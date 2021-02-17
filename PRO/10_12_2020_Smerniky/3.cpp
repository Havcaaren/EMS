#include <iostream>

auto vypis(int &c, int &m) -> void {
    std::cout<<c<<std::endl;
    std::cout<<"-"<<std::endl;
    std::cout<<m<<std::endl;
}

auto vymen(int &c, int &m) -> void {
    c = c + m;
    m = c - m;
    c = c - m;
}

auto main(int argc, const char** argv) -> int {
    int c = 5, m = 3;
    vypis(c, m);
    std::cout<<std::endl;
    vymen(c, m);
    vypis(c, m);
    return 0;
}