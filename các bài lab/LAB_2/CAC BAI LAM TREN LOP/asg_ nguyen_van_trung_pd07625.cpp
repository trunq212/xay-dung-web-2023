#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void kiemTraSoNguyen(){
    printf("\n1 .Kiem tra so nguyen .");
    //sv lam bai o day
    int soNguyen;
    printf("\nCho 1 so nguyen :");
    scanf("%d",&soNguyen);
    
    printf("\n%d la so nguyen",soNguyen);
    //kiem tra co phai nguyen to khong
    	bool nguyento = true;
	for (int i=2 ; i < soNguyen -1 ; i++)
	
	    if (soNguyen%i==0) nguyento=false ;
	if (nguyento ==true)
	   printf("\n %d Chinh la so nguyen to ",soNguyen);
	else 
   	printf("\n %d Khong phai la so nguyen to ",soNguyen);
}
//ket thuc bai 1------------------------------------------------------------------
void uocSoVaBoiSo(){
	printf ("\n2. Uoc so va boi so");
	//sv lam bai o day
    int uocSo,boiSo,a,b; 
    do
{
    printf("\nCho 2 so nguyen a,b : ");
    scanf("%d%d",&a,&b);
}
    while (a<=0 || b<=0);
            uocSo=a;
            boiSo=b;
    while(a!=b){
        if(a>b) a-=b;
        else b-=a;
}
        printf("\nUoc chung lon nhat la : %d",a);
        printf("\nBoi chung nho nhat la : %d",(uocSo*boiSo)/a);
}
//ket thuc bai 2------------------------------------------------------------------
void tinhTienKaraoke(){
	printf("\n3. Tinh tien karaoke");
	//sv lam bai o day
	int batdau,ketthuc,giagiam30,hgiamgia30,tongtien;
	int gia1h = 150000;
	int hsudung=0;
	giagiam30 = gia1h * 0.7;
	printf("\nNhap vao gio bat dau, gio ket thuc: ");
	scanf("%d %d",&batdau,&ketthuc);
	printf("\nGio bat dau:%d \nGio ket thuc:%d",batdau,ketthuc);
	hsudung = ketthuc - batdau;
	if (batdau<12 || ketthuc>23 || batdau>23 || ketthuc<12) printf("\nSo gio nhap sai, quan chi hoat dong tu 12h den 23h");
	else if(hsudung<=3){
		tongtien=gia1h*hsudung;
    if (batdau >= 14 && batdau <= 17) {
	tongtien = tongtien * 0.9;
    }
	}
	else if (hsudung > 3) {
	hgiamgia30 = hsudung - 3;
	
	tongtien = ((gia1h * 3) + (giagiam30 * hgiamgia30));
    } 

	printf("\nTong tien can thanh toan la: %d VND",tongtien);
	

}
//ket thuc bai 3------------------------------------------------------------------
void tinhTienDien(){
	printf("\n4. Tinh tien dien");
	//sv lam bai o day
		 float sodien, tiendien;
     int b1=1678, b2=1734, b3=2014, b4=2536, b5=2834, b6=2927;
          printf("Nhap vao so dien da su dung: ");
          scanf("%f",&sodien);
     if(sodien<=0){
          printf("\nnhap lai so dien");
}    else if(sodien<=50){
          tiendien=sodien*b1;
          printf("\nSo dien tu 0 - 50 kWh, so tien phai tra la: %.0fvnd",tiendien);
}    else if(sodien<=100){
          tiendien=50*b1+((sodien-50)*b2);
          printf("\nSo dien tu 51 - 100 kWh, so tien  phai tra la: %.0fvnd",tiendien);
}    else if(sodien<=200){
          tiendien=50*b1+(50*b2)+((sodien-100)*b3);
          printf("\nSo dien tu 101 - 200 kWh, so tien phai tra la: %.0fvnd",tiendien);
}    else if(sodien<=300){
          tiendien=50*b1+(50*b2)+(100*b3)+((sodien-200)*b4);
          printf("\nSo dien tu 201 - 300 kWh, so tien phai tra la: %.0fvnd",tiendien);
}    else if(sodien<=400){
          tiendien=50*b1+(50*b2)+(100*b3)+(100*b4)+((sodien-300)*b5);
          printf("\nSo dien tu 301 - 400 kWh, so tien phai tra la: %.0fvnd",tiendien);
}    else if(sodien>400){
          tiendien=50*b1+(50*b2)+(100*b3)+(100*b4)+(100*b5)+((sodien-400)*b6);
          printf("\nSo dien tren 400 kWh, so tien phai tra la: %.0fvnd",tiendien);
 }
}
//ket thuc bai 4------------------------------------------------------------------
void doiTien(){
	printf("\n5. Doi tien");
	//sv lam bai o day
     int menhGia[] = { 500, 200, 100, 50, 20, 10, 5}; // 9 menh gia
	 int soTien;//so tien can doi
	 int soToTien;
     	 printf("\nNhap so tien can doi(k):");
    	 scanf("%d", &soTien);
	 while(soTien){
	    for(int i=0; i<9; i++);
		    soToTien = soTien / menhGia[0];
		if(soToTien != 0){
				printf("Co %d to %d \n", soToTien, menhGia[0] ); 
			} 
			soTien = soTien - soToTien * menhGia[0]; 
	 }	
}
//ket thuc bai 5------------------------------------------------------------------
void tinhLaiXuat(){
	printf("\n6. Tinh lai xuat\n");
	//sv lam bai o day
	int nam = 1;
	int tienVay;
	printf("\nNhap so tien muon vay: ");
	scanf("%d",&tienVay);
	int tienLai;
	int tienGoc = tienVay /12;
	int tienCon;
	int tienTra;
	tienCon = tienVay;
	int laiSuat(500000000);
	printf("Ky han | Lai phai tra | Goc phai tra | So tien phai tra | So tien con lai | \n");
	for(int i =1; i<= 12; i++){
		tienLai = tienCon * 0.05;
		tienTra =  tienGoc + tienLai;
		tienCon = tienCon - tienGoc;
		               printf("--------------------------------------------------------------------------\n");
		printf("%6d | ",i);
		printf("%12d | ",tienLai);
		printf("%12d | ",tienGoc);
		printf("%16d | ",tienTra);
		printf("%15d |",tienCon);
		printf("\n");
	}

	
}
//ket thuc bai 6------------------------------------------------------------------
void vayTienMuaXe(){
	printf("\n7. Vay tien mua xe");
	//sv lam bai o day
	double soPhanTramVay, thoiHanVay;
	printf("Xin moi nhap vao so phan tram vay toi da : ");
	scanf("%lf", &soPhanTramVay);
	double thoiHanVayToiDa = 24;
	double laiSuatCoDinhNam = 0.072;
	double tienDuocVayCoDinh = 500000000;
	double tienTraLanDau,tienVay,tienLaiHangNam,tienVayPhaiTraMoiNam, tongTienPhaiTraMoiNam;
	tienTraLanDau = tienDuocVayCoDinh*(100-soPhanTramVay)/100;
	tienVay = tienDuocVayCoDinh - tienTraLanDau;
	tienVayPhaiTraMoiNam = tienVay/thoiHanVayToiDa;
	tienLaiHangNam =tienVay*0.072 ;
	tongTienPhaiTraMoiNam = tienVayPhaiTraMoiNam+tienLaiHangNam;
	printf("So tien phai tra lan dau cua quy khach la: %.0lf VND",tienTraLanDau);
	printf("\nSo tien goc phai tra moi nam la :%.0lf VND",tienVayPhaiTraMoiNam);
	printf("\nSo tien lai phai tra hang nam la :%.0lf VND",tienLaiHangNam);
	printf("\nTong so tien phai tra hang nam cho den het ki han vay la: %.0lf VND",tongTienPhaiTraMoiNam );

}
//ket thuc bai 7------------------------------------------------------------------
    struct SinhVien{
    char ten[20];
    int tuoi;
    float diem;
    char hocLuc[20];
};
void nhapThongtin(struct SinhVien danhsach [], int *n){
    int i;
    printf ("\nMoi nhap so luong sinh vien: ");
    scanf ("%d", n);
    for (i = 0; i < *n; i++){
            printf ("\nMoi nhap ten hoc sinh thu %d: ", (i + 1));
        fflush (stdin);
        gets(danhsach[i].ten);
        do{
            printf ("Moi nhap tuoi: ");
            scanf ("%d", &danhsach[i].tuoi);}
        while (danhsach[i].tuoi <= 0);
        do{
            printf ("Moi nhap diem: ");
            scanf ("%f", &danhsach[i].diem);}
        while (danhsach[i].diem < 0);}
        
    }
void sapXep(struct SinhVien danhsach[], int n){
    int i, j;
    for (i = 0; i < n; i++){
        for (j = n; j > i; j--){
            if(danhsach[j].diem > danhsach[j - 1].diem){
                struct SinhVien dstamthoi = danhsach[j];
                danhsach[j] = danhsach[j - 1];
                danhsach [j - 1] = dstamthoi;}             
            }
        }
}
void hocLuc(struct SinhVien danhsach[], int n){
    int i;
    
    for (i = 0; i < n; i++){
        if(danhsach[i].diem >= 9){
        strcpy(danhsach[i].hocLuc,"Hoc luc xuat sac");}
        
        else if(danhsach[i].diem >= 8){
        strcpy(danhsach[i].hocLuc,"Hoc luc gioi");}
        
        else if(danhsach[i].diem >= 6.5){
        strcpy(danhsach[i].hocLuc,"Hoc lua kha");}
        
        else if(danhsach[i].diem >= 5){
        strcpy(danhsach[i].hocLuc,"Hoc luc TB");}
        
        else {
        strcpy(danhsach[i].hocLuc,"Hoc luc yeu");}       
    }
}
void hienThi(struct SinhVien danhsach[], int n){
    int i;
    
    printf ("\nSTT\tTen sinh vien\t\tDiem\t\tHoc luc\n");
    
    for (i = 0; i < n; i++){
        printf ("%d\t%s\t\t\t%g\t\t%s\n", (i + 1), danhsach[i].ten, danhsach[i].diem, danhsach[i].hocLuc);
		}      
}
void sapXepSinhVien(){
	
    struct SinhVien danhsach[40];
    int n;
    
    nhapThongtin(danhsach, &n);
    
    sapXep(danhsach, n);
    
    hocLuc(danhsach, n);
    
    hienThi(danhsach, n);
}
//ket thuc bai 8------------------------------------------------------------------
void xayDungGame(){
	printf("\n9. Xay dung game ");
	//sv lam bai o day
	int so1,so2,nn1,nn2;
	printf("\nNhap vao 2 so: ");
	scanf("%d%d",&so1,&so2);
	if(so1<1 || so1>15 || so2<1 || so2>15){
		printf("\nBan nhap sai!!! (Chi duoc nhap tu 1-15)");
	}
	else{
		printf("\n2 so da nhap la %d va %d",so1,so2);
		srand(time(NULL));
		nn1=rand()%15+1;
		nn2=rand()%15+1;
		printf("\n2 so ngau nhien la %d va %d",nn1,nn2);
		if(so1==nn1&&so2!=nn2){
			printf("\nBAN TRUNG GIAI NHI  ^ ^");
		}
		else if(so1==nn2&&so2!=nn1){
			printf("\nBAN TRUNG GIAI NHI  ^ ^");
		}
		else if(so1!=nn2&&so2==nn1){
			printf("\nBAN TRUNG GIAI NHI");
		}
		else if(so1!=nn1&&so2==nn2){
			printf("\nBAN TRUNG GIAI NHI");
		}
		else if(so1==nn1&&so2==nn2){
			printf("\n\nBAN TRUNG GIAI NHAT ^ ^");
		}
		else if(so1==nn2&&so2==nn1){
			printf("\n\nBAN TRUNG GIAI NHAT ^ ^");
		}
		else{
			printf("\nCHUC BAN MAY MAN LAN SAU !!!");
		}
		}
}
//ket thuc bai 9------------------------------------------------------------------
//Tim boi so chung nho nhat                                    
int bscnn (int a,int b){
	int bsc=a ;
	while (bsc%a !=0 || bsc%b !=0 ) bsc+= 1;
	return bsc;
}
//--------------------------------------------------------------------------------
void tinhToanPhanSo(){
	printf("\n10.tinh toan thong so ");
	//sv lam bai o day
	int tu1,mau1,tu2,mau2;//phan so
	    printf("\nCho phan so thu nhat (tu/mau#0):");
	    scanf("%d%d",&tu1,&mau1);
	    printf("\nCho phan so thu nhi (tu/mau#0):");
	    scanf("%d%d",&tu2,&mau2);
	if (mau1==0 || mau2==0){
		printf("\nBan nhat 2 roi. Mau phai khac 0 ");
	}else {
		//tinh tong phan so 
		if (mau1==mau2){
			printf("\nTong 2 phan so la : %d/%d",tu1+tu2,mau1);	
		}else {
			int msc = bscnn(mau1,mau2);
			printf("\nTong 2 phan so la:%d/%d",
			tu1 * msc / mau1 + tu2 * msc / mau2 , msc);
			printf("\nHieu 2 phan so la:%d/%d",
			tu1 * msc / mau1 - tu2 * msc / mau2 , msc);
		}
		//tich 2 phan so
		printf("\nTich 2 phan so la:%d/%d",tu1*tu2,mau1*mau2);
		//thuong 2 phan so
		printf("\nThuong cua 2 phan so la:%d/%d",tu1*mau2,tu2*mau1);
		//hieu 2 phan so
	}
}
//ket thuc bai 10-----------------------------------------------------------------
void fibonacy(){
    
    int count, first_term = 0, second_term = 1, next_term, i;
  
    printf("\nNhap so luong so fibonacy:\n");
    scanf("%d",&count);
  
    printf("so hang %d dau tien cua day so la:\n",count);
    for ( i = 1 ; i < count ; i++ )
    {
       if ( i <= 1 )
          next_term = i;
       else
       {
          next_term = first_term + second_term;
          first_term = second_term;
          second_term = next_term;
       }
       printf("  %d  ",next_term);
    }
  

}
void ketThucChuongTrinh(){
	printf("\n12.Ket thuc chuong trinh");
}
void menu (){
	printf("\n==================================================\n");
	printf("||\t      1.Kiem tra so nguen               ||\n");    
	printf("||\t      2.Uoc so va boi so                ||\n");  
	printf("||\t      3.Tinh tien karaoke               ||\n");
	printf("||\t      4.Tinh tien dien                  ||\n");
	printf("||\t      5.Doi tien                        ||\n");
	printf("||\t      6.Tinh lai xuat                   ||\n");
	printf("||\t      7.Vay tien mua xe                 ||\n");
	printf("||\t      8.Sap xep sinh vien               ||\n");
	printf("||\t      9.Xay dung game                   ||\n");
	printf("||\t      10.Tinh toan phan so              ||\n");
	printf("||\t      11.Day so fibonacy                ||\n");
	printf("||\t      Ket thuc chuong trinh             ||");
	printf("\n==================================================");
	printf("\nBan chon chuong trinh nao ?:");
	scanf("\nBan cho so nao");
}
int main (){
    int chon ;
    do{
     	menu();
     	scanf("%d",&chon);
	    printf("\nban da chon bai %d",chon);
	    switch(chon){
	    
	    	    case 1: kiemTraSoNguyen();           break;
	            case 2: uocSoVaBoiSo();              break;
	        	case 3: tinhTienKaraoke();           break;
	        	case 4: tinhTienDien();              break;
	        	case 5: doiTien();                   break;
	        	case 6: tinhLaiXuat();               break;
	        	case 7: vayTienMuaXe();              break;
	        	case 8: sapXepSinhVien();            break;
	         	case 9: xayDungGame();               break;
	           	case 10:tinhToanPhanSo();            break;
	        	case 11:fibonacy();                  break;
				case 12:ketThucChuongTrinh();        break;
	        	
		}
		
		
	}while (chon !=12);
	
	return 0;
}

