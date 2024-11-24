#include <iostream>
using uint64 = unsigned long long;
const uint64 MOD = 1000000007;

void multiply(uint64 F[2][2], uint64 M[2][2]) {
    uint64 x = (F[0][0] * M[0][0] + F[0][1] * M[1][0]) % MOD;
    uint64 y = (F[0][0] * M[0][1] + F[0][1] * M[1][1]) % MOD;
    uint64 z = (F[1][0] * M[0][0] + F[1][1] * M[1][0]) % MOD;
    uint64 w = (F[1][0] * M[0][1] + F[1][1] * M[1][1]) % MOD;

    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}

void power(uint64 F[2][2], uint64 n) {
    if (n == 0 || n == 1)
        return;

    uint64 M[2][2] = {{1, 1}, {1, 0}};
    
    power(F, n / 2);
    multiply(F, F);

    if (n % 2 != 0)
        multiply(F, M);
}

int main() {
    uint64 n;
    std::cin >> n;
    
    uint64 F[2][2] = {{1, 1}, {1, 0}};
    power(F, n - 1);

    std::cout << F[0][0] << std::endl;
    return 0;
}
