#include <iostream>
#include <iomanip>

int main() {
    for (int i = 1; i <= 9; i++,putchar('\n'))
        for (int j = 2; j <= 5; j++)
            std::cout << j << " x " << i << " = " << std::setw(2) <<j * i << '\t';

    return 0;
}
