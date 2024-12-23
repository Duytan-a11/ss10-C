#include <stdio.h>

int main(){
	int n=10;
	int	a[n] = {10,1,9,4,7,6,2,3,5,8};
	
	printf("Mang cua ban truoc khi duoc sap xep: ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	
	for(int i=0;i<n-1;i++){
		int minIndex=i;
		for(int j=i+1;j<n;j++){
			if(a[j] < a[minIndex]){
				minIndex = j;
			}
		}
		int tmp=a[i]; a[i] = a[minIndex]; a[minIndex] = tmp;
	}
	
	printf("Mang cua ban sau khi duoc sap xep bang sap xep chon: ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
