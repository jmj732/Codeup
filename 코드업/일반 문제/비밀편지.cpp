#include <iostream>
#include <string>

int main() {
    int k;
    std::cin >> k;

    std::string s;
    std::cin >> s;

    for (int idx = 0; idx < s.size(); ++idx) {
        char c = s[idx];
        int i = 3 * (idx + 1) + k;

        char ca = c - i;
        if (ca < 'A') {
            ca += 26;
        }

        std::cout << ca;
    }


    std::cout << std::endl;
    return 0;
}
