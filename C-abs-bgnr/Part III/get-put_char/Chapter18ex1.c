// Chapter 18 example program

/* This program is nothing more than a simple demonstration of the
	putchar() function. */

#include <stdio.h>	// for the putchar() function
#include <string.h> // for the strlen() function

int main()
{
	int i;
	char msg[] = "C is fun";

	for (i = 0; i < strlen(msg); i++)
	{
		putchar(msg[i]); // Outputs a single character
	}
	putchar('\n'); // One line break after the loop is done

	return (0);
}