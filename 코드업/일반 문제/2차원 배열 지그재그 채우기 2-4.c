#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    int value = 1;
    for (int i = 0; i < n; i++) {
        if(i % 2 == 0)
            for (int j = n - 1; j >= 0; j--) {
                arr[j][i] = value++;
            }
        else
            for (int j = 0; j < n; j++) {
                arr[j][i] = value++;
            }
    }
    for (int i = 0; i < n; i++,printf("\n")) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
    }
    return 0;
}
