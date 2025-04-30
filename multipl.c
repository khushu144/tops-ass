#include<stdio.h>
main() {
    int choice;
    while (1) {
    	printf("\n \n ");
        printf("Menu:\n");
        printf("1. Calculator\n");
        printf("2. Area of Circle\n");
        printf("3. Simple Interest\n");
        printf("4. Fibonacci Sequence\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
		 double num1, num2;
            char op;
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter operator (+, -, *, /): ");
            scanf(" %c", &op);
            printf("Enter second number: ");
            scanf("%lf", &num2);
            if (op == '+') {
                printf("Result: %.2lf\n", num1 + num2);
            } else if (op == '-') {
                printf("Result: %.2lf\n", num1 - num2);
            } else if (op == '*') {
                printf("Result: %.2lf\n", num1 * num2);
            } else if (op == '/') {
                if (num2 != 0) {
                    printf("Result: %.2lf\n", num1 / num2);
                } else {
                    printf("Error: Division by zero.\n");
                }
            } else {
                printf("Invalid operator.\n");
            }
            break;
              case 2: {
             		double radius;
                    printf("Enter radius: ");
                    scanf("%lf", &radius);
                    printf("Area of Circle: %.2lf\n", 3.14 * radius * radius);
            break;
              case 3: {
             	double principal, rate, year;
                printf("Enter principal: ");
                scanf("%lf", &principal);
                printf("Enter rate: ");
                scanf("%lf", &rate);
                printf("Enter year: ");
                scanf("%lf", &year);
                printf("Simple Interest: %.2lf\n", (principal * rate * year) / 100);
				break;
			 }
			 case 4:{
			 	 int i,n, t1 = 0, t2 = 1, val1;
                 printf("Enter number of terms: ");
                 scanf("%d", &n);
                 printf("Fibonacci Series: %d, %d", t1, t2);
                 for (i = 3; i <= n; i++) {
                 val1 = t1 + t2;
                 printf(", %d", val1);
                 t1 = t2;
                 t2 = val1;
            }
            printf("\n");
				break;
			 }
			 case 5:{
			 	printf("Exiting program.\n");
				return 0;
			 }
}
}
}
}
}

