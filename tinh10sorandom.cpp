#include <stdio.h>

int main(){
	int i,tong=0;
	int a[10];
	for (i=0;i<10;i++) {
        printf("Nhap so thu %d: ",i+1);
        scanf("%d",&a[i]);
        tong+=a[i];
    }
    printf("tong la %d ",tong);
    
		
}
