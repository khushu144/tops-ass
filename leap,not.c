#		include<stdio.h>
main(){

	int year;
	
	printf("\n enter a year:");
	scanf("%d",&year);
	
	// using ternary operator
	
	int isleap = (year % 4 == 0 && year % 100 != 0) || (year % 400 ==0);
	
	// use ternary operator to display result
	
	printf("%d is %s leap year \n",year,isleap ? "a" : "not a");
	
}
	
	

