#include <iostream>
#include <vector>

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);

    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    int lcmn = v[0];
    for (int i = 1; i < n; i++) {
        lcmn = lcm(lcmn, v[i]);
    }

    std::cout << lcmn;
    return 0;
}
