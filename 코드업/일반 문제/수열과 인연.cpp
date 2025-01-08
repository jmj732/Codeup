#include <iostream>
#include <vector>
#include <numeric>

using uint64 = unsigned long long;

int main() {
    int k;
    std::cin >> k;
    std::vector<uint64> res;
    while (k--) {
        uint64 a, b, n, m;
        std::cin >> a >> b >> n >> m;

        uint64 big = std::max(n, m);

        uint64 prev2 = 0, prev1 = 1;
        uint64 nth_value = prev1, mth_value = prev1;

        for (uint64 i = 2; i <= big; ++i) {
            uint64 current = a * prev1 + b * prev2;
            prev2 = prev1;
            prev1 = current;

            if (i == n) nth_value = current;
            if (i == m) mth_value = current;
        }

        uint64 result = std::gcd(nth_value, mth_value) % 998244353;
        res.push_back(result);
    }
    for (auto it = res.begin(); it != res.end(); ++it) {
        std::cout << *it << "\n";
    }
    return 0;
}
