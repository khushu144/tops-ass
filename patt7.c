#include<stdio.h>
main(){
	int i,j,n,num=1;
	printf("enter number of rows");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d",num);
			num++;
		}
		printf("\n");
	}
}

//
1
23
456
78910
