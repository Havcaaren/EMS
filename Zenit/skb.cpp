#include <iostream>

bool isPrime(int n) { 
    if (n <= 1){
        return false; 
    } 
    for (int i = 2; i < n/2; i++) {
        if (n % i == 0) {
            return false;
        }
    } 
    return true; 
} 

int main(int argc, const char** argv) {
    int start = 41;
    int cisla[4];
    int i = 0;
    while (true) {
        if (isPrime(start) && isPrime(start+2)) {
            cisla[i] = start;
            cisla[i+1] = (start + 2);
            i +=2;
        }
        if (i == 4) {
            break;
        }
        start += 2;
    }
    for (int i = 0; i < 4; i++) {
        std::cout<<cisla[i]<<" ";
    }

    return 0;
}