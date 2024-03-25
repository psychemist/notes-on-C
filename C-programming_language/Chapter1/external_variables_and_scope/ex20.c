#include <stdio.h>

#define TABSPACES 4  /* number of columns in a set of tab stops */
#define MAXLINE 1000 /* maximum input line size */

int get_line(char s[], int lim);
void detab(char s[], char str[]);

/* change tabs in input line to spaces */
int main()
{
    int len;
    char line[MAXLINE], spaced_line[MAXLINE];

    // check that line is not blank
    while ((len = get_line(line, MAXLINE)) > 0)
    {
        /* detab input line and print result*/
        detab(line, spaced_line);
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
void detab(char s[], char str[])
{
    /* declare and initialize line indices*/
    int i, j;
    i = j = 0;

    /* loop over input line*/
    while (s[i] != '\0')
    {
        /* if character in string index is a tab, detab*/
        if (s[i] == '\t')
        {
            /* insert number of spaces in tabspaces constant into line */
            for (int k = 0; k < TABSPACES; j++, k++)
            {
                str[j] = ' ';
            }
        }
        /* if character in string index is not a tab, copy*/
        else
        {
            str[j] = s[i];
            j++;
        }

        i++;
    }

    /* terminate string with null character*/
    str[j] = '\0';
}
