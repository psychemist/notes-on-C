// Example program file 11ex2

/* This program asks the user for their birth year and
calculates how old they will be in the current year. It also
checks to make sure a future year has not been entered.
It then tells the user if they were born in a leap year, */

#include <stdio.h>
#define CURRENTYEAR 2022

int main()
{
    int yearBorn;
    int age;

    printf("What year were you born?\n");
    scanf(" %d", &yearBorn);

    // The if statement validates the logic of the date input
    // The statement will only execute if the year is after current yearBorn

    if (yearBorn > CURRENTYEAR)
    {
        printf("Really? You haven't been born yet?\n");
        printf("Congratulations on time travel!\n");
    }
    else
    {
        age = CURRENTYEAR - yearBorn;

        printf("\nSo this year you will turn %d on your birthday!\n", age);

    // This if statement uses the modulus operator to test
    // if the year of birth was a leap year. Only then will its code execute

        if ((yearBorn % 4) == 0)
        {
            printf("\nYou were born in a Leap Year... cool!\n");
        }

    }

    return (0);
}
