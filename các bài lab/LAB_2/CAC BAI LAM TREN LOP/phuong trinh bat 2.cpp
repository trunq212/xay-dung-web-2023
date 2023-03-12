#include<stdio.h>
#include<math.h>
int main (){
	// your code here
	int a,b,c;
	int delta;
	float x1,x2;
	printf("Cho 3 so a,b,c: ");
	scanf("%d%d%d", &a, &b, &c);
	printf("\n3 so a,b,c vua nhap la: ; a a=%d b=%d c=%d ", a,b,c);
	delta = b*b-4*a*c;
	printf("\So delta la:%d",delta);
	
	x1= ( -b -sqrt(delta) )  / (2*a);
	x2= ( -b +sqrt(delta) )  / (2*a);
	
	printf("\nx1=%.2f",x1);
	printf("\nx2=%.2f",x2);
	return 0;
}

