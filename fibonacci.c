// the fibonacci sequence
#include<stdio.h>
main(){
	int x=0,y=1,sum,i;
	printf("\t %d",x);
	printf("\t %d",y);
	for(i=1;i<10;i++){
		sum=x+y;
		printf("\t %d",sum);
		x=y;
		y=sum;
	}
}
