#include<stdio.h>
int max(int x, int y){
	if (x>y) return x;
	else return y;
}
int main (){
	// your code here
	int a,b;
	printf("\nCho 2 so nguyen a,b:");
	scanf("%d%d", &a, &b);
	printf("\nSo lon nhat la:%d",max (a,b) );
	return 0;
}

