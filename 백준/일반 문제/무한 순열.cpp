#include <iostream>
#include <unordered_map>

std::unordered_map<long long, long long> memo;

long long solve(long long n, long long p, long long q) {
    if (n == 0) return 1;
    if (memo.find(n) != memo.end()) return memo[n];
    return memo[n] = solve(n / p, p, q) + solve(n / q, p, q);
}

int main() {
    long long n, p, q;
    std::cin >> n >> p >> q;
    std::cout << solve(n, p, q) << std::endl;

    return 0;
}
