#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int clear_trailing_whitespace(char s[]);
int get_line(char s[], int lim);

/* remove trailing blanks and tabs from input lines and delete blank lines */
int main()
{
    int len;
    char line[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0)
    {
        cleaned_line = clear_trailing_whitespace(char s[], len);
    }
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

int clear_trailing_whitespace(char s[])
{
    int i;
    
    for (i = 0; i < len; i++)
    {
    }
}
