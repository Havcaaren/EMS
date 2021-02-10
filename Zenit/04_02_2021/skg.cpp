#include <iostream>
#include <string>


int main(int argc, const char** argv) {
    std::string x;
    int a = 0;
    std::getline(std::cin, x);
    for (auto i: x) {
        if (i == '0' || i == '4' || i == '6' || i == '9' || i == 'q'  || i == 'e' || i == 'Q' || i == 'R'  || i == 'o'  || i == 'O'  || i == 'p'  || i == 'P' || i == 'a'  || i == 'A'  || i == 'd'  || i == 'D'  || i == 'b' || i == 'g') {
            a++;
        } else if (i == '8' || i == 'B') {
            a += 2;
        }
    }
    std::cout<<a<<std::endl;
    return 0;
}