#include <stdio.h>
/* Print input one word per line */

int main()
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            putchar('\n');
        }
        else {
            putchar(c);
        }
    }
}
