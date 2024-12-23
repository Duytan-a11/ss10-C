#include <stdio.h>

int main(){
	int a[10]={1,3,2,6,5,8,4,9,7,10};
	
	int kiemtraso=0;
	printf("Nhap vao gia tri can kiem tra: ");	
	scanf("%d", &kiemtraso);
	
	for(int i=0;i<10;i++){
		if(a[i] == kiemtraso){
			printf("Phan tu %d co trong mang, nam o vi tri thu %d",a[i],i+1);
			break;
		}
	}
	return 0;
}
