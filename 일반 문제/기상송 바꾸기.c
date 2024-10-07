#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char str[100][100];
    for (int i = 0; i < n; i++) {
        scanf("%s", str + i);
        printf("%s\n", str[i]);
        if(i != n -1)
            printf("AMOLED\n");
    }

    return 0;
}
