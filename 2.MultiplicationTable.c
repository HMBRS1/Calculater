
#include<stdio.h>

int main()
{
    printf("Welcome to: \nHMBRS Company\n");
    printf("We hope that we can help you and we will.\n");
    int num, i, a;

    printf("\nEnter a number: ");
    scanf("%d", &num);


    for (i = 1; i <= 12; i++)     //you can replace i<= for any number you want 12, 13, 14, ...
    {
        a=num*i;     //definition of the variable 'a'


        printf("%d*%d=%d\n", num, i, a);


    }
    printf("\nThank you for your trust  \nBe happy :)\n");

    return 0;
}