#include <iostream>
#include <vector>
#include <numeric>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    std::vector<int> gcd_vector(n-1);
    for (int i = 1; i < n; i++) {
        gcd_vector[i] = abs(v[i - 1] - v[i]);
    }
    int gcdn = gcd_vector[0];
    for (int i = 1; i < n; i++) {
        gcdn = std::gcd(gcdn,gcd_vector[i]);
    }
    std::cout << gcdn << std::endl;
    return 0;
}
