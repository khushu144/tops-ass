#include<stdio.h>
int main(){
	float celsius,fahrenheit;
	printf("what is temperature in celsius");
	scanf("%f",&celsius);
	fahrenheit=(celsius*9/5)+32;
	printf("temperature in far %f \n",fahrenheit);
}
