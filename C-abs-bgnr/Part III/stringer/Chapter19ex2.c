// Example program 19ex2

/* This program asks a user for their hometown and the two-letter
 * abbreviation of their home state. It then uses string concatenation
 * to build a new string with both town and state and prints it.
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char city[15];
	// 2 chars for the state abbrev. and one for the null zero
	char state[3];
	char fullLocation[18] = "";

	puts("What town do you live in? ");
	gets(city);

	puts("What state do you live in? ");
	gets(state);

	/* Concatenates the strings */
	strcat(fullLocation, city);
	strcat(fullLocation, ", ");
	strcat(fullLocation, state);

	puts("You live in ");
	puts(fullLocation);
	return (0);
}