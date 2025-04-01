#include <stdio.h>
#include <math.h>

int tienlai(int von){
	int lai;
	int thang =0;
	
	while (von<1.5*von){
		lai=von*0.008;
		von+=lai;
		++thang;
	}
	return thang;
}
int main(){
	int v;
	scanf("%d",&v);
	int sothang=tienlai(v);
	printf("%d thang thi bang 1,5 ban dau",sothang);
}
