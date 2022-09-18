// Example program #2 file

/* This program asks the user for a number of tires and price
 * per tire. It then calculates total price, adding sales tax
 */


#include <stdio.h>
// Use #define to set mutable sales tax rate in one place
#define SALESTAX .07

int main()
{
    // Variables for number of tires purchased, price, before-
    //tax total , and total cost with tax
    int numTires;
    float tirePrice, beforeTax, netSales;

    /* Get number of tires purchased and price per tire */
    printf("How many tires did you purchase?");
    scanf(" %d", &numTires);
    printf("What was the cost per tire? Enter in $XX.XX format.");
    scanf(" $%f", &tirePrice);

    /* Compute the price */
    beforeTax = tirePrice * numTires;
    netSales = beforeTax + (beforeTax * SALESTAX);

    printf("You spent $%.2f on your tires\n\n\n", netSales);

    return (0);
}
