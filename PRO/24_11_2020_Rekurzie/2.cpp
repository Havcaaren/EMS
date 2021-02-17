#include <iostream>

auto sucet(int n) -> int {
    if (n == 0) { return 0;}
    int a = n - 1;
    return n + (sucet(a));
}

auto sucet2(int n) -> int {
    if (n == 0) {return 0; }
    int a = n - 2;
    return n + sucet2((a));
}

auto sucet3(int n) -> int {
    if (n == 1) {return 1; }
    int a = n - 2;
    return n + sucet3((a));
}

auto main(int argc, const char** argv) -> int {
    int n, tmp;
    std::cout<<"Zadaj n: ";
    std::cin>>n;
    tmp = n;
    std::cout<<"Sucet od 1 po n je: "<<sucet(n)<<std::endl;
    if (n%2 != 0) {tmp = n-1;}
    std::cout<<"Sucet parnych cisel od 2 po n je: "<<sucet2(tmp)<<std::endl;
    tmp = n;
    if (n%2 == 0) {tmp = n-1;}
    std::cout<<"Sucet neparnych cisel od 1 po n je: "<<sucet3(tmp)<<std::endl;
    return 0;
}
