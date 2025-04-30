#include<stdio.h>
main(){
	int row,col,space=5;
	for(row=1;row<=5;row++){
		for(col=1;col<=5;col++){
	     	printf("* ");
		}
		for(space=1;space<=3;space++)
		printf("  ");
		for(col=1;col<=5;col++){
			if(col==1 || col==5 || row==3 )
			printf("* ");
			else{ 
				printf("  ");
			}
		}
		for(space=1;space<=3;space++)
		printf("  ");
		for(col=1;col<=5;col++){
			if(col==1 || col==5 || row==5 )
			printf("* ");
			else{ 
				printf("  ");
			}
		}
		for(space=1;space<=3;space++)
		printf("  ");
		for(col=1;col<=5;col++){
			if(row==1 ||  (col==1 && row==3 && row==5 && col==3))
			printf("* ");
			else{ 
				printf("  ");
			}
		}
		for(space=1;space<=3;space++)
		printf("  ");
		for(col=1;col<=5;col++){
			if(col==1 || col==5 || row==3 )
			printf("* ");
			else{ 
				printf("  ");
			}
		}
		for(space=1;space<=3;space++)
		printf("  ");
		for(col=1;col<=5;col++){
			if(row==1 || row==5 || col==3)
			printf("* ");
			else{ 
				printf("  ");
			}
		}
		printf("\n");
	}
}
