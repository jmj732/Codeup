#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> v(3);
    v[0] = n + m;
    v[1] = n - m;
    v[2] = n * m;
    std::sort(v.begin(), v.end());
    std::cout << v[1] << std::endl;
    return 0;
}
