#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int min = a < b ? a : b < c ? b : c;
    for (int i = min; i >= 0; i--) {
        if (a % i == 0 && b % i == 0 && c % i == 0) {
            printf("%d",i);
            break;
        }
    }

    return 0;
}