#include <iostream>
#include <vector>

// Max 20!

int main(int argc, const char** argv) {
    int n = 0;
    std::cout<<"Zadaj max: ";
    std::cin>>n;
    std::vector<long long unsigned int> tab(2,1);
    for (int i = 2; i <= n; ++i) {
        long long unsigned int x = *(tab.end()-1);
        tab.push_back(x*i);
    }
    for (int i = 0; i <= n; ++i) {
        std::cout<<i<<"! = "<<tab[i]<<std::endl;
    }
    return 0;
}