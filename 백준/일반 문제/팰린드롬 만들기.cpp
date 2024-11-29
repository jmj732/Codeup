#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::string makePalindrome(std::string s) {
    std::vector<int> alpha(26, 0);
    for (char c : s)
        alpha[c - 'A']++;

    std::string half = "";
    char oddChar = 0;
    bool hasOdd = false;

    for (int i = 0; i < 26; i++) {
        if (alpha[i] % 2 == 1) {
            if (hasOdd) return "I'm Sorry Hansoo";
            hasOdd = true;
            oddChar = 'A' + i;
        }
        half += std::string(alpha[i] / 2, 'A' + i);
    }

    std::string palindrome = half;
    if (hasOdd) palindrome += oddChar;  // 홀수 문자 추가
    std::reverse(half.begin(), half.end());
    palindrome += half;

    return palindrome;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << makePalindrome(input) << std::endl;
    return 0;
}
