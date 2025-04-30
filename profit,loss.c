#include<stdio.h>
/* calculate profit or loos.*/
main(){
	int cp,sp,amt;
	printf("Enter cost price:");
	scanf("%d",&cp);
	printf("Enter selling price:");
	scanf("%d",&sp);
	
	if(sp > cp)
	{
		amt=sp-cp;
		printf("profit=%d",amt);
	}
	else if(cp > sp)
	{
		amt=cp-sp;
		printf("loss=%d",amt);
	}
	else
	{
		printf("No profit NO loss.");
	}
}
