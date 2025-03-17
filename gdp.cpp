#include<stdio.h>

int main(){
	float tdtt,gdp;
	int nam = 2014;
	printf("nhap vao tong gdp: ");
	scanf("%f",&gdp);
	printf("nhap vao toc do tang truong: ");
	scanf("%f",&tdtt);
	float gdp2014=gdp;
	printf("\n%-10s%-10s\n", "Nam", "GDP");
	 while (gdp <= 2*gdp2014 ) {
        printf("%-10d%-10.2lf\n", nam, gdp);
        gdp += gdp * tdtt; 
        nam++;
}}
