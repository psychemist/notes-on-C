#include <stdio.h>

int reverse_line(char s[]);

/* reverses character input a line at a time */
int main()
{
    int;
}

/**
 * rev_string -  reverse input string
 *
 * @s: variable holding the pointer
 * Return: void
 */
void reverse_string(char s[])
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
