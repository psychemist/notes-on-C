//Example program file Chapter8ex2.c

/* This is a sample program that asks users for some basic data and
prints it on screen in order to show what was entered */

#include <stdio.h>

int main()
{
    char toppingStart[24];
    char toppingEnd[24];
    int slices;
    int month, day, year;
    float cost;

    /* The first scanf will look for a floating-point variable, the cost
    of a pizza.
    If the user does not enter a $ before the cost, it could cause
    problems */

    //Use print() to prompt before every scanf()!
    printf("How much does a pizza cost in your area?");
    printf("Enter as $XX.XX\n");
    scanf(" $%f", &cost);

    //The pizza topping is a string, or more accurately, an array-like object
    // so your scanf does not need an &
    printf("What is your favorite pizza topping?\n");
    printf("Describe topping in two words.\n");
    scanf(" %s %s", toppingStart, toppingEnd);

    printf("How many slices of %s %s pizza ", toppingStart, toppingEnd);
    printf("can you eat in one sitting?\n");
    scanf("%d", &slices);

    printf("What is today's date(Enter it in XX/XX/XX format).\n");
    scanf(" %d/%d/%d", &month, &day, &year);

    printf("\n\nWhy not treat yourself to dinner on %d/%d/%d",
           month, day, year);
    printf("\nand have %d slices of %s %s pizza!\n",
           slices, toppingStart, toppingEnd);
    printf("It will only cost you $%.2f!\n\n\n", cost);

    return 0;
}
