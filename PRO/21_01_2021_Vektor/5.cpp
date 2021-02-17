#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int main(int argc, const char** argv) {
    std::vector<std::string> mena;
    std::vector<std::vector<std::string>> m;
    std::string in;
    while (true) {
        std::cout<<"Zadaj meno: ";
        std::getline(std::cin, in);
        if (in.empty()) {
            break;
        } else {
            mena.push_back(in);
        }
    }
    std::sort(mena.begin(), mena.end());
    do {
        m.push_back(mena);
    } while (std::next_permutation(mena.begin(), mena.end()));

    for (auto i: m) {
        for (auto j: i) {
            std::cout<<j<<" ";
        }
        std::cout<<std::endl;
    }

    return 0;
}