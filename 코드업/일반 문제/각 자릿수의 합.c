#include <stdio.h>

int f(int n) {
    if(n < 10) {
        return n;
    }
    return n % 10 + f(n / 10);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%s", (n % f(n) == 0) ? "Yes":"No");

    return 0;
}
