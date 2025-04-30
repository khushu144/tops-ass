#include<stdio.h>
main(){
	//relation operator=>(<,>,<=,>=,!=,==)
	int a=10,b=16,c;
	c = a==b;//if both are equal then return 1
	printf("\n (a==b)=%d",c);
	c = a<b;
	printf("\n (a<b)=%d",c);
	c = a!=b;
	printf("\n (a!=b)=%d",c);
	//Assigment operators=> +=,-=,*=,/=
	a+=10;
	printf("\n a=%d",a);
	
	//sixeof operator
	printf("\n size of int=%d",sizeof(int));
	printf("\n size of float=%d",sizeof(float));
	printf("\n size of double=%d",sizeof(double));
	printf("\n size of char=%d",sizeof(char));
	
}
