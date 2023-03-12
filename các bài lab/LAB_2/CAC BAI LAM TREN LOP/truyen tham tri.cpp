#include<stdio.h>

    int n =0;
    //---------------------------------
void tang( int *x){
    	*x +=5 ;
    	
}
	//-------------------------------
int main(){
	for (int i =0 ;i<10;i++){
		printf(" %d ",n);
		tang(&n);
    }
	return 0;
}

