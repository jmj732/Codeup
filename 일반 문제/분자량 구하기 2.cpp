#include <iostream>
#include <string>

bool strdigit(char c) {
    return c >= '0' && c <= '9';
}

int rnum(std::string str, int* i) {
    *i += 1;
    int result = 0;
    while (strdigit(str[*i])) {
        result = result * 10 + str[*i] - '0';
        *i += 1;
    }
    if (result == 0)
        return 1;
    return result;
}

int main() {
    std::string molecular; // 분자
    std::cin >> molecular;

    int result = 0, i = 0;
    result = rnum(molecular, &i) * 12 + rnum(molecular, &i);

    std::cout << result << std::endl;
    return 0;
}
