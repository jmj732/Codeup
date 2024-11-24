#include <stdio.h>
int a[10001];
int n, i, j, temp;
int main() {
    scanf("%d", &n);
    for (i=1; i<=n; i++)
        scanf("%d", &a[i]);
    int swap = 1;
    for(i=1; i<n && swap == 1; i++) {
        swap = 0;
        for(j = 1; j < n; j++) {
            if (a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swap = 1;
            }
        }
    }

    for (i = 1; i <= n; i++)
        printf("%d ", a[i]);
    return 0;
}

