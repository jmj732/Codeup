#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    int n;
    std::cin >> n;
    int t;
    for (int i = 1; i <= n; i++) {
        std::cin >> t;
        if (isPowerOfTwo(t))
            printf("1 ");
        else printf("0 ");
    }
    return 0;
}
