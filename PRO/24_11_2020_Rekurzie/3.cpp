#include <iostream>
#include <string>

auto binToDec(int n) -> std::string {
    if (n == 0) { return ""; }
    if (n%2 == 0) {
        n /= 2; 
        return "0" + binToDec(n); 
    } else {
        n /= 2;
        return "1" + binToDec(n);
    }
}


auto main(int argc, const char** argv) -> int {
    int n;
    std::cout<<"Zadaj cislo: ";
    std::cin>>n;
    std::string a = binToDec(n);
    for (auto i = a.rbegin(); i != a.rend(); i++){
        std::cout<<*i;
    }
    std::cout<<std::endl;
    return 0;
}