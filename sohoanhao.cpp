#include <stdio.h>

int main() {
    int n,sum=0;
    printf("nhap so nguyen duong: ");
    scanf("%d",&n);
    for (int i = 1; i <= n / 2; i++) {
        if (n%i == 0) {
            sum+= i;
        }
    }
    if (sum == n) {
        printf("%d la so hoan hao\n", n);
    } else {
        printf("%d ko phai so hoan hao\n", n);
    }
}

