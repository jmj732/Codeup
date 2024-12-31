#include <iostream>

int main() {
    int n;
    std::cin >> n;
    const int mod = 100000007;
    long long result = 0;

    for (int i = 1; i < n; i++) {
        long long term = (1LL * i * (n - i + 1)) % mod;
        result = (result + term) % mod;
    }

    result = (result + n) % mod;
    std::cout << result << std::endl;

    return 0;
}
