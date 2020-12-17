#include <iostream>

auto moc3(int i) -> int {
    return i * i * i;
}

auto main(int argc, const char** argv) -> int {
    int i = 2, j = 3;
    std::cout<<moc3(3)<<std::endl;
    std::cout<<moc3(i)<<std::endl;
    std::cout<<moc3(2+3)<<std::endl;
    std::cout<<moc3(i*j+1)<<std::endl;
    return 0;
}