#include <iostream>
#include <vector>


int main(int argc, const char** argv) {
    int n = 0;
    std::cout<<"Zadaj max: ";
    std::cin>>n;
    std::vector<long> tab(2,1);
    for (int i = 2; i <= n; ++i) {
        long x = *(tab.end()-1);
        tab.push_back(x*i);
    }
    for (int i = 0; i <= n; ++i) {
        std::cout<<i<<"! = "<<tab[i]<<std::endl;
    }
    return 0;
}