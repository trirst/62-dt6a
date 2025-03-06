#include <stdio.h>

int main(){
	float r,v,s;
	float pi=3.14;
	printf("nhap vao ban kinh hinh cau: ");
	scanf("%f",&r);
	
	s=4*pi*r*r;
	v=(4/3)*pi*r*r*r;
	
	printf("chu vi hinh cau la: %f\n dien tich hinh cau la: %f",v,s);
	
}
