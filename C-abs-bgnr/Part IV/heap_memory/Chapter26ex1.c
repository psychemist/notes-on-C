// Example program 26ex1

/* The program looks for a number of random integers, allocates an array
 * and fills it with numbers between 1 and 500, then loops through all the
 * numbers and figures out the smallest, the biggest and the average.
 * Then it frees the memory.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i, aSize;
	int *randomNums; // integer pointer

	time_t t; // rand() seed

	double total = 0;
	int biggest, smallest, range;
	float average;

	srand(time(&t));

	printf("How many random numbers do you want in your array? ");
	scanf(" %d", &aSize);

	// Allocate an array of integers equal to the number of elements

	/* (int *) typecasts malloc from default char pointer to int pointer
		(aSize * sizeof(int)) specifies amount of memory to be allocated */
	randomNums = (int *)malloc(aSize * sizeof(int));

	// Test to ensure that array allocated properly
	if (!randomNums)
	{
		printf("Random array allocation failed!\n");
		exit(1);
	}

	// Loops through array & assigns element a random number between 1-100
	for (i = 0; i < aSize; i++)
	{
		randomNums[i] = (rand() % 500) + 1;
	}

	// Initialize the biggest and smallest numbers for comparison sake
	biggest = 0;
	smallest = 500;

	// Loop through the now-filled array testing for the random numbers
	// that are biggest, smallest and then calculate the average and range
	for (i = 0; i < aSize; i++)
	{
		total += randomNums[i];
		if (randomNums[i] > biggest)
		{
			biggest = randomNums[i];
		}
		if (randomNums[i] < smallest)
		{
			smallest = randomNums[i];
		}
	}

	average = ((float)total) / ((float)aSize);
	range = biggest - smallest;

	printf("The biggest random number is %d.\n", biggest);
	printf("The smallest random number is %d.\n", smallest);
	printf("The average of the random numbers is %.2f.\n", average);
	printf("The range of random numbers is %d.\n", range);

	// When you use malloc, remember to then use free
	free(randomNums);

	return (0);
}