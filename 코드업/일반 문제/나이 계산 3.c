#include <stdio.h>
int main() {
    int year = 2012;
    char gen[10];
    int age;
    scanf("%d",&age);
    getchar();
    for(int i = 0; i < 7; i++)
        scanf("%c",&gen[i]);

    int uage;
    if(gen[0] == '1' || gen[0] == '2')
        uage = year - 1900 - age / 10000 + 1;
    else
        uage = year - 2000 - age / 10000 + 1;
    printf("%d ",uage);
    printf("%c",(gen[0] == '2' || gen[0] == '4') ? 'F':'M');

    return 0;
}