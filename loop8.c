#include<stdio.h>
main(){
	int num,rem,first_digit,last_digit;
	printf("\n enter the number:");
	scanf("%d",&num);
	last_digit=num%10;//extract the last digit
	
	first_digit=num;
	while(first_digit>=10){
		first_digit=first_digit/10;
		}
		int sum=first_digit+last_digit;
		printf("\n sum of first and last digits=%d\n",sum);
}

