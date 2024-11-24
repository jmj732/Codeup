#include <stdio.h>

int hei[64], n;
int cnt = 0;

int order_ad(){
	int asc = 1, desc = 1;
	for(int i = 1;i < n;i++){
		if(hei[i - 1] > hei[i])
			asc = 0;
		if(hei[i - 1] < hei[i])
			desc = 0;
	}
	if (asc) return 1;
	if (desc) return 2;
	return 0;
}

int binsearch(int low, int high, int fn, int order){
	if (low > high){
		return -1;
	}
	cnt++;
	int mid = (low + high) / 2;
	if(hei[mid] == fn)
		return mid + 1;
	if(order == 1){
		if(hei[mid] < fn)
			return binsearch(mid + 1, high, fn, order);
		else if (hei[mid] > fn)
			return binsearch(low , mid - 1, fn, order);
	} 
	else if (order == 2){
		if(hei[mid] < fn)
			return binsearch(low, mid - 1, fn, order);
		else if (hei[mid] > fn)
			return binsearch(mid + 1, high, fn, order);
	}
}


int main() {
	
	scanf("%d",&n);
	
	for(int i = 0; i < n; i++)
		scanf("%d",&hei[i]);
	
	int fi_hei;
	scanf("%d",&fi_hei);
	
	int result;
	int order = order_ad();
	result = binsearch(0,n,fi_hei,order);

	if(result == -1 && order)
		printf("실패");
	else if(order)
		printf("%d",cnt);
	else
		printf("불가능");
	
	return 0;
}
