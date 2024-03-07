// Exmaple program 32ex2

/* This program demonstrates passing an array to a function */

#include <stdio.h>
#include <string.h>

void change(char *name);

int main()
{
	char name[15] = "Michael Hatton";
	change(name);
	printf("Back in main(), the name is now %s.\n", name);

	return (0); // Ends the program
}

/*********************************************************************/

void change(char name[15]) // Receives the address of name
{
	// Change the string stored at address pointed to by name
	strcpy(name, "XXXXXXXXXXXXXX");
	return; // Returns to main
}