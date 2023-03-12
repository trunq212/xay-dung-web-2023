#include<stdio.h>
	void chao ( ){
		printf("\nChao cac ban , chuc cac ban manh khoe");
		
	}
	//----------------------------------------------------
	void chao (char ten [20]){
		printf("Chao ban %s. Chuc ban hoc gioi ",ten);
		
	}
	//------------------------------------------------------
	int tinhtuoi(int namsinh){
		return 2022 - namsinh + 1;
	}
	//------------------------------------------------------
	double diemtrungbinh(double toan , double ly ,double hoa ){
		return ( toan *2 + ly + hoa  )/ 4;
	}
	//------------------------------------------------------
	void  xeploai(double dtb){
		if (dtb <=10.0)     printf ("Xuat Sac");
		else if (dtb>=8.0)  printf ("Gioi");
		else if (dtb>6.5)  printf ("kha");
		else if (dtb>5.0)  printf ("Trung binh");
		else               printf ("Yeu");

		
	}	
	
	
	//=====================================================
	int main (){
	
		chao();
		chao("\nNguyen Van Trung"); chao();
		printf("\ntuoi cua ban la :%d",tinhtuoi(2004));
	    	printf("\nDiem TB ky 1 la : %.2lf",diemtrungbinh(7.8,8,9));
	    	printf("\nDiem TB ky 2 kyd la : %.2lf",diemtrungbinh(9,9 ,10));
		    printf("\nDiem TB cuoi nam la : %.2lf",diemtrungbinh ( 10 , 9 ,9 ));
		printf("\nXep loai:") ;  
		xeploai (9);
		return 0; 
}

