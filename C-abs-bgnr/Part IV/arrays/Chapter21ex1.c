// Example program 21ex1

/* This program creates an array of 10 game scores for a basketball player.
 * The scores from the first six games are in the program and the scores
 * from the last four are inputted by the user.
 */

#include <stdio.h>

int main()
{
	int gameScores[10] = {12, 5, 21, 15, 32, 10};
	int totalPoints = 0;
	int i;
	float avg;

	// Only need scores for last 4 games so the loop will cover
	// array elements 6-9
	for (i = 6; i < 10; i++)
	{
		// Add one to the array number as the user won't think
		// of the first game as game 0, but game 1
		printf("What did the player score in game %d? ", i + 1);
		scanf(" %d", &gameScores[i]);
	}

	// Now that you have all 10 scores, loop through the scores
	// to get total points in order to calculate an average
	for (i = 0; i < 10; i++)
	{
		totalPoints += gameScores[i];
	}

	// Use a floating point variable for the average as it is
	// likely to be between two integers

	avg = ((float)totalPoints / 10);

	printf("\n\nThe player's scoring avergae is %.1f.\n", avg);

	return (0);
}