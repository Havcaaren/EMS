#include <iostream>

char* funkc(char* p_char, int i) {
    return p_char+i;
}


auto main(int argc, const char** argv) -> int {
    char *p_c, *p_k;
    int i = 0;
    p_c = "nejaky text do 20 pismen";
    while(i<20) {
        std::cout<<*funkc(p_c, i)<<std::endl;
        i++;
    }

    return 0;
}