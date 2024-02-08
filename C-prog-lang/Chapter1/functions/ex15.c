#include <stdio.h>
/* print Fahrenheit- Celsius table using a function */

#define LOWER 0
#define UPPER 300
#define  STEP 20

void print_temp_table(void);

int main()
{
    print_temp_table();
}

void print_temp_table(void)
{
	float fahr, celsius;

	fahr = LOWER;

	printf("Fahr Celsius\n");

	while (fahr <= UPPER)
	{
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %7.1f\n", fahr, celsius);
		fahr += STEP;
	}
}
