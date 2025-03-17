#include<stdio.h>

int main(){
	float tiengui;
	int n;
	printf("NHAP VAO TIEN GUI: ");
	scanf("%f",&tiengui);
	printf("nhap so thang muon gui lai: ");
	scanf("%d",&n);
	double lai=tiengui*(0.45/100.0);
	for (int i=1;i<=n;i++){
		tiengui+=lai;
	}
	printf("so tien nhan duoc sau %d thang la %f",n,tiengui);
}
