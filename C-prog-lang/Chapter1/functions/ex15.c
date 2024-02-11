#include <stdio.h>
/* print Fahrenheit-Celsius table using a function */

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

	printf("Fahr Celsius\n");

	for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
		printf("%3.0f %7.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
}
