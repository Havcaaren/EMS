#include <iostream>

typedef struct {
    int x, y, z;
} pbod;

auto main() -> int {
    pbod a[] = {{0,0,0},{1,1,1},{2,2,2},{3,3,3}};
    std::cout<<"x: "<<a[1].x<<"\t"
             <<"y: "<<a[1].y<<"\t"
             <<"z: "<<a[1].z<<std::endl;
    return 0;
}