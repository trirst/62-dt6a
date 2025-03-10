#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("nhap so nguyen n :");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		if (n % i ==0)
		printf("%4d", i);
	}
}
