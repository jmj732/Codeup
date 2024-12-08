#include <iostream>
#include <cmath>
bool isPalindrome(int x) {
    if (x < 0) return false;
    int reverse = 0;
    int temp = x;
    while (x != 0) {
        reverse = reverse * 10 + x % 10;
        x = x / 10;
    }
    return reverse == temp;
}

int isPrimeNumber(int number) {
    if (number <= 1)
        return -1;
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0)
            return -1;
    }
    return number;
}

int main() {
    int n;
    std::cin >> n;
    while (!isPalindrome(isPrimeNumber(n))) {
        n++;
    }
    std::cout << n;
    return 0;
}
