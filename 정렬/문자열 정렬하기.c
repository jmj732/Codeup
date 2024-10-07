#include <stdio.h>
#include <string.h>

void mysort(char a[][101], int n) {
    char temp[100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(a[j], a[j + 1]) > 0) {
                strcpy(temp, a[j]);
                strcpy(a[j], a[j + 1]);
                strcpy(a[j + 1], temp);
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    char str[10001][101];

    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }

    mysort(str, n);

    for (int i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}
