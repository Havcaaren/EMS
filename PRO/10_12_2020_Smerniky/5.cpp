#include <iostream>

auto main(int argc, const char** argv) -> int {
    float *p_f, i = 0;
    int *p_i, j = 0;
    p_i = &j;
    p_f = &i;
    while (j < 10){
        std::cout<<p_f+j<<" "<<p_i+j<<std::endl;
        j++;
    }
     
    return 0;
}