#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

void kiemTraSonguyen(){
		printf("\n1.Kiem Tra So Nguyen. ");
		/// lam bai o day 
		int soNguyen;
		printf("\ncho mot so nguyen:");
		scanf("%d", &soNguyen);
		printf("%d la So Nguyen",soNguyen);
		//ktr co phai snt k
		bool nguyenTo = true;
		for(int i=2; i<soNguyen-1;i++)
		if (soNguyen%i==0) nguyenTo=false;
		if (nguyenTo==true)
		printf("\n %d Chinh La So Nguyen To",soNguyen);
		else
		printf("\n %d Khong Phai la So Nguyen To",soNguyen); 
		//ktr co phai chinh phuong k 
		int num;
		
		printf("\nNhap so Nguyen: ");
		scanf("%d", &num);
		
		int flag = 0;
		for (int i = 2; i <= sqrt (num); i++)
		{
		     if (i * i == num){
		     	flag = 1;
		     	break;
			 }	 
			 
		}
		if (flag == 1){
		printf("\n%d la so chinh phuong", num);
		}else{
		printf("\n%d khong phai so chinh phuong", num);
		}
	
}
void uocSoVaBoiSo(){
	    printf("\n2.Uoc so va Boi So. ");
	    //lam bai o day
	    int a,b,USCLN,BSCNN;
	    NhapLai:
	    printf("\nCho So Nguyen a: ");
	    scanf("%d",&a);
	    printf("\nCho So Nguyen b: ");
	    scanf("%d",&b);
	    if(a==0 && b==0){
		    printf("Du lieu nhap vao khong hop le\n");
		    goto NhapLai;
		}
		int so1=a,so2 = b;
		if(a==0 || b==0) USCLN = a + b;
		else 
		    while( a!=b){
			if(a > b) a = a-b;
			else b = b-a;
			}
			USCLN = a;
			printf("USCLN(%d,%d)= %d\n",so1,so2,USCLN);
			//---------------------------------------------
			BSCNN = so1*so2/USCLN;
			printf("BSCNN(%d,%d)= %d\n",so1,so2,BSCNN);
			}
void tinhTienKaraoke(){
	    printf("\n3.Tinh Tien Karaoke ");
	    int T = 150000;
	    int gioDau, gioCuoi, tongGio;
	    int tienGio;
	    int km4, kmv;
	    printf("Tinh Tien KARAOKE \n");
	    gioDau = 12; gioCuoi = 16;
	    tongGio = gioCuoi - gioDau;
	    printf("Gio Cuoi %dh - gio Dau %dh = %dh \n",gioCuoi, gioDau, tongGio);
	    printf("Tien gio: %d", (tongGio*T));
	    if(gioDau >= 14 && gioDau <=17){
	    	printf("\nKhuyen mai khung gio vang 10 phan tram");
	    	if(tongGio > 3){
	    	printf("\nTien gio vuot qua 3h ");
	    	km4 = (tongGio -3)*0.3 * T;
	    	tienGio = tongGio * T - km4;
	    	printf("\nSo gio vuot: %d => Tien KM: %d",(tongGio - 3),km4);
		}else{
			tienGio = tongGio * T;
		}
		kmv = tienGio * 0.1;
			printf("\nTien gio truoc KMV: %d ",tienGio);
			printf(" Tien KMV: %d",kmv);
		tienGio = tienGio - kmv;
		}else{
			if(tongGio > 3){
	    	printf("\nTien gio vuot qua 3h ");
	    	km4 = (tongGio -3)*0.3 * T;
	    	tienGio = tongGio * T - km4;
	    	printf("So gio vuot: %d => Tien KM:%d",(tongGio - 3),km4);
		}else{
			tienGio = tongGio * T;
		}
		}   
	    printf("\nTien phai tra: %d", tienGio);
	
}
void tinhTienDien(){
	    printf("\n4.Tinh Tien Dien. ");
	    // lam bai o day
float sodien = 1 , sotien =1;
printf(" \nNhap so tien dien =");
scanf(" so dien = %f",&sodien);
if(sodien < 0){
	scanf("%f",&sodien);
}else if(sodien >=1 && sodien <=50){
	sotien = sodien*1678;
	printf(" bac 1 => so dien : %f => so tien :%f",sodien, sotien);
}else if(sodien>51 && sodien <=100){
	sotien = sodien*1.734;
	printf(" bac 2 => so dien : %f => so tien :%f",sodien, sotien);
} else if(sodien>101 && sodien <=200 ){
	sotien = sodien*2.014;
	printf(" bac 3 => so dien : %f => so tien :%f",sodien, sotien);
} else if(sodien>201 && sodien <=300){
	sotien = sodien*2.536;
	printf(" bac 4 => so dien : %f => so tien :%f",sodien, sotien);
} else if(sodien>301 && sodien <=400){
	sotien = sodien*2.834;
	printf(" bac 5 => so dien : %f => so tien :%f",sodien, sotien);
} else if(sodien>401 && sodien <=50){
	sotien = sodien*2927;
	printf(" bac 6 => so dien : %f => so tien :%f",sodien, sotien);
} 
}
void doiTien(){
	printf("\n5.Doi Tien. ");
	int menhGia[] = {500,200,100,50,20,10,5,2,1};
	int soToTien;
	int soTien;
	printf("\nNhap vao so tien can doi(k):");
	scanf("%d",&soTien);
	while(soTien){
	for(int i = 0; i < 9; i++){
	    soToTien = soTien / menhGia[i];
	    if(soToTien != 0){  
		printf("Co %d to %d",soToTien,menhGia[i]);
		}
		soTien = soTien - soToTien * menhGia[i];
	}
  }
}
void tinhLaiSuat(){
	printf("\n6.Tinh Lai Suat\n ");
	int nam = 1;
	int tienVay = 12000000;
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
	
	//lam bai o day
}
void vayTienMuaXe(){
	printf("\n7.Vay Tien Mua Xe. ");
	int tienXe = 800000;
	int tienVay = 0;
	tienVay = tienXe * 0.8;
	printf("\nTien vay: %d \n",tienVay);
	if(tienVay >500000){
		printf("So tien vay cua ban vuot han muc quy dinh \n");
	}else{
	}
      
}
void sapXepSinhVien(){
	printf("\n8.Sap Xep Sinh Vien. ");
	float diem;//bien
	printf("xep loai hoc luc\n");//nhap du lieu
	printf("nhap diem:");
	scanf("%f",&diem);
	printf("Diem Trung Binh %.2f\n",diem);
	
	if (diem >=9){
		printf("Hoc Luc XUAT SAC");
	}else{
		if(diem >=8){
			printf("Hoc Luc GIOI");
		}else {
			if(diem >=6.5){
				printf(" Hoc Luc KHA");
				
			}else{
				if(diem>=5){
					printf(" Hoc Luc TRUNG BINH");
				}else{
					if(diem<5)
					printf("Hoc Luc YEU");
				}		
			}
		}
	}
}
void xayDungGame(){
	printf("\n9.Xay Dung Game. ");
	printf("Chuong trinh tro choi FPOLY LOTT \n");
	int randomNumber;
	int numberA, numberB;
	int count;
	printf("Moi ban lua chon so thu 1:");
	scanf("%d",&numberA);
	printf("Moi ban lua chon so thu 2:");
	scanf("%d",&numberB);
	srand(time(0));
	printf("So trung thuong \n");
	printf("--------------------------------\n");
	for(int i = 0; i < 2; i++){
	 randomNumber = rand() % 15;
	 printf("%10d",randomNumber);
	 if(numberA == randomNumber|| numberB==randomNumber){
	 count++;
	   }
	}
	printf("\n--------------------------------\n");
	if(count == 0){
	printf("Chuc ban may man lan sau");
	}else{
		if(count == 1){
		printf("Ban da trung giai 2");
		}else{
		printf("Ban da trung giai 1");
		}
		}
	}
void tinhToanPhanSo(){
		printf("\n10.Tinh Toan Phan So. ");
		
		
	
}
void menu(){
	printf("\n\n\n1.Kiem Tra So Nguyen. ");
	printf("\n2.Uoc so va Boi So. ");
	printf("\n3.Tinh Tien Karaoke ");
	printf("\n4.Tinh Tien Dien. ");
	printf("\n5.Doi Tien. ");
	printf("\n6.Tinh Lai Suat. ");
	printf("\n7.Vay Tien Mua Xe. ");
	printf("\n8.Sap Xep Sinh Vien. ");
	printf("\n9.Xay Dung Game. ");
	printf("\n10.Tinh Toan Phan So. ");
	printf("\n11.Ket Thuc Chuong Trinh. ");	
	printf("\nBan Chon So Nao ");
}
int main(){
	int chon;
	do{
		menu();
scanf("%d",&chon);
printf("\nBan Da Chon %d",chon);
switch(chon){
	case 1: kiemTraSonguyen(); break;
	case 2: uocSoVaBoiSo();    break;
	case 3: tinhTienKaraoke(); break;
	case 4: tinhTienDien();    break;
	case 5: doiTien();         break;
	case 6: tinhLaiSuat();     break;
	case 7: vayTienMuaXe();    break;
	case 8: sapXepSinhVien();  break;
	case 9: xayDungGame();     break;
	case 10: tinhToanPhanSo(); break;
	
	
}
		
	}while( chon!= 11);
 return 0;
}

