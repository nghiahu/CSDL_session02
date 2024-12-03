#include<stdio.h>
int main(){
	int n, x, j;
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
	printf("Nhap vao so can xoa: ");
	scanf("%d",&x);
	int found = 0;
 	for(int i = 0; i < n; i++){
    if (arr[i] == x){
	      found = 1;
	      break;
    	}
  	}
    if(found == 1){
	for (int i = j = 0; i < n; i++) {
      if (arr[i] != x) {
        arr[j++] = arr[i];
      }
    }
    n = j;
	printf("Mang sau khi xóa: \n");
	for(int i = 0;i < n;i++){
		printf("%d \t",arr[i]);
	}
	}else{
		printf("Khong co phan tu do: \n");
	}
	return 0;
}

