#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* print lengths and texts of longest input lines */
int main()
{
    int len; /* current line length */
    int max; /* maximum length seen so far */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line saved here */

    max = 0;

    while ((len = get_line(line, MAXLINE)) > 0) {
        /* check that full word is read into buffer else get full length */
        if (line[len - 1] != '\n') {
            int c;
            while ((c = getchar()) != EOF && c != '\n')
                len++;
            if (c == '\n')
                len++;
        }

        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) /* input line present */
        printf ("\nLONGEST LINE: %s\nNUMBER OF CHARACTERS: %i\n" , longest, max);
    return 0;
}

/* get_line: read a line into s, return length */
int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/*copy: copy 'from' into 'to'; assume to is big enough*/
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
