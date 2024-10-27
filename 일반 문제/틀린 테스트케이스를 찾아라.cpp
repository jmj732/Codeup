#include <iostream>
#include <vector>

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> arr(n, std::vector<int>(n));
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i][0] >> arr[i][1] >> arr[i][2] >> arr[i][3];
    }

    for (int i = 0; i < n; i++) {
        int result = min(min(arr[i][0],arr[i][1]) , arr[i][2]);
        if (result != arr[i][3]) {
            std::cout << i + 1 << " " << result;
            return 0;
        }
    }
    std::cout << -1;
    return 0;
}