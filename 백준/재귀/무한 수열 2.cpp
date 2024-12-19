#include <iostream>
#include <unordered_map>

std::unordered_map<long long, long long> memo;

long long solve(long long n, long long p, long long q, long long x, long long y) {
    if (n <= 0) return 1;
    if (memo.find(n) != memo.end()) return memo[n];
    return memo[n] = solve(n / p - x, p, q,x,y) + solve(n / q - y, p, q,x,y);
}


int main() {
    long long n, p, q, x, y;
    std::cin >> n >> p >> q >> x >> y;
    std::cout << solve(n, p, q, x, y) << std::endl;

    return 0;
}
