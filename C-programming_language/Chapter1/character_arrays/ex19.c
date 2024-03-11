#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int get_line(char line[], int maxline);
int reverse(char s[]);

/* reverses character input a line at a time */
int main()
{
    int len, lens;
    char line[MAXLINE];

    // check that line is not blank
    while ((len = get_line(line, MAXLINE)) > 0)
    {
        lens = reverse(line);
        // verify that length of original line equals length of reversed line
        if (len == lens)
            printf("%s\n", line);
    }

    return 0;
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

/**
 * rev_string -  reverse input string
 *
 * @s: variable holding the pointer
 * Return: void
 */
int reverse(char s[])
{
    int len, i, mid;
    char temp;

    for (len = 0; s[len] != '\0'; len++)
        ;

    i = 0;
    mid = len / 2;

    // loop over line and exchange characters between indices
    while (mid--)
    {
        temp = s[len - 1 - i];
        s[len - i - 1] = s[i];
        s[i] = temp;
        i++;
    }

    return len;
}
