#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n + 1][n + 1];
	int num = 1;

	int le = 1, re = n, te = 1, be = n;
	while(num <= n*n){
		for(int j = le; j <= re && num <= n*n; j++){
			a[te][j] = num++;
		}
		te++;
		for(int i = te; i <= be && num <= n*n; i++){
			a[i][re] = num++;
		}
		re--;
		for(int j = re; j >= le && num <= n*n; j--){
			a[be][j] = num++;
		}
		be--;
		for(int i = be; i >= te && num <= n*n; i--){
			a[i][le] = num++;
		}
		le++;
	}

	for(int i = 1; i <= n; i++,puts("")){
		for(int j = 1; j <= n; j++){
			printf("%d ",a[i][j]);
		}
	}
	
	return 0;
}    