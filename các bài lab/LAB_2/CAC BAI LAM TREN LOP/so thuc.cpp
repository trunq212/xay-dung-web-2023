#include<stdio.h>
int main(){
	// your code here
	
	float x,y;
	printf("\n cho so thuc x:");
	scanf("%f",&x);
	printf("\n cho so thuc y:");
	scanf("%f",&y);
	
	printf("\nTong la %.2f ", (x-y));
	printf("\nHieu la %.2f ", (x+y));
	printf("\nThuong la %.2f ", (x*y));
	printf("\nTich la %.2f ", (x/y));
	return 0;
}
