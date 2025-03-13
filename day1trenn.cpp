#include <stdio.h>

int main(){
	int n;
	double tong=0;
	printf("nhap so n: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		tong+=1.0/i;
	}
	printf("tong la %.2f ",tong);
}


