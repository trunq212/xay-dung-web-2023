#include<stdio.h>
#include<stdlib.h>  // ham rand() cho so ngau nhien
#include<time.h>
int main (){
	int so = 0;
	int tong =0;
	int lonnhat=0;
	int nhonhat =0;
	printf ("\nCho cac so ngau nhien: ");
	srand(time(NULL));  //khoi tao so ngau nhien
	for(int i =0;i<10;i++) {
		so = rand () % 30 ;
		tong += so ; // tinh tong
		if (lonnhat<so) lonnhat = so;
		
		if( nhonhat>so ) nhonhat = so ;
		printf("%d ",so);
		}
		
	printf("\n Tong la :%d ",tong);
	printf("\n So lon nhat : %d ",lonnhat);
	printf("\n So nho nhat :%d ",nhonhat);
	return 0;
}

