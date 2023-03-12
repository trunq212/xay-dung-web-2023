#include<stdio.h>
int main (){
	int k  = 0;
	int tong ;
	printf("\nIn ra xem :\n");
	for (int i=0 ;i<8;i++) {
		for (int j=0;j<8;j++){
			printf(" %2d",k);
			k++;
		}
		printf("\n");
	}
	printf("\n Tinh tong cua cac hang");
	k=0;
	for (int i=0 ;i<8;i++) {
		tong =0;
		for (int j=0;j<8;j++) {
			tong +=k;
			k++;
		}
		printf("\nTong hang %d la : %d ",i,tong);
	}
	
	
	return 0;
}

