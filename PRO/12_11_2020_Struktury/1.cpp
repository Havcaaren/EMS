#include <iostream>

typedef struct {
    std::string typ;
    std::string znacka;
    float km;
} AUTO;

auto main() -> int {
    
        AUTO a[3] = {{"Skoda", "BJ001AA", 741.5},
                     {"Volvo", "BJ002AA", 849.12},
                     {"Kia", "BJ003AA", 9842}};
        std::cout<<a[1].typ<<" "<<a[1].znacka<<" "<<a[1].km<<std::endl;
    return 0;
}