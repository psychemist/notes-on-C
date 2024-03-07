#include <stdio.h>
/* Print histogram of frequencies of charcaters in input */

int main()
{
    int ch, i;
    int chars[128];

    for (i = 0; i < 128; i++)
        chars[i] = 0;

    while ((ch = getchar()) != EOF)
        chars[(int)ch]++;

    printf("\nCHAR   COUNT    FREQ\n");
    // loop over characters array excluding first 32 control characters
    for (i = 32; i < 128; i++) {
        if (chars[i] != 0) {
            // print histogram of character frequencies
            printf(" %c   :  (%d)  :  ", i, chars[i]);
            for (int x = 0; x < chars[i]; x++)
                putchar('-');
            printf(">\n");
        }
    }
}
