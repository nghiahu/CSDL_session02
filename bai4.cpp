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
	for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    	printf("Mang sau khi sap xep: \n");
		for(int i = 0;i < n;i++){
			printf("%d \t", arr[i]);
	}
	return 0;
}

