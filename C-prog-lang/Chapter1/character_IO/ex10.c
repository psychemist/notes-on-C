#include <stdio.h>
/* Replace whitespace characters with their character constants */

int main()
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\t');
        }
        else if (c == '\b') {
            putchar('\b');
        }
        else if (c == '\\') {
            putchar('\\');
        }
        else {
            putchar(c);
        }
    }
}
