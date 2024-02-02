#include <stdio.h>
/* Print the value of EOF */

main()
{
    int ch;

    // If character is EOF, print -1 else print character
    if ((ch = getchar()) == EOF) {
        printf("Value of EOF = %d\n", EOF);
    } else {
        putchar(ch);
        putchar('\n');
    }
}
