#include<stdio.h>
main(){
	float p,r,n,i;
	printf("Principal amount :");
	scanf("%f",&p);
	printf("Rate of interset :");
	scanf("%f",&r);
	printf("number of years :");
	scanf("%f",&n);
	i=(p*r*n)/100;
	printf("Interest  =%f",i);
}
