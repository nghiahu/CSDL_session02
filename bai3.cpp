#include<stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	if(n < 0 || n > 100){
		return 0;
	}
	int arr[n];
	for(int i = 0;i < n;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	int newArr[n];
		for(int i = 0;i <= n;i++){
			newArr[i] = arr[n - i - 1];
	}
	printf("Mang dao nguoc: \n");
		for(int i = 0;i < n;i++){
			printf("%d \t", newArr[i]);
	}
	return 0;
}

