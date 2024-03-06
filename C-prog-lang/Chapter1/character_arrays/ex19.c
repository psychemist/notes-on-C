#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int get_line(char line[], int maxline);
void reverse_line(char s[]);

/* reverses character input a line at a time */
int main()
{
    int len;            /* current line length */
    int nums;           /* number of lines above character limit */
    char line[MAXLINE]; /* current input line */

    nums = 0;

    while ((len = get_line(line, MAXLINE)) > 0)
    {
        reverse_line(line);
        printf("%s\n", line);
    }

    return 0;
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

/**
 * rev_string -  reverse input string
 *
 * @s: variable holding the pointer
 * Return: void
 */
void reverse_line(char s[])
{
    int len, i, mid;
    char temp;

    for (len = 0; s[len] != '\0'; len++)
        ;

    i = 0;
    mid = len / 2;

    while (mid--)
    {
        temp = s[len - 1 - i];
        s[len - i - 1] = s[i];
        s[i] = temp;
        i++;
    }
}
