#include<stdio.h>
#include<math.h>
int main (){
	// your code here
	double a,b,c,p,s;
	printf("\nCho 3 canh a,b,c cua tam giac:");
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("\nBa canh laf a=%2.lf b=%2.lf c=%2.lf",a,b,c);
	// nua chu vi
	p=(a+b+c)/2;
	// dien tich
	s=sqrt(p * (p-a) * (p-b) * (p-c) );
	printf("\nDien tich tam giac la %2.lf",s);
	
}

