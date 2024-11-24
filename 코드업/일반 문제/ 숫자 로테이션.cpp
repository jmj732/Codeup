#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++)
        std::cin >> v[i];
    for (int i = 0; i < n; i++,putchar('\n')) {
        for (int j = 0; j < n; j++) {
            printf("%d ", v[(i + j) % n]);
        }
    }
    return 0;
}
