#include<stdio.h>
int main (){
	// your code here
	int doanhThu, hoaHong;
	printf("\nCho dung thu:");
	scanf("%d",&doanhThu);
	if (doanhThu<=100000000) hoaHong = doanhThu*5/100;
	else if (doanhThu<30000000) hoaHong = doanhThu*10/100;
	else hoaHong = doanhThu /100*20;
	printf ("\nDoang thu la %d thi hoa hong la %d",doanhThu,hoaHong);
	return 0;
}

