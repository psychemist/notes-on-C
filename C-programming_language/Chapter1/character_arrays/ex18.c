#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

void clear_trailing_whitespace(char *s, int len);
int get_line(char s[], int lim);

/* remove trailing blanks and tabs from input lines and delete blank lines */
int main()
{
	int len;
	char line[MAXLINE];

	while ((len = get_line(line, MAXLINE)) > 0)
	{
		clear_trailing_whitespace(line, len);
		printf("%s\n", line);
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

/* remove trailing blanks and tabs from strings and discard empty strings */
void clear_trailing_whitespace(char *s, int len)
{
	int i;

	// loop over line starting from character before null terminator
	for (i = len - 1; i > 0; i--)
	{
		// check if next character is a null pointer (at last valid index)
		if (s[i + 1] == '\0')
		{
			// if character is a tab or blank, change it to a null character
			if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			{
				s[i] = '\0';
			}
		}
	}

	// check if first and last character in line is a tab or blank and delete
	if (i == 0 && (s[i] == '\t' || s[i] == ' ') && s[i + 1] == '\0')
		s[i] = '\0';
}
