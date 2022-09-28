// Example program 30ex1

/* The program is a simple demonstration of the difference between
	global variables and local variables */

#include <stdio.h>

int g1 = 10;

int main()
{
	float l1;
	l1 = 90;

	printf("%d %.2f\n", g1, l1); // prints the 1st global and local variables
	prAgain();					 // calls our first function
	return 0;
}

float g2 = 19.0;

void prAgain()
{
	int l2 = 5;

	// cannot print l1; it is local to main
	printf("%d %.2f %d\n", l2, g2, g1);
	return;
}