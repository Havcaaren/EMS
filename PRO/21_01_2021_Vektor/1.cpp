#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int main(int argc, const char** argv) {
    std::string slovo;
    std::vector<std::string> per;
    std::cout<<"Zadaj slovo: ";
    std::getline(std::cin, slovo);
    std::sort(slovo.begin(), slovo.end());
    do {
        per.push_back(slovo);
    } while (std::next_permutation(slovo.begin(), slovo.end()));
    for (auto i: per) {
        std::cout<<i<<std::endl;
    }
    return 0;
}