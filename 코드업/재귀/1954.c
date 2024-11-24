#include <stdio.h>

void f(int n,int cnt) {
	if(n == 1) {
		printf("*");
		return;
	}
	if(cnt == n)
		printf("\n");
	else
		printf("*");
	f(cnt == n ? n - 1 : n,cnt == n ? 0:cnt + 1);
}

int main() {
	int n, count = 0;
	scanf("%d", &n);
	f(n,count);
	return 0;
}
