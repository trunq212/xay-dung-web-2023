#include<stdio.h>
int main(){
	int a[7]={5,7,6,5,4,3,9};
	printf("Truoc khi sap xep:");
	for(int i=0;i<7;i++) printf(" %d",a[i]);
	int tam;
	for(int i=0;i<6;i++)
		for(int j=i+1; j<7;j++)
			if(a[i]>a[j]){
				tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
	printf("\nSau khi sap xep:");
	for(int i=0; i<7;i++) printf(" %d",a[i]);
    return 0;
}

