#include <stdio.h>

int get_line(char s[], int lim);

int main()
{
    int;
}

/* get_line: read a line into s, return length */
int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* Write a program to remove trailing blanks and tabs from
   each line of input, and to delete entirely blank lines.*/
