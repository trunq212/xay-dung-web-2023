#include<stdio.h>
int main (){
	
	int a=1, b=1, c=a+b;
	printf("%d %d ",a,b);
	do{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	
	} while (c <=900);
	
	return 0;
}

