#include<stdio.h>
int main (){
	// your code here
	double toan, ly, hoa;
	double diemTrungBinh;
	
	printf("cho diem Toan Ly Hoa :");
	scanf("%lf%lf%lf",&toan,&ly,&hoa);
	diemTrungBinh = (toan *3+ ly*2+hoa)/6;
	printf("\nDiem Toan %.3lf, Diem ly %.3lf, Diem Hoa %.3lf",toan, ly, hoa);
	printf("\nDiem trung binh= %.3lf", diemTrungBinh);
	return 0; 
}

