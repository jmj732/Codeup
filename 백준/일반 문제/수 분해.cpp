#include <iostream>
#include <cmath>

int mult(int n) {
    if (n == 2) return 2;
    if (n == 3) return 3;
    int result = 1;
    while(n > 4) {
        result = (result * 3) % 10007;
        n -= 3;
    }
    result = (result * n) % 10007;
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << mult(n);
    return 0;
}
