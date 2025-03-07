#include <stdio.h>

int main(){
	float diemtb;
	
	printf("nhap diem : ");
	scanf("%f",&diemtb);
	 if (diemtb<5)
	    printf("xep loai yeu");
	else if (diemtb>=5&&diemtb<7)
	printf("xep loai kha");
	else if (diemtb>=7&&diemtb<9)
	printf("xep loai gioi");
	else if (diemtb>9&&diemtb<=10)
	printf("xep loai xuat sac");
	else printf("diem ko hop le");
	
}
