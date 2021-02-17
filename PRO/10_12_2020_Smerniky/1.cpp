#include <iostream>

auto main(int argc, const char** argv) -> int {
    float* p_1,* p_2;
    float pom;
    
    p_1 = &pom;
    p_2 = &pom;

    std::cin>>*p_1;
    std::cout<<*p_2<<std::endl;
    return 0;
}