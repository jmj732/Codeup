#include <stdio.h>

void f(int a,int prev)
{
	if(a < 10) {
		printf("%d", a%10);
		return;
	}
	if(prev % 10 > 0 || a % 10 > 0) {
		printf("%d", a%10);
	}
	return f(a / 10,(prev % 10) ? prev : prev / 10);
}

int main() {
	int a;
	scanf("%d", &a);
	f(a,a);
	return  0;
}