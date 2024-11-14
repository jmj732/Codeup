#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 1; i < n ; i++)
        std::cin >> v[i];

    std::sort(v.begin(), v.end());

    bool flag = true;
    for (int i = 1; i < n - 1; i++) {
        if(v[i] + 1 != v[i + 1]) {
            flag = false;
            std::cout << v[i] + 1 << std::endl;
        }
    }
    if (flag && v[1] != 1)
        std::cout << 1 << std::endl;
    else if (flag)
        std::cout << n << std::endl;
    return 0;
}
