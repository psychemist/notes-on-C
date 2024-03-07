// Example program 30ex1

/* The program demonstrates passing a variable to a function by value */
#include <stdio.h>

void half(int i);

int main()
{
	int i;

	printf("Please enter an integer... ");
	scanf(" %d", &i);

	// Now call the half cuntion, passing the value of i
	half(i);

	// Shows that the function did not alter i's value
	printf("In main(), i is still %d.\n", i);

	return (0); // Ends the program
}

/*********************************************************************/
// Sometimes putting dividers like this is a nice break between functions
/*********************************************************************/

void half(int i) // Receives the value of i
{
	i /= 2;
	printf("Your value halved is %d.\n", i);
	return; // Returns to main
}