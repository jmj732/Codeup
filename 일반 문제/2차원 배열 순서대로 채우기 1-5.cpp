#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<int>> v(n,std::vector<int>(m));
    int value = 1;
    for (int i = n-1; i >= 0; i--)
        for (int j = m-1; j >= 0; j--)
            v[i][j] = value++;
    for (int i = 0; i < n; i++,printf("\n"))
        for (int j = 0; j < m; j++)
            std::cout << v[i][j] << " ";
    return 0;
}
