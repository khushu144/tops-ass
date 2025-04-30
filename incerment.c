#include<stdio.h>
main(){
	int x=10,y,m=9,n;
	y=x++;//post increment=>value assign first then incerment by 1 itself
	printf("\n y=%d",y);
	printf("\n x=%d",x);
	
	n=++m;//pre increment=>first increment 1 by itself then assign to other
	
	printf("\n n=%d",n);
	printf("\n m=%d",m);
	m--;
	printf("\n decrement m=%d",m);
	
	
	
}
