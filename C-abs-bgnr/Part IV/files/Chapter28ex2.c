// Example program 28ex2

/* The program takes the book info file from the first example,
	reads each line from the file and outputs it to the screen */

#include <stdio.h>
#include <stdlib.h>
FILE *fptr;

int main()
{
	char fileLine[100]; // Will hold each line of input
	fptr = fopen("bookinfo.txt", "r");

	if (fptr != 0)
	{
		// feof() checks if program has reached the end-of-file to ensure
		// you do not read past the last line of the file
		while (!feof(fptr))
		{
			fgets(fileLine, 100, fptr);
			if (!feof(fptr))
			{
				puts(fileLine);
			}
		}
	}
	else
	{
		printf("\nError opening file\n");
	}
	fclose(fptr); // Always close files
	return (0);
}