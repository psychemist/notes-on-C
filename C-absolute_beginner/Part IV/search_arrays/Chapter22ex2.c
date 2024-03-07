// Example program 22ex2

/* This program fills the three arrays with a player's total points,
 * rebounds, and assists. It loops through the scoring array and finds
 * the game with the mosot points. Once it knows that information, it
 * prints the totals from all three categories from that game. */

#include <stdio.h>

int main()
{
	int gameScores[10] = {12, 5, 21, 15, 32, 10, 6, 31, 11, 10};
	int gameRebounds[10] = {5, 7, 1, 5, 10, 3, 0, 7, 6, 4};
	int gameAssists[10] = {2, 9, 4, 3, 6, 1, 11, 6, 9, 10};
	int bestGame = 0; // comparison variable for best scoring game
	int gmMark = 0;	  // marks which game is the best scoring game
	int i;

	for (i = 0; i < 10; i++)
	{
		// if loop will compare each game to current best total
		// if the current score is higher, it becomes the new best and
		// the counter variable becomes the new flag gmMark

		if (gameScores[i] > bestGame)
		{
			bestGame = gameScores[i];
			gmMark = i;
		}
	}

	// Print out details of the best scoring game
	// Because arrays start at 0, add 1 to the game number

	printf("\nThe player's best scoring game totals:\n");
	printf("The best game was game #%d\n", gmMark + 1);
	printf("Scored %d points\n", gameScores[gmMark]);
	printf("Grabbed %d rebounds\n", gameRebounds[gmMark]);
	printf("Dished %d assists\n\n", gameAssists[gmMark]);

	return (0);
}