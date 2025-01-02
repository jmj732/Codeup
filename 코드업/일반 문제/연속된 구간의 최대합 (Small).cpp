#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> v(n + 1);
    std::vector<int> sum(n + 1);
    for (int i = 1; i <= n; i++) {
        std::cin >> v[i];
        sum[i] = (v[i] + sum[i - 1] > v[i]) ? v[i] + sum[i - 1] : v[i];
    }
    int maxidx = 1;
    for (int i = 2; i <= n; i++) {
        if (sum[i] > sum[maxidx])
            maxidx = i;
    }
    std::cout << sum[maxidx] << std::endl;
    return 0;
}
