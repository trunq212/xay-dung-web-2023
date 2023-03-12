#include<stdio.h>
int main (){
	char ch;
	
	printf("\nVN co bao nhieu dan toc anh em?");
	printf ("\nA. 52  B. 53  C. 54 D. 55 "),
	printf("\nBan chon dap an nao(A,B,C,D):");
	
		scanf("%c",&ch);
	switch (ch){
		case 'A':printf("\nBan chon A la sai roi!");
		break;
		case 'B':printf("\nBan chon B la sai roi!");
		break;
		case 'C':printf("\nBan chon C OK dung roi!");
		break;
		case 'D':printf("\nBan chon D la sai roi!");
		break;
		default : printf("\nBan chon %c khong dung . chi duoc chon (A,B,C,D) ",ch);
			break;
	}
	
	return 0;
}

