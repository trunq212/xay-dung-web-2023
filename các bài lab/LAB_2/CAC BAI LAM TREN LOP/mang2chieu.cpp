u#include<stdio.h>
int main (){
	// your code here
	int a[5][5]={
		          {1,2,3,4,5,},
		          {6,7,8,9,10},
				  {11,12,13,14,15 },
				  {16,17,18,19,20},
				  {21,22,23,24,25},
              	};
	printf("Mang cua toi:\n");
	for (int i=0 ;i<5;i++){ //duyet theo hang i
		for (int j=0;j<5;j++){// duyet theo cot j
			printf (" %2d ",a[i][j]);
		}
		printf("\n");
		
	}
	// tim so lon  nhat 
	int soLonNhat;
	for (int i=0 ;i<5;i++){ //duyet theo hang i
		for (int j=0;j<5;j++){// duyet theo cot j
		    if (a[i][j] > soLonNhat)
		       soLonNhat =a[i][j];
	    }
    }
    printf ("\n In ra so lon nhat la  %d:",soLonNhat);
    // tinh tong theo hang 
    int tong;
    	for (int i=0 ;i<5;i++){ //duyet theo hang i
	        tong =0;
		    for (int j=0;j<5;j++)  {
		       tong +=a[i][j];
		   }
printf ("\n\tong hang %d la %d ",i,tong);
    } 
    // tinh tong theo cot 
    	for (int j=0 ;j<5;j++){ //duyet theo hang i
	        tong =0;
		    for (int i=0;i<5;i++)  {
		       tong +=a[i][j];
		   }
printf ("\ntong cot %d la %d ",j,tong);
}
	return 0;
}

