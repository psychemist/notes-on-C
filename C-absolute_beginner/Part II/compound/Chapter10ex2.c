// Example program file

/* This program increases a counter from 1 to 5, printing
   updates and then counts it back down to 1. However, it
   uses compound operators */

#include <stdio.h>

int main()
{
    int ctr = 0;

    ctr = ctr + 1; // increases counter to 1
    printf("Counter is at %d.\n", ctr);
    ctr += 1; // increases counter to 2
    printf("Counter is at %d.\n", ctr);

    // increases counter to 3 and prints
    printf("Counter is at %d.\n", ctr += 1);
    ctr++; // increases counter to 4
    printf("Counter is at %d.\n", ctr);

    printf("Counter is at %d.\n", ++ctr);
    ctr = ctr - 1; // decreases counter to 4
    printf("Counter is at %d.\n", ctr);
    printf("Counter is at %d.\n", ctr -= 1); // decreases counter to 3
    printf("Counter is at %d.\n", --ctr); // decreases counter to 2
    printf("Counter is at %d.\n", --ctr); // decreases counter to 1

    return (0);
}
