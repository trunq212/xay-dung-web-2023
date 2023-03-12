#include<stdio.h>
int main(){
	char ch;
	printf("\nCho 1 ky tu: ");
	scanf("%c", &ch);
	switch(ch){
		case 'a':
		case 'u':
		case 'i':
		case 'o':
		case 'e':
		case 'y':
		printf("\nKy tu %c vua nhap la nguyen am",ch)	;
		break;
		case 'b':
		case 'c':
		case 'd':
		case 'f':
		case 'j':
		case 'l':
		case 'm':
		case 'n':
		case 'p':
		case 'q':
		case 'r':
		case 's':
		case 't':
		case 'v':
		case 'w':
		case 'z':
		printf("\nKy tu %c vua nhap la phu am",ch)	;
		break;
		default:
		printf("\nKy tu %c vua nhap khong phai nguyen am hay phu am",ch)	;
			
	}	
	printf("\n*************************");
	return 0;
}
