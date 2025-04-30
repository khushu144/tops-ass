#include<stdio.h>
main(){
	int i,num,flag=0;
	printf("\n enter the number");
	scanf("%d",&num);
	for(i=2;i<num/2;i++){
		if(num%i==0){
			flag=1;
		}
	}
	(flag==0)?printf("%d is prime",num):printf("%d is not prime",num);
}
