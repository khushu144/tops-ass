#include<stdio.h>
main(){
	int i,j,row=13,col=13;
	for(i=1;i<=row;i++){
		for(j=1;j<=col;j++){
			if((i==1 && j>=col/2+1 && j<=row) || (i==row && j>=1 && j<=col/2+1)){
				printf("* ");
			}
			else if(j==col/2+1 || i==row/2+1){
				printf("* ");
			}
			else if((j==1 && i>=1 && i<=row/2+1) || (j==row && i>=row/2+1 && i<=row)){
				printf("* ");
			}
			else{
				printf(" ");
			}
		}
			printf("\n");
	}
}
