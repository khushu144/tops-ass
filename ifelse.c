#include<stdio.h>
/*
if(condition){
//block;
else{
//block
}
*/
main(){
	int num;
	printf("\n enter num");
	scanf("%d",&num);
	if(num % 2==0){
		printf("\n %d is even",num);
		
	}
	else{
		printf("\n %d is odd",num);
	}
}
