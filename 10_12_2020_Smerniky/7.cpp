#include <iostream>

float sucet(float x, float y) {
    return x+y;
}

float rozdiel(float x, float y) {
    return x-y;
}

float podiel(float x, float y) {
    return x/y;
}

float sucin(float x, float y) {
    return x*y;
}

auto main(int argc, const char** argv) -> int {
    float x, y;
    int i;
    float (*p_func)(float,float);
    std::cout<<"Zadaj x, y:";
    std::cin>>x>>y;
    std::cout<<"Zadaj 1, 2, 3 ak chces sucet x, y, rozdiel x,y, podiel x,y, ine ak sucin x,y"<<std::endl;
    std::cin>>i;

    switch(i) {
        case 1:  
            p_func = sucet;
            break;
        case 2:
            p_func = rozdiel;
            break;
        case 3:
            p_func = podiel;
            break;
        default:
            p_func = sucin;
    }
    std::cout<<p_func(x, y)<<std::endl;
    return 0;
}