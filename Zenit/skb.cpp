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
    int i = 0;
    while (true) {
        if (isPrime(start) && isPrime(start+2)) {
            std::cout<<start<<" "<<start+2<<" ";
            i++;
        }
        if (i == 2) {
            break;
        }
        start += 2;
    }
    return 0;
}