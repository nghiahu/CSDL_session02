#include<stdio.h>
int main(){
	int n;
	int max = 0;
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
	max = arr[0];
	for(int j = 0;j < n;j++){
		if(max < arr[j]){
			max = arr[j];
		}
	}
	printf("So lon nhat trong mang la: %d", max);
	return 0;
}

