#include <stdio.h> 
#include <string.h>
struct SinhVien{
    char Ten[50];
    int MSSV;
    char Nganh[50];
    double DTB;
};
void Nhap(SinhVien sv[], int n){
    for(int i=0; i<n; i++){
        printf("\nNhap thong tin sinh vien thu %d:",i+1);
        printf("\nNhap ten sinh vien:");
        scanf("%s",&sv[i].Ten);
        printf("\nNhap ma sinh vien:");
		scanf("%d",&sv[i].MSSV);
        printf("\nNhap nganh:");
        scanf("%s",&sv[i].Nganh);
        printf("\nNhap DTB:");
        scanf("%lf",&sv[i].DTB);
    }
}
void Xuat(SinhVien sv[], int n){
    printf("\n======THONG TIN SINH VIEN======\n");
    printf("Ten \t MSSV \t Nganh \t DTB \n");
    for(int i=0; i<n; i++){
        printf("%s \t %d \t %s \t %.1lf \n",sv[i].Ten,sv[i].MSSV,sv[i].Nganh,sv[i].DTB);
    }
}
void sapxepdiem(SinhVien sv[],int n){
	struct SinhVien tam;
	for (int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if (sv[i].DTB > sv[j].DTB){
			tam = sv[i];
			sv[i] = sv[j];
			sv[j] = tam; 
		}
	}
	}
}
void timsv(SinhVien sv[],int n){
	int msv;
	int dem=0;
	printf("\nNhap ma sv muon tim: ");
	scanf("%d",&msv);
	for (int i=0; i<n; i++){
		if (msv == sv[i].MSSV){ printf ("\nTim thay SV ten:%s ,co mssv la: %d",sv[i].Ten,msv);
		dem++;}
	}
	if (dem > 0) printf("\nDa tim thay %d sv co ma sv la: %d",dem,msv);
	else printf("\nKhong tim thay!");
}
int main(){ 
    SinhVien sv[100];
    int n; 
    printf("Nhap so sinh vien:");
    scanf("%d",&n);
    Nhap(sv,n);
//Bai2
	sapxepdiem(sv,n);
    Xuat(sv,n);
//bai3
    timsv(sv,n);
}
