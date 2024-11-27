#include <iostream>
#include <vector>

int main() {
    const int mod = 1000000009;
    int n, max_value = 0;
    std::cin >> n;
    std::vector<int> v(n+1);
    for (int i = 1; i <= n; i++) {
        std::cin >> v[i];
        max_value = std::max(max_value, v[i]);
    }
    std::vector<long long> stair_vector(max_value + 1);
    stair_vector[1] = 1; stair_vector[2] = 2; stair_vector[3] = 4;
    for (int i = 1; i <= n; i++) {
        for (int j = 4; j <= v[i]; j++) {
            stair_vector[j] = (stair_vector[j - 1] + stair_vector[j - 2] + stair_vector[j - 3]) % mod;
        }
        std::cout << stair_vector[v[i]] << '\n';
    }
    return 0;
}