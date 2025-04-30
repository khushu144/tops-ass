#include<stdio.h>
//creating function to get sum of digits of given number.
int digitsum(int n){
	int sum;
	//this is single line that calculate sum of digit
	for(sum=0; n>0; sum+=n%10, n/=10);
	return sum;
}
main(){
	int n;
	printf("Entered number is: %d\n",n);
	scanf("%d",&n);
	printf("sum of digits: %d",digitsum(n));
}
