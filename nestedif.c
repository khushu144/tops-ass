#include<stdio.h>
/*
if(condition){
}
else{
//block
}
*/
main(){
	int maths,phy,chem;
	int total,subtotal;
	
	printf("\n enter the marks of maths phy chem");
	scanf("%d %d %d",&maths,&phy,&chem);
	
	if(maths >= 65 && phy >=55 && chem >=50){
		
		total = maths+phy+chem;
		subtotal = maths+phy;
		if(total >=190 || subtotal >=140){
			printf("\n Eligible for addmision");
		}
		else{
			printf("\n not eligible: total marks more then 190");
		}
	}
	else{
		printf("\n not eligible");
	}
}

