// Example Chapter 12 Program #2 file

/* This program asks for a last name, and if the user has a
    last name that starts with a letter between P and Q, they
    will be sent to a special room for tickets. */

#include <stdio.h>

int main(void)
{
    // set up an array for the last name and then get it from user

    char name[25];
    printf("what is your last name?\n");
    printf("Please capitalize the first letter\n");
    scanf(" %s", name);

    if ((name[0] >= 'P') && (name[0] <= 'S'))
    {
        printf("You must go to room 2432 ");
        printf("for your tickets.\n");
    }
    else
    {
        printf("You can get your tickets here.\n");
    }

    return (0);
}
