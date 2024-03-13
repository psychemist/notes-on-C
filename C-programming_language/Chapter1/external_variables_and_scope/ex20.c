#include <stdio.h>

#define TABSPACES 4


int main ()
{
}

/* get_line: read a line into s, return length */
int get_line(char s[], int lim)
{
    int c, i;

    // loop over line input and store characters in buffer string
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    // add null terminator after new line character
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}


int detab ()
{
}
