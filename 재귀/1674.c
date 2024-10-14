#include <stdio.h>

int f(int n) {
    if(n < 10) {
        return n;
    }
    return n % 10 + f(n / 10);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%s",(f(n) % 7 == 4) ? "Bad":"Good");
    return 0;
}
