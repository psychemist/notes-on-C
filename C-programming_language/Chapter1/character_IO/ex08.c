#include <stdio.h>
/* Count blanks, tabs, and newlines in input */

int main()
{
    int ch, blank = 0, tab = 0, line = 0;

    while ((ch = getchar()) != EOF) {
        if (ch == ' ')
            ++blank;
        else if (ch == '\t')
            ++tab;
        else if (ch == '\n')
            ++line;
    }

    printf("TOTAL COUNT\nBlanks = %d\nTabs = %d\nNew Lines = %d\n",
        blank, tab, line);
}
