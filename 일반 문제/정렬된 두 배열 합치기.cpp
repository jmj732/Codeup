#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<int> v1(n), v2(m);

    for (int i = 0; i < n; i++)
        std::cin >> v1.at(i);

    for (int i = 0; i < m; i++)
        std::cin >> v2.at(i);

    v1.insert(v1.end(), v2.begin(), v2.end());
    std::sort(v1.begin(), v1.end());
    for (const auto& elem : v1)
        std::cout << elem << " ";

    return 0;
}
