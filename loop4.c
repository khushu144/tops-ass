#include<stdio.h>
main(){
	int start,end,i;
	printf("\n enter start and end value");
	scanf("%d %d",&start,&end);
	printf("\n forward loop");
	for(i=start;i<=end;i++){
		printf("\n i=%d",i);
	}
	printf("\n reverse loop");
	for(i=end;i>=start;i--){
		printf("\n i=%d",i);
	}
}
