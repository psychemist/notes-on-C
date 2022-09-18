// Chapter 18 exercise 2 example program

/* This program is nothing more than a simple demonstration of the
	getchar() function */

#include <stdio.h>	// for the getchar() function
#include <string.h> // for the strlen() function

int main()
{
	int i;
	char msg[26];

	printf("Type up to 25 characters and then press Enter...\n");
	for (i = 0; i <= 26; i++)
	{
		msg[i] = getchar(); // Inputs a single character
		if (msg[i] == '\n')
		{
			i--;
			break;
		}
	}

	putchar('\n'); // One line break after the loop is done

	for (; i >= 0; i--)
	{
		putchar(msg[i]);
	}

	putchar('\n');

	return (0);
}