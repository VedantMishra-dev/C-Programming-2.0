#include <stdio.h>
void calculator(int a, int b)
{
    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);
    if (b != 0)
    {
        printf("Quotient: %f\n", (float)a / b);
    }
    else
    {
        printf("Division by zero error.\n");
    }
}

int main()
{
    while (1)
    {
        int a;
        printf("Enter first Number : ");
        scanf("%d", &a);
        printf("You entered: %d\n", a);
        int b;
        printf("Enter second Number : ");
        scanf("%d", &b);
        printf("You entered: %d\n", b);
        printf("If the both number you entered correct press 1 else press 0");
        int choice;
        scanf("%d", &choice);
        if (choice == 1)
        {
            calculator(a, b);
        }
        else
        {
            printf("Please enter the numbers again.\n");
        }
    }
   
}