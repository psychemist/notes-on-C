#include <stdio.h>

#define TABSPACES 4  /* number of columns in a set of tab stops */
#define MAXLINE 1000 /* maximum input line size */

int get_line(char s[], int lim);
char *detab(char s[]);

/* change tabs in input line to spaces */
int main()
{
    int len, lens;
    char line[MAXLINE];
    char spaced_line[MAXLINE];

    // check that line is not blank
    while ((len = get_line(line, MAXLINE)) > 0)
    {
        spaced_line = detab(line);
        printf("%s", spaced_line);
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

/* replace tabs in input with blanks to space to the next tab stop */
char *detab(char s[])
{
    char new_line[MAXLINE];
    int i = 0;

    while (s[i] != '\0')
    {
        new_line[i] = s[i];

        if (s[i] == '\t')
        {
            for (int j = 0; j < TABSPACES; j++)
            {
                new_line[i] = '\b';
            }
            i - TABSPACES;
        }

        i++;
    }
    new_line[i] = '\0';

    return new_line;
}
