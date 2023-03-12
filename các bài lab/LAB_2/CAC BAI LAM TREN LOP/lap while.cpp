#include<stdio.h>
int main (){
	// tinh tong tu 1 den 12
	int i=0 ;
	int tong =0;
	
	while (i<12){
		tong += i;
		i++;
	}
	printf("\nTong laf %d",tong );
	//in ra bang cuu chuong 7
	i=2;
	int j;
	while (i<=9){
		j=2;
		while (j<=10){
		
		printf("\n 7 x %3d = %3d",i,j,j*i);
		j++;	
	   };
	  printf("\n");
    	i++;
    }
	return 0;
}

