#include<stdio.h>
int main (){
	// your code here
	int sophut, cuoc=25000;
	int cuocthuebao=25000,cuocden50=0,cuocden200=0,cuocvuot200=0;
	
	printf("\nCho so phut trong thang:");
	scanf("%d",&sophut);
	if (sophut <= 50 ) cuocden50 += sophut*600;
	else if (sophut<=200){
		cuocden50 = 50*600;
		cuocden200= (sophut-50)* 400;
	} 
	else {
		cuocden50= 50*600;
		cuocden200=150*400;
		cuocvuot200=(sophut-200)*200;
	}

	printf ("\nCuoc thue bao hang thang la:%8d",cuocthuebao);
	printf("\nCuoc tu 0 den 50 la:         %8d",cuocden50);
	printf("\nCuoc tu 51 den 200 la:       %8d",cuocden200);
	printf("\nCuoc tu 200 tro len la:      %8d",cuocvuot200);
	printf("\nTong cuoc la :               %8d",cuocthuebao+cuocden50+cuocden200+cuocvuot200);
	return 0; 
}

