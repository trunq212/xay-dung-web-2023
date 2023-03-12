#include<stdio.h>
int main(){
	// your code here
	// khai bao 1 xau
	char ten[30];
	printf("Ban ten gi?");
	// scanf("%s", &ten); // nhap vao 1 xau khong co khoang trang
    // gets(ten)
    printf("chao bao %s, chuc ban manh khoe ", strupr(ten) );
	// Ham strupr doi chu thuong thanh chu hoa
	
	return 0;
}
