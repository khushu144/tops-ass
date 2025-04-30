#include<stdio.h>
int main(){
	int num,temp,reversed=0,firstDigit,lastDigit,sum;
	printf("enter a number:");
	scanf("%d",&num);
	
	temp=num;
	//reverse the number
	while(temp>0){
		reversed=reversed*10+(temp%10);
		temp /=10;
	}
	//get first digit(last digit of reversed)
	firstDigit=reversed%10;
	//get last digit(first digit of reversed)
	temp=reversed;
	while(temp>=10){
		temp /=10;
	}
	lastDigit=temp;
	//sum of first and last digits sum=firstDigit+lastDigit;
	
	printf("Reversed Number:%d\n",reversed);
	printf("First digit:%d\n",firstDigit);
	printf("last digit:%d\n",lastDigit);
	printf("sum of first and last digits:%d\n",sum);
	return 0;
	
}
