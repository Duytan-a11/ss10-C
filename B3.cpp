#include <stdio.h>

int main(){
	int n=10;
	int	a[n] = {10,1,3,6,7,8,9,2,5,4};
	
	printf("Mang cua ban truoc khi duoc sap xep: ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	for(int i=1;i<n;i++){
		int Index=i-1,chengiatri = a[i];
		while(Index >= 0 && chengiatri < a[Index]){
			a[Index + 1] = a[Index];
			Index--;
		}
		a[Index + 1]=chengiatri;
	}
	
	printf("Mang cua ban sau khi da duoc sap xep: ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
