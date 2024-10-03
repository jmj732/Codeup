#include <stdio.h>

int reversenum(int num, int rnum) {
    if (num == 0)
        return rnum;
    return reversenum(num / 10, rnum * 10 + num % 10);
}

int ispalindrome(int pal) {
    int rpal = reversenum(pal, 0);
    return rpal == pal;
}

int main() {
    int n;
    scanf("%d", &n);
    int result = n + reversenum(n, 0);
    printf("%s\n", ispalindrome(result) ? "YES" : "NO");

    return 0;
}
