#include<stdio.h>
int main (){
	// your code here
	double quiz,lab;
	printf("\nCho diem quiz va lab:");
	scanf("%lf%lf",&quiz,&lab);
	printf ("\nDiem quiz =%.2lf va Diem lab =%.2lf,",quiz,lab);
	if (quiz >=5 && lab>=5)
	    printf("\n Ban qua mon");
	else 
	    printf("\n Ban thi lai ");    
	
	
	return 0;
}

