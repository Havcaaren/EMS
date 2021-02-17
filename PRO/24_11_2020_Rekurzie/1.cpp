#include <iostream>

auto NSD(int m, int n) -> int {
    return m == n ? m : (m > n ? NSD(m - n, n) : NSD(m, n - m));
}

// auto NSD(int m, int n) -> int {
//     if (m == n) { return m; }
//     else if (m > n) { m -= n; }
//     else { n -= m; }
//     return NSD(m, n);
// }


auto main(int argc, const char** argv) -> int {
    int a, b;

    std::cout<<"Zadaj cislo a: ";
    std::cin>>a;
    std::cout<<"Zadaj cislo b: ";
    std::cin>>b;
    std::cout<<NSD(a,b)<<std::endl;
    return 0;
}