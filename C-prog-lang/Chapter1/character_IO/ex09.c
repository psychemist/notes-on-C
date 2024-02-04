#include <stdio.h>
/* Replcace multiple blanks with single blank in input string */

int main()
{
    int ch, prev = 0;

    while ((ch = getchar()) != EOF) {
        if (ch == ' ' && prev == ' ') {
            ;
        }
        else {
            putchar(ch);
            prev = ch;
        }
    }
}
