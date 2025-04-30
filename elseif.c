#include<stdio.h>
/*
if(condition 1){
}
else if(condition 2){
}
else if(condition 3){
}
else{}
*/
main(){
	int x,y;
	printf("\n enter the value of x and y");
	scanf("%d %d",&x,&y);
	
	if(x > 0 && y >0){
		printf("\n first");
	}
	else if(x < 0 && y > 0){
		printf("\n sec");
	}
	else if(x < 0 && y < 0){
		printf("\n third");
	}
	else if(x > 0 && y < 0){
		printf("\n forth");
	}
	else{
		printf("\n center");
	}
	
}
