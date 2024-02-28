#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */
#define MAXCHAR 80 /* minimum printed line length */

int get_line(char line[], int maxline);
int array[MAXLINE][MAXCHAR];

/* print lengths and text of input lines longer than 80 characters */
int main()
{
    int len; /* current line length */
    int nums; /* number of lines above character limit */
    char line[MAXLINE]; /* current input line */
    char lines[];

    nums = 0;

    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len >= MAXCHAR) {
            ++nums;
            printf("%i - Length: %i\n\n", nums, len - 1);
        }
    }

    lines = malloc();

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
