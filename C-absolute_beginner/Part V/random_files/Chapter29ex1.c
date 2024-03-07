// Example program 29ex1

/* The program opens a file and prints A through Z into the file.
	It then loops backward through the file, printing each of the
	letters from Z to A.
*/

#include <stdio.h>
#include <stdlib.h>
FILE *fptr;

int main()
{
	char letter;
	int i;

	// "w+": write + read; "r": read + write; "a+": append, seek, r+w
	fptr = fopen("letters.txt", "w+");

	if (fptr == 0)
	{
		printf("There was an error while opening the file.\n");
		exit(1);
	}

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		fputc(letter, fptr);
	}

	puts("Just wrote the letters A through Z");

	// Now read the file backwards
	// origin:: SEEK_SET: instructs pointer to access file from beginning;
	// SEEK_CUR: from current position; SEEK_END: seek from end of file

	fseek(fptr, -1, SEEK_END); // minus 1 byte from end
	printf("Here is the file backwards:\n");
	for (i = 26; i > 0; i--)
	{
		letter = fgetc(fptr);
		// Reads a letter then backs up 2
		fseek(fptr, -2, SEEK_CUR);
		printf("The next letter is %c.\n", letter);
	}

	fclose(fptr); // Again, always close files

	return (0);
}