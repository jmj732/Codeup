#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 1; i <= 6 && n - i != 0; i++) {
        if (n - i <= 6)
            std::cout << i << " " << n-i <<std::endl;
    }
    return 0;
}