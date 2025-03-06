#include <stdio.h>
#include <math.h> 

int main() {
    double a, b, c; 
    double d, x1, x2;

    
    printf("Nhap a, b, c: ");
    scanf("%lf%lf%lf",&a,&b,&c);
    
	if (a == 0 && b == 0 && c == 0) {
        printf("pt co vo so nghiem\n");   
    } 
    if (a == 0) {
        if (b == 0) {
            printf("pt vo nghiem\n");
        } else {
            printf("pt co 1 nghiem: x=%.2f\n",-c/b);
        }      
    } else {
        d=b*b-4*a*c;
        if (d>0) {
            x1=(-b+sqrt(d)) / (2*a);
            x2=(-b-sqrt(d)) / (2*a);
            printf("pt co 2 nghiem phan biet:\n");
            printf("x1=%.2f\n",x1);
            printf("x2=%.2f\n",x2);
        } else if (d==0){
            x1=-b/(2*a);
            printf("Pt co nghiem kep: x=%.2f\n",x1);
        } else {
            printf("pt vo nghiem \n");
        }
    }

   
}

