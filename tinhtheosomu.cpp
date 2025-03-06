#include <stdio.h>
#include <math.h>
int main(){
	float x;
	int n;
	printf("nhap vao so can tinh: ");
	scanf("%f",&x);
	printf("nhap so mu: ");
	scanf("%d",&n);
	
	 for (int i=2;i<=n;i++){
	 	x*=x;
	 }
	 printf("ket qua la: %2.f ",x);
}
