#include <iostream>
#include <vector>

int main() {
    std::string n1, n2;
    std::cin >> n1 >> n2;
    if (n1.length() > n2.length()) {
        std::cout << n2 << ' ' << n1 << '\n';
        return 0;
    }
    else if (n1.length() < n2.length()) {
        std::cout << n1 << ' ' << n2 << '\n';
        return 0;
    }
    else {
        for (int i = 0; i < n1.size(); i++) {
            if (n1[i] > n2[i]) {
                std::cout << n2 << ' ' << n1 << '\n';
                break;
            }
            else if (n1[i] < n2[i]) {
                std::cout << n1 << ' ' << n2 << '\n';
                break;
            }
        }
    }
    return 0;
}
