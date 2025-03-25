#include <stdio.h>


void convertToBase(int num, int base) {
    if (num == 0) {
        return;
    }
    int remainder = num % base;
    convertToBase(num / base, base); 
   
    if (remainder < 10) {
        printf("%d", remainder);
    } else {
        printf("%c", remainder - 10 + 'A');  
    }
}

int main() {
    int num;
    printf("nhap so nguyen duong : ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("nhap so nguyen duong di!\n");
        return 1;
    }

    printf("he nhi phan (2): ");
    if (num == 0) printf("0");
    else convertToBase(num, 2);
    printf("\n");

    printf("he bat phan(8): ");
    if (num == 0) printf("0");
    else convertToBase(num, 8);
    printf("\n");

    printf("he thap luc phan (16): ");
    if (num == 0) printf("0");
    else convertToBase(num, 16);
    printf("\n");

    return 0;
}

