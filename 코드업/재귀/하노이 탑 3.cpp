#include <iostream>

int main() {
    unsigned long long n;
    std::cin >> n;
    
    unsigned long long value = (n & -n);
    int disk = 0;
    
    while (value > 1) {
        value >>= 1;
        disk++;
    }

    std::cout << (disk + 1) << std::endl;
    return 0;
}
