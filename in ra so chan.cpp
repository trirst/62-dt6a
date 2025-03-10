#include <stdio.h>

int main(){
	int n;
	printf("nhap so phan tu cua day: ");
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		if(i%2==0){
			printf("%5d",i);
		}
	}
}
	
