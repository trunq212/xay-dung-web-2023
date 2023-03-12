#include<stdio.h>
int main (){
    int a[]={2,4,6,8,100,12,14,16,532,0,20};
    int tong = 0;
    int soNhoNhat ;
    int soLonNhat ;
    a[0] = 20 ;
    //duyet mang
    printf("\nMang gom co cac phan tu :");
    
	for (int i=0;i<10;i++)printf("%d ",a[i]);
	//tim so nho  nnhat 
	soNhoNhat =a[0]; //xem so dau tien la lon nhat 
	for (int i=0; i<10; i++) soNhoNhat =a [i]; //tim
	printf ("\nSo nho nhat la : %d",soNhoNhat);
    
	for (int i=0;i<10;i++)printf("%d ",a[i]);
	//tim so lon  nnhat 
	soLonNhat =a[0]; //xem so dau tien la lon nhat 
	for (int i=0; i<10; i++) soLonNhat =a [i]; //tim
	printf ("\nSo lon nhat : %d",soLonNhat);
	//tim 1 so trong mang
	int soCanTim;
	printf("\nCho so can tim:");
	scanf("%d",&soCanTim);
	for (int i=0 ; i<10;i++){
		if (soCanTim)== a[i]{
			printf("\nDa tim thay so %d  tai %d",socanTim,i);
			dem++ //tang bien dem len vi da tim thay
		
		
		}
	}
	if (dem==0)printf("\nKhong tim thay!");
	else printf("\nDa tim thay %d so tat ca",dem);
	
	
	
	return 0;
}

