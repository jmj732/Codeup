#include <stdio.h>
int memo[26] = { 0, 1, 2, 4 };

int f(int n)
{
    if(!memo[n])
        return memo[n] = f(n - 3) + f(n - 2) + f(n - 1);
    return memo[n];
}

int main()
{
    int m;
    scanf("%d",&m);
    printf("%d",f(m));
    return 0;
}
