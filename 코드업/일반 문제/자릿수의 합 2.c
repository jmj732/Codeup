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

    int num;
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);

        while(num >= 10) {
            num = f(num);
        }

        printf("%d\n", num);
    }

    return 0;
}
