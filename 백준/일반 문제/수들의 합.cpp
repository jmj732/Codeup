#include <iostream>
#include <vector>

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> v(n);

    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    int k = 0, count = 0, tmp = 0;
    while(k < n) {
        int sum = 0;
        while (k < n && sum <= m) {
            sum += v[k++];
            if (sum == m)
                count++;
        }
        k = ++tmp;
    }
    std::cout << count << std::endl;
    return 0;
}
