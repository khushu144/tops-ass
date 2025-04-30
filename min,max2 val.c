#include <stdio.h>
main()
{
    int x, y, z, result, max,min;

    printf("\nInput the first integer: "); 
    scanf("%d", &x);

    printf("\nInput the second integer: ");
    scanf("%d", &y);

    printf("\nInput the third integer: ");
    scanf("%d", &z);

    result=(x+y+abs(x-y))/2;
    max=(result+z+abs(result-z))/2;
    min=(result+z-abs(result-z))/2;

    printf("\nMaximum value of three integers: %d\n", max);
    printf("\nMinimum value of three integers: %d\n", min);
}
