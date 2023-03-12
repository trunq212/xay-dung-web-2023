#include<stdio.h>
int main (){
	int inRaSoLe =0;
	int a[11] ={ 1,2,3,4,5,7,8,9,6,10,12};
	for (int i=0;i<11;i++)
	printf("%d ",a[i]);
	//in ra so le
	printf("\ncac so le ");
	for (int i=0 ;i<11;i++)
	
	    if (a[i] %2 !=0) printf ("%d ",a[i]);
	//in ra cac so >=5
	printf("\nIn ra cac so lon hon hoac bang 5 : ");
	for (int i=0;i<11;i++)
	if (a[i] >=5) printf ("%d ",a[i]);
	//in ra cac so chia het cho 3
	int dem =0;
	printf ("\nIn ra cac so chia het cho 3 : ");
	for (int i=0;i<11;i++)
	if (a[i] %3 ==0) {
		
	printf ("%d ",a[i]);
	dem++;
}
printf ("\nDa tim thay %d chia het cho 3",dem);

	return 0;
}

