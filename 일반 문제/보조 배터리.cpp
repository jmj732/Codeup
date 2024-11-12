#include <iostream>
#include <vector>
#include <algorithm>

int findMax(std::vector<int> v) {
    return *std::max_element(v.begin(), v.end());
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::vector<int>> v(n, std::vector<int>(6));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < 6; j++)
            std::cin >> v[i][j];

    int result = 0;
    for (int i = 0; i < 6; i++) {
        std::vector<int> v2(n);
        for (int j = 0; j < n; j++) {
            v2.at(j) = v.at(j).at(i);
        }
        result += findMax(v2);
    }


    std::cout << result;
    return 0;
}
