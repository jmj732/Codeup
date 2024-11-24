#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int c[4] = { 0 };
    for (int i = 3; i >= 2; i--) {
        c[i] += n % 60;
        n /= 60;
    }
    c[1] = n;
    for (int i = 1; i < 4; i++)
        printf("%d ", c[i]);
    return 0;
}
