#include <iostream>
#include <string>


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::string a;
    bool b = true;
    int n = 0, x = 0;
    std::cin>>n;
    int poch[n];
    for (int i = 0; i < n; ++i) {
        std::cin>>poch[i];
    }

    for (int i = n-1; i >= 0; --i) {
        if (poch[i] > x) {
            a.append(std::to_string(i+1) + ' ');
            x = poch[i]; 
        }
    }
    std::cout<<a<<std::endl;

    return 0;
}