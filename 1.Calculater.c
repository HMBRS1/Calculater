#include <stdio.h>

int main()
{
    char operator;
    double x, y;
    printf("Welcome to: \nHMBRS Company\n");
    printf("We hope that we can help you and we will.\n");

    printf("\nChose ONE(+ , - , / , *): ");
    scanf("%c", &operator);
    
    
    
    printf("Enter two numbers: ");
    scanf("%lf %lf", &x, &y);

    switch (operator){

    case ('+'):
        printf("\n%.2lf+%.2lf=%.2lf\n", x, y, x+y);
        break;

    case ('-'):
        printf("\n%.2lf-%.2lf=%.2lf\n", x, y, x-y);
        break;

    case ('*'):
        printf("\n%.2lf*%.2lf=%.2lf\n", x, y, x*y);
        break;

    case ('/'):
        if(y != 0){
            printf("\n%.2lf/%.2lf=%.2lf\n", x, y, x/y);
        }
        else{
            printf("don't type 0 in second number\n");
        }
        break;

    default:
        printf("error: Invalid operator\n");
        break;

    }
    printf("\nThank you for your trust  \nBe happy :)\n");
    return 0;
}
