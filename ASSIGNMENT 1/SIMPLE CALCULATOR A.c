#include <stdio.h>
#include <stdlib.h>



int main()
{
    int num1, num2;

    printf("===== SIMPLE CALCULATOR =====\n");

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nAddition = %d\n", num1 + num2);
    printf("Subtraction = %d\n", num1 - num2);
    printf("Multiplication = %d\n", num1 * num2);

    if (num2 != 0)
    {
        printf("Division = %d\n", num1 / num2);
        printf("Modulus = %d\n", num1 % num2);
    }
    else
    {
        printf("Division = Cannot divide by zero\n");
        printf("Modulus = Cannot divide by zero\n");
    }

    return 0;
}
