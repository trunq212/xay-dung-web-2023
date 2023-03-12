#include<stdio.h>
int main (){
		float sodien, tiendien;
 	int b1, b2, b3, b4, b5, b6;
 	b1=1678;
	 b2=1734;
	 b3=2014;
	 b4=2536;
	 b5=2834;
	 b6=2927;
 printf("\nNhap vao so dien cua ban: ");
 scanf("%f",&sodien);
 if(sodien<0){
 printf("\nnhap lai so dien");
 }else if(sodien<=50){
  tiendien=sodien*b1;
  printf("\ndien tu 0 - 50 kWh, so tien phai tra la: %.2f",tiendien);
 }else if(sodien<=100){
  tiendien=50*b1+((sodien-50)*b2);
  printf("\ndien tu 51 - 100 kWh, so tien  phai tra la: %.2f",tiendien);
 }else if(sodien<=200){
  tiendien=50*b1+(50*b2)+((sodien-100)*b3);
  printf("\ndien tu 101 - 200 kWh, so tien phai tra la: %.2f",tiendien);
 }else if(sodien<=300){
 tiendien=50*b1+(50*b2)+(100*b3)+((sodien-200)*b4);
  printf("\ndien tu 201 - 300 kWh, so tien phai tra la: %.2f",tiendien);
 }else if(sodien<=400){
  tiendien=50*b1+(50*b2)+(100*b3)+(100*b4)+((sodien-300)*b5);
  printf("\ndien tu 301 - 400 kWh, so tien phai tra la: %.2f",tiendien);
 }else if(sodien>400){
  tiendien=50*b1+(50*b2)+(100*b3)+(100*b4)+(100*b5)+((sodien-400)*b6);
  printf("\ndien tren 400 kWh, so tien phai tra la: %.2f",tiendien);
 }
	
	
	return 0;
}

