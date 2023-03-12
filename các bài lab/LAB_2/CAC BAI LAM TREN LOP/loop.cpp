#include<stdio.h>
int main (){
	//tinh tong tu 1 den 12
	int tong =0;
	for (int i=1; i<13; i++ ) tong +=i;
	printf("\nTong la %d",tong);
	//in bang cuu chuong 2-10
	for (int i=2 ;i<=10; i++ ){
		if (i==5)continue;
		for (int j=1;j<=10;j++)
	        printf("\n %3d x %3d =%3d",i,j,j*i);
	    printf("\n");
}
	return 0;
}

