// Example program 28ex3

/* The program opens the existing bookinfo file from the first
	example and adds a line to the end */

#include <stdio.h>
#include <stdlib.h>

FILE *fptr;

int main()
{
	fptr = fopen("bookinfo.txt", "a"); // "a": opens file in append mode

	if (fptr == 0)
	{
		printf("Error opening the file! Sorry!\n");
		exit(1);
	}

	// Adds the line at the end
	fprintf(fptr, "\nMore books to come!\n");
	fputs("\nJust you wait!\n", fptr);
	fclose(fptr); // Always close your files

	return (0);
}