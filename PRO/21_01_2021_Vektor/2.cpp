#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int main(int argc, const char** argv) {
    std::vector<std::string> v;
    std::vector<std::vector<std::string>> per;
    std::string in, tmp;
    int l = 0, off = 0;
    size_t x = 0;

    std::cout<<"Zadaj vetu: ";
    std::getline(std::cin, in);

    while (!in.empty()) {
        x = in.find_first_of(" ");
        if (x != std::string::npos) {
            tmp = in.substr(0, x);
            if (!tmp.empty()) {
                v.push_back(tmp);
            }    
            in = in.substr(x+1, *(in.end()-1));        
        } else if (!in.empty()){
            v.push_back(in.substr(0, *(in.end()-1)));
            break;
        }
    }
    
    std::sort(v.begin(), v.end());
    do {
        per.push_back(v);
    } while (std::next_permutation(v.begin(), v.end()));
    
    for (auto i: per) {
        for (auto j: i) {
            std::cout<<j<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}