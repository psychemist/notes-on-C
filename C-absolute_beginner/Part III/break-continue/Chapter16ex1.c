// Example program 16ex1

/* This program asks users to input test grades for the 25 students in a
	class and then computes an average test grade. If fewer than 25
	students took the test, the user can enter -1 as a grade and break
	the loop. Only the entered grade will be used to compute the average.
*/

#include <stdio.h>

int main()
{
	int numTest;
	float stTest, avg, total = 0.0;

	// Ask for up to 25 tests;

	for (numTest = 0; numTest < 25; numTest++)
	{
		// Get the test scores and check f -1 was entered

		printf("\nWhat is the next student's score? ");
		scanf(" %f", &stTest);
		if (stTest < 0.0)
		{
			break;
		}
		total += stTest;
	}

	avg = total / numTest;
	printf("\nThe average is %.1f%%.\n", avg); // Use % to escape % character

	return 0;
}