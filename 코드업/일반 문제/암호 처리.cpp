#include <iostream>

int main() {
    std::string s;
    std::cin >> s;
    for (auto c : s) {
        std::cout << static_cast<char>(c + 2);
    }
    std::cout << std::endl;
    for (auto c : s) {
        std::cout << static_cast<char>((c * 7) % 80 + 48);
    }
    return 0;
}
