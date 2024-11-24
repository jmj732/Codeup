#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::string str;
    std::cin >> str;
    int result = 0;
    for (auto it = str.begin(); it != str.end(); it++) {
        result += *it - '0';
    }
    if (result % 3 ) {
        std::cout << 0;
    }
    else{
        std::cout << 1;
    }
    return 0;
}
