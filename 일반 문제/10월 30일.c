#include <stdio.h>

int main()
{
    int mon, day;
    int month[11] = {0 , 31, 30, 31, 30, 31, 30, 31, 30, 31, 30};
    scanf("%d %d",&mon , &day);

    int result = month[10] - day;
    for (int i = 9; i >= mon; i--) {
        result += month[i];
    }
    printf("%d", result);

    return 0;
}

