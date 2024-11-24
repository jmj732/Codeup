#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n,&m);
    int result = 0;

    for(int i = n; i <= m; i++) {
        if(i % 3 == 0 && i % 4 == 0) continue;
        if(i % 3 == 0){ result += i; }
        if(i % 4 == 0){ result -= i; }
    }

    printf("%d", result);
    return 0;
}
