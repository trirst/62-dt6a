#include <stdio.h>
#include <math.h>
int main(){
	int a,b,tong,hieu,tich,thuong;
	
	printf("nhap 2 so: ");
	scanf("%2d%2d",&a ,&b);
	tong=a+b;
	hieu=a-b;
	tich=a*b;
	printf("tong la: %d\n hieu la: %d\n tich la %d\n ",tong,hieu,tich);
	if(a%b==0){
		thuong=a/b;
		printf("chia het\nthuong la: %d",thuong);
		
	}else{
	
		printf("ko chia het\n");}
		
	
	}
