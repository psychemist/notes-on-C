//Example program file Chapter8ex1.c

/* This is a sample program that asks users for some basic data and
prints it on screen in order to show what was entered*/

#include <stdio.h>

int main()
{
    //Set up the variables that scanf will fill
    char firstInitial;
    char lastInitial;
    char name[40];
    int age;
    int favorite_number;

    printf("What letter does your first name begin with?\n");
    scanf(" %c", &firstInitial);

    printf("What letter does your last name begin with?\n");
    scanf(" %c", &lastInitial);

    printf("How old are you?\n");
    scanf(" %d", &age);

    printf("What is your favorite number (integer only!)?\n");
    scanf(" %d", &favorite_number);

    printf("What is your first name?\n");
    scanf(" %s", name);

    printf("\nYour initials are %c.%c. and you are %d years old",
           firstInitial, lastInitial, age);
    printf("\nYour favorite number is %d.\n\n", favorite_number);
    printf("Your first name is: %s.\n", name);

    return 0;
}
