#include <stdio.h>
main() {
int i,j,rows=7,col=7;
	for (i=1;i<=rows;i++){
		for (j=1;j<=col;j++){
			if (i == 1 && j > rows/ 2){
				printf(" *");
			}
			else if(j == col / 2 + 1){
				printf(" *");
			}
				else if(i == rows && j < col / 2 + 1){
				printf(" *");
			}
			else if (i == rows / 2 + 1){
				printf(" *");
			}
				else if(j == 1 && i < rows / 2 + 1){
					printf(" *");
				}
				else if(j == col && i > rows / 2 + 1)
				printf(" *");
				else{
					printf("  ");
				}
}
			printf("\n");
}
}