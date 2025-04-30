#include<stdio.h>
main(){
	int i,j,s,k,n=5;
	for(i=1;i<=n;++i)
	{
		if(i==1||i==n)
		
			for(j=1;j<=n;++j)
		
		else{
			printf("*");
			for(s=1;s<=n-2;++s)
			{
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
}
