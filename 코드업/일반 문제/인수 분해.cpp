#include <iostream>
#include <unordered_map>

void print(int x) {
    if (x < 0) std::cout << "x" << x << std::endl;
    else std::cout << "x+" << x << std::endl;
}


int main() {
    int m, n;
    std::cin >> m >> n;

    bool found = false;
    for (int i = -100; i <= 100 && !found; i++) {
        for (int j = -100; j <= 100; j++) {
            if(i + j == m && i * j == n) {
                found = true;
                if(i == j) {
                    print(i);
                    break;
                }
                print(i);
                print(j);
            }
        }
    }
    if (!found) std::cout << -1 << std::endl;
    return 0;
}
