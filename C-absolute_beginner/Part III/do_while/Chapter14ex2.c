// Example program file Ch12 Ex2

/* This program multiplies two numbers and displays the result
for as long as the user wants. Answering 'N' breaks the loop */

#include <stdio.h>

int main(void)
{
    float num1, num2, result;
    char choice;

    do
    {
        printf("Enter your first number to multiply: ");
        scanf(" %f", &num1);

        printf("Enter your second number to multiply: ");
        scanf(" %f", &num2);

        result = num1 * num2;
        printf("%.2f times %.2f equals %.2f\n\n",
               num1, num2, result);
        printf("Do you want to enter another pair of numbers ");
        printf("to multiply (Y/N): ");
        scanf(" %c", &choice);

    } while (!(choice  = 'N' || choice == 'n'));

    return 0;
}
