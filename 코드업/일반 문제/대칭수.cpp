#include <iostream>
#include <algorithm>
#include <string>

bool palindrome(const std::string& str1) {
    std::string str2 = str1;
    std::reverse(str2.begin(), str2.end());
    return str1 == str2;
}

int main() {
    std::string n1, n2;
    std::cin >> n1 >> n2;

    int num1 = std::stoi(n1);
    int num2 = std::stoi(n2);
    int max = 0;

    for (int i = num2; i >= num1; i--) {
        for (int j = i; j >= num1; j--) {
            int result = i * j;
            if (palindrome(std::to_string(result))) {
                max = max > result ? max : result;
            }
        }
    }

    std::cout << max << std::endl;
    return 0;
}
