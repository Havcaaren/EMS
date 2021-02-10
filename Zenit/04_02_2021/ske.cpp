#include <iostream>

std::string pole = "################.............##.............##.............##.............##.............##.............##.............##.............##.............##.............##.............##.............##............D################";

int main(int argc, const char **argv) {
    int x = 0, y = 0;
    std::cin >> x >> y;
    if (x == 13 && y == 13) {
        std::cout << "Ujo je doma!" << std::endl;
    }
    pole[15 * x + y] = 'U';

    while (x != 13 || y != 13) {
        if (y != 13) {
            y++;
            pole[15 * x + y] = 'x';
        }
        if (x != 13) {
            x++;
            pole[15 * x + y] = 'x';
        }
    }
    pole[15 * 13 + 13] = 'D';
    for (int i = 0; i < 15; ++i) {
        for (int j = 0; j < 15; ++j) {
            std::cout << pole[i * 15 + j];
        }
        std::cout << std::endl;
    }
    return 0;
}