#include <stdio.h>

int arr[100001];

int main() {
    int n, max = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        arr[a]++;
        if (a > max) max = a;
    }
    for (int i = 0; i <= max; i++) {
        while (arr[i] > 0) {
            printf("%d ",i);
            arr[i]--;
        }
    }
    return 0;
}
