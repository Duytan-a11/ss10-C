#include <stdio.h>

int main(){
	int	a[10] = {8,2,6,4,10,3,7,1,9,5};
	
	printf("Mang cua ban truoc khi sap xep: ");
	for(int i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	for(int i=0;i<9;i++){
		for(int j=0;j<9-i;j++){
			if(a[j] > a[j+1]){
				int tmp=a[j];
				a[j] = a[j+1];
				a[j+1] = tmp; 
			}
		}
	}
	printf("Mang cua ban sau khi da duoc sap xep noi bot: ");
	for(int i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
