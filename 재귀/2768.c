#include <stdio.h>

int main() {
    int k,n;
    scanf("%d %d",&k, &n);
    int memo[n];

    memo[k] = 0;
    for(int i = 0; i < k; i++){
        scanf("%d",&memo[i]);
        memo[k] += memo[i];
    }

    for (int i = k + 1; i < n; i++) {
        memo[i] = (memo[i - 1] * 2 - memo[i - k - 1] + 100007) % 100007;
    }

    printf("%d",memo[n - 1]);
    return 0;
}
