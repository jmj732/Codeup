#include <iostream>
#include <vector>

int main() {
    std::string bacode;
    std::cin >> bacode;
    int even = 0, odd = 0;
    for (int i = 1; i <= bacode.length(); i++) {
        int baco = bacode[i-1] - '0';
        if (i % 2 == 0)
            even += baco;
        else
            odd += baco;
    }
    int verifycode = 10 - (even * 3 + odd) % 10;
    if (verifycode == 10) verifycode = 0;
    std::cout << bacode << verifycode << std::endl;
    return 0;
}