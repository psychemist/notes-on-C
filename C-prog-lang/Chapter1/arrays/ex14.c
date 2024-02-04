#include <stdio.h>
/* Print histogram of frequencies of charcaters in input */

int main()
{
    int ch, i, val;
    int characters[128];

    for (i = 0; i < 128; i++)
        characters[i] = 0;

    while ((ch = getchar()) != EOF)
        characters[(int)ch]++;

    for (i = 0; i < 128; i++) {
        // loop over characters array excluding first 32 control characters
        val = characters[i];
        if (i >= 32 && val != 0) {
            printf("%c : (%d) :: ", i, val);

            // print histogram of character frequencies
            for (int x = 0; x < val; x++)
                putchar('-');
            printf(">\n");
        }
    }
}
