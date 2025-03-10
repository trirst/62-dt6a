#include <stdio.h>

int main(){
	int n;
	int tong;
	tong = 0;
	printf("nhap so phan tu cua day: ");
	scanf("%d",&n);
	for (int i=0;i<=n;i++){
		if(i%2!=0){
			tong+=i;
			
		}
	}
	printf("tong la:%d ",tong);
}
