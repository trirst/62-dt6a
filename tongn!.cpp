#include <stdio.h>

int main(){
	int n,giaithua=1;
	double tong=0;
	printf("nhap so n:  ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		giaithua*=i;
		tong+=1.0/giaithua;
	}
	printf("tong la %.2f ",tong);
	}

	

