// File Chapter15ex1.c

/* This program asks users how many movies they have seen this year, and then
 * loop through, asking the name of each movie and a rating from 1 to 10.
 * It will remember their favorite and least favorite movies.
 */
#include <stdio.h>
#include <string.h>

int main()
{
	int ctr, numMovies, rating, favRating, leastRating;
	char movieName[40], favorite[40], least[40];

	// Initialize the favRating to 0 so any movie with a rating of 1 or
	// higher will replace it; and the leastRating to 10 so movies rated
	// 9 or lower replaces it

	favRating = 0;
	leastRating = 0;

	// Find out how many movies the user has seen and can rate
	// The loop will continue until they enter a number > 0

	do
	{
		printf("How many movies have you seen this year?");
		scanf(" %d", &numMovies);

		// If the user enters 0 or a negative number, the program will
		// remind them to enter a positive number and prompt them again

		if (numMovies < 1)
		{
			printf("No movie?! How can you rank them?\nTry again!\n\n");
		}
	} while (numMovies < 1);

	for (ctr = 1; ctr <= numMovies; ctr++)
	{
		// Get the name of the movie and the user's rating

		printf("\nWhat was the name of movie %d? ", ctr);
		printf("(1-word titles only!)");
		scanf(" %s", movieName);
		printf("On a scale of 1 to 10, what would ");
		printf("you rate it? ");
		scanf(" %d", &rating);

		// Check whether it is their best rated movie so far
		if (rating > favRating)
		{
			strcpy(favorite, movieName);
			favRating = rating;
		}

		if (rating < favRating)
		{
			strcpy(least, movieName);
			leastRating = rating;
		}
	}

	printf("\nYur Favorite Movie was %s.\n", favorite);
	printf("Your Least favorite Movie was %s.\n", least);

	return 0;
}