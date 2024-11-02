#include <iostream>
#include <cmath>

int main() {
    long long n;
    std::cin >> n;
    long long maxPrime = 1;

    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2;
    }

    for (long long i = 3; i <= std::sqrt(n); i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }
    if (n > 1)
        maxPrime = n;

    std::cout << maxPrime << std::endl;

    return 0;
}
