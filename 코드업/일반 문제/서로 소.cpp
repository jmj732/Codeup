#include <iostream>

int gcd(int n, int m) {
    while (m != 0) {
        int t = m;
        m = n % m;
        n = t;
    }
    return n;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    int result =  gcd(n, m);
    std::cout << ((result == 1) ? "coprime":"no") << std::endl;
    return 0;
}
