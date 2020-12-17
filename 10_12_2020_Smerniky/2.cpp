#include <iostream>

auto vymen(int &i, int &j) -> void {
    i = i + j;
    j = i - j;
    i = i - j;
}

auto main(int argc, const char** argv) -> int {
    int i = 5, j = 3;
    std::cout<<"Pred vymenou i = "<<i<<", j = "<<j<<std::endl;
    vymen(i, j);
    std::cout<<"Po vymenou i = "<<i<<", j = "<<j<<std::endl;
    return 0;
}