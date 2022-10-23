#include <stdio.h>

/* print Fahrenheit- Celsius table
 * for fahr = 0, 20, ... , 300; */
int main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 160;
	step = 20;

	celsius = lower;

	while (celsius <= upper)
	{
		fahr = (9.0 / 5.0) * (celsius) + 32.0;
		printf("%3.0f %6.0f\n", celsius, fahr);
		celsius += step;
	}
}