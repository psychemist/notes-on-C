/* Totals how much money will be spent on holiday gifts */
#include <stdio.h>

int main()
{
    //Variables to hold costs
    float gift1, gift2, gift3, gift4, gift5;
    float total; //Variable to hold total amount

    /* Asks for each gift amount */
    printf("How much do you want to spend on your mum? ");
    scanf(" %f", &gift1);
    printf("How much do you want to spend on your dad? ");
    scanf(" %f", &gift2);
    printf("How much do you want to spend on your sister? ");
    scanf(" %f", &gift3);
    printf("How much do you want to spend on your brother? ");
    scanf(" %f", &gift4);
    printf("How much do you want to spend on your fave ");
    printf("C programming teacher? ");
    scanf(" %f", &gift5);

    /* Computes total amount spent on gifts*/
    total = gift1+gift2+gift3+gift4+gift5;
    printf("\nThe total you will be spending on gifts is $%.2f", total);
    return 0; //Ends the program
}
