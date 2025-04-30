#include<stdio.h>
/*Write a C program to read temperature and display message based on the following conditions*/
main()
{
    int tmp;
    printf("Input the temperature : ");
    scanf("%d",&tmp);
   if(tmp<0)
      printf("Freezing weather.\n");
   else if(tmp<10)
      printf("Very cold weather.\n");
   else if(tmp<20)
      printf("Cold weather.\n");
   else if(tmp<30)
      printf("Normal in temp.\n");
   else if(tmp<40)
      printf("Its Hot.\n");
   else
      printf("Its very hot.\n");
}
