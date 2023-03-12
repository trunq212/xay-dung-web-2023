#include<stdio.h>
#include<stdlib.h>  //ham rand() cho so ngau nhien
#include<time.h>
int main (){
	int so ;
	int tong=0;
		srand (time(NULL)); //khoi tao so ngau nhien 
    printf("\n 10 so ngau nhien:");
	for ( int i=0; i<10 ;i++ ){
	    
		so = rand () %10 ;
		tong += so ;
    printf("%d ",so );
}
	
	return 0;
}

