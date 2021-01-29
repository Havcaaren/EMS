#include <iostream>
#include <string>


int main() {
    std::string a;
    bool b = true;
    int n = 0, x = 0;
    std::cin>>n;
    int poch[n];
    for (int i = 0; i < n; ++i) {
        std::cin>>poch[i];
    }

    for (int i = 0; i < n; ++i) {
        b = true;
        for (int j = i + 1; j < n; ++j) {
            if (poch[i] < poch[j]) {
                b = false;
                break;
            }
        }
        if (b) {
            poch[x] = i+1;
            x++;
        }
    }
    for (int i = 0; i < x; ++i){
        std::cout<<poch[i]<< " ";
    }
    std::cout<<std::endl;

    return 0;
}