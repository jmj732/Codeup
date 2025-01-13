#include <iostream>

int main() {
    int n;
    std::cin >> n;
    std::cout << "{";
    for (int i = n; i / n <= 1; i++) {
        std::cout << i;
        if ((i+1) / n <= 1)
        std::cout << ", ";
    }
    std::cout << "}" << std::endl;
    return 0;
}
