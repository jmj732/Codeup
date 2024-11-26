#include <stdio.h>

int count = 0;
int binarySearch(int left, int right, int key, int arr[], int isAsc,int* count) {
		*count += 1;
	
    if (left > right) return -1;
    const int mid = (left + right) / 2;
    if (key == arr[mid]) return *count;
	
    if (isAsc) {
        // 오름차순
        if (key > arr[mid]) return binarySearch(mid + 1, right, key, arr, isAsc, count);
        return binarySearch(left, mid - 1, key, arr, isAsc, count);
    } else {
        // 내림차순
        if (key < arr[mid]) return binarySearch(mid + 1, right, key, arr, isAsc,count);
        return binarySearch(left, mid - 1, key, arr, isAsc ,count);
    }
}

int main() {
    int n,asc = 1;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    for(int i = 1; i < n; i++){
        if(arr[i - 1] > arr[i]) asc = 0;
    }

    int key;
    scanf("%d",&key);
   
    int count = 0;
    int result = binarySearch(0, n - 1, key, arr, asc, &count);

    if (result == -1) 
        printf("실패\n");
    else 
        printf("%d", count);

    return 0;
}