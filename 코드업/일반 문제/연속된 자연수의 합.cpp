#include <iostream>
#include <vector>


int main() {
    int n;
    std::cin >> n;
    int count = 0;
    int x = 0;
    int j = 1;
    for (int i = 1; i <= n/2; i++) {
        while (x <= n) {
            x += j++;
            if (x == n) {
                count++;
                break;
            }
        }
        x = 0;
        j = i + 1;
    }
    std::cout << count;
    return 0;
}
