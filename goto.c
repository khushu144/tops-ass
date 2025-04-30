#include<stdio.h>
main(){
	int i=1;
	lable:{
	   printf("\n i=%d",i);
	   i++;
	}
	if(i<=10){
		goto lable;
	}
}
