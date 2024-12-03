#include<stdio.h>
int main(){
	int n, m;
	printf("Nhap so phan tu cua mang 1: ");
	scanf("%d",&n);
	if(n < 0 || n > 100){
		return 0;
	}
	int arr1[n];
	for(int i = 0;i < n;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr1[i]);
	}
	printf("Nhap so phan tu cua mang 2: ");
	scanf("%d",&m);
	if(m < 0 || m > 100){
		return 0;
	}
	int arr2[m];
	for(int i = 0;i < n;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr2[i]);
	}
	int result[n+m];
	for (int i = 0; i < n; i++) {
        result[i] = arr1[i];
    }
    for (int j = 0; j < m; j++) {
        result[n + j] = arr2[j];
    }
    printf("Mang sau khi gop: \n");
    for(int i = 0;i < n+m;i++){
		printf("%d \t",result[i]);
	}
	return 0;
}

