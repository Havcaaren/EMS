#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(int argc, const char** argv) {
    std::vector<int> znamky;
    std::string tmp;
    int x = 0, max = 0, min = 0;
    float suc = 0;
    while (true) {
        std::cout<<"Zadaj znamku: ";
        std::getline(std::cin,tmp);
        if (tmp.length() == 0) { 
            break;
        }
        x = stoi(tmp);
        if (x >0 && x<6){
            znamky.push_back(x);
        }
    }
    for (auto i: znamky) {
        std::cout<<i<<", ";
    }
    std::cout<<std::endl;
    
    max = *std::max_element(znamky.begin(), znamky.end());
    min = *std::min_element(znamky.begin(), znamky.end());
    
    for (auto i: znamky) {
        suc += i;
    }
    std::cout<<"Najhorsia znamka: "<<max<<std::endl;
    std::cout<<"Najlepsia znamka: "<<min<<std::endl;
    std::cout<<"Priemer: "<<suc/znamky.size()<<std::endl;
    

    return 0;
}