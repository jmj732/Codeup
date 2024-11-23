#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> v(n + 1);
    std::vector<int> DP(n + 1);
    for (int i = 1; i <= n; i++) {
        std::cin >> v[i];
        DP[i] = (v[i] + DP[i - 1] > v[i]) ? v[i] + DP[i - 1] : v[i];
    }
    int maxidx = 1;
    for (int i = 2; i <= n; i++) {
        if (DP[i] > DP[maxidx])
            maxidx = i;
    }
    std::cout << DP[maxidx] << std::endl;
    return 0;
}
