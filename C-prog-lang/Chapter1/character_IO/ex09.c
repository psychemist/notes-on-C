#include <stdio.h>
/* Replcace multiple blanks with single blank in input string */

int main()
{
    char c, d = '0';

    while ((c = getchar()) != EOF) {
        if (c == ' ' && d == ' ') {
            ;
        }
        else {
            putchar(c);
            d = c;
        }
    }
}
