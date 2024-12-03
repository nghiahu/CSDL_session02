#include<stdio.h>
int main(){
	int n, x, count = 0;
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
	printf("Nhap vao so can dem: ");
	scanf("%d",&x);
	for(int j = 0;j < n;j++){
		if(x == arr[j]){
			count++;
		}
	}
	printf("So lan suat hien trong mang cua %d là: %d", x,count);
	return 0;
}

