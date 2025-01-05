#include <iostream>

int main() {
    std::string s;
    getline(std::cin,s);
    for (auto it = s.rbegin(); it != s.rend(); it++) {
        std::cout << *it;
    }
    return 0;
}
