#include<stdio.h>
main(){
	int i,num,rem,rev=0;
	printf("\n enter the number");
	scanf("%d",&num);
	while(num!=0){
		rem = num%10;
		//printf("\n rem=%d",rem);
		rev=rev*10+rem;
		//printf("\t rev=%d",rev);
		num=num/10;
		//printf("\t num=%d",num);
	}
	printf("\n rev num=%d",rev);
	
}
