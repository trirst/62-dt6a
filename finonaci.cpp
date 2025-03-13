#include <stdio.h>

int main(){
	int n1=1,n2=1,n3,spt;
	printf("nhap so phan tu cua day :");
	scanf("%d",&spt);
	printf("1 1");
	for (int i=2;i<spt;++i){
		n3=n1+n2;printf("%6d",n3);
		n1=n2;
		n2=n3;
		
		
	}
	
	
}
