#include <conio.h>
#include <stdio.h>

int main()
{
	int firstInit, lastInit;

	printf("What are your two initials?\n");

	firstInit = getch(); // Inputs first inital
	putch(firstInit);	 // Outputs first inital
	lastInit = getch();	 // Inputs last initial
	putch(lastInit);	 // Outputs last initial
}