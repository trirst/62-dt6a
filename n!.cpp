#include <stdio.h>

int main(){
	int n,giaithua=1;
	printf("nhap so n:  ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		giaithua*=i;
	}
	printf("n! la %d",giaithua);
}
