#include <stdio.h>

int f(int a, int b)
{
	if (a == b)
		return a;
	if (a > b)
		a /= 2;
	else
		b /= 2;

	return f(a, b);
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", f(a, b));

	return  0;
}
