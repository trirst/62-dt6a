#include <stdio.h>

int main() {
    double a,b,c,d,e,f;
    double x,y,D,Dx,Dy;

   
    printf("nhap a,b,c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("nhap d,e,f: ");
    scanf("%lf %lf %lf", &d, &e, &f);

 
    D = a*e-d*b;
    Dx = c*e-f*b;
    Dy = a*f-d*c;

   
    if (D!= 0) {
        x=Dx/D;
        y = Dy/D;
        printf("he co nghiem duy nhat:\n");
        printf("x=%.2f\n",x);
        printf("y=%.2f\n",y);
    } else {
        if (Dx==0 && Dy==0) {
            printf("he co vo so nghiem\n");
        } else {
            printf("he vo nghiem\n");
        }
    }

 
}

