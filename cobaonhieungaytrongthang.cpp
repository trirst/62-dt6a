#include <stdio.h>


int laNamNhuan(int nam) {
    return (nam%4==0&&nam%100!=0) || (nam%400==0);
}

int main() {
    int thang,nam;
    
    printf("Nhap nam: ");
    scanf("%d",&nam);
    
    printf("Nhap thang (1-12): ");
    scanf("%d",&thang);

    int soNgay;
    
    switch (thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            soNgay=31;
            break;
        case 4: case 6: case 9: case 11:
            soNgay=30;
            break;
        case 2:
            soNgay= laNamNhuan (nam) ? 29 : 28;
            break;
        default:
            printf("thang ko hop le!\n");
            return 1;
    }

    printf("Thang %d nam %d co %d ngay\n", thang, nam, soNgay);

    
}

