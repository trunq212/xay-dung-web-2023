#include<stdio.h>
int main (){
	// your code here
	int a,b, c,d,soNho;
	printf("\nCho 3 so nguyen:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	soNho =a;
	
	if (soNho>b) soNho =b;  
	if (soNho>c) soNho=c;
	if (soNho>d)
	printf("\nSo nho la %d",soNho);
	return 0;
}

