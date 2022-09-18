#include <stdio.h>
int main(void)
{
    int numPear;

    printf("How many pears did you eat?\n");
    scanf(" %d", &numPear);
    printf("You ate %d pear%s\n", numPear, (numPear > 1) ? ("s.") : ("."));

    float total = 4000.00;

    printf("What is the total amount?\n");
    total *= (total <= 3850) ? (1.10) : (1.05);
    printf("Your total is %.2f\n", total);
}
