#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */
#define MAXCHAR 11 /* maximum arbitrary line length */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* print lengths and texts of longest input lines */
int main()
{
    int len; /* current line length */
    int max; /* maximum length seen so far */
    int nums; /* number of lines above character limit */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line saved here */

    max = nums = 0;

    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }

        if (len >= MAXCHAR) {
            ++nums;
            printf("%i - Length: %i\n\n", nums, len);
        }
    }

    if (max > 0) /* input line present */
        printf ("\nLONGEST LINE: %sNUMBER OF CHARACTERS: %i\n" , longest, max - 1);
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
