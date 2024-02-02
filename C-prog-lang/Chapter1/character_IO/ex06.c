#include <stdio.h>
/* Verify that getchar() != EOF is 0 or 1 */
int main()
{
    int ch;

    // Consume input one character at a time
    while ((ch = getchar()) != EOF) {
        // If character is not a new line, print and verify EOFness
        if (ch != 10) {
            putchar(ch);
            printf("\nNot EOF: %d\n", ch != EOF);
        }
    }
    // Print false value of EOF constant
    printf("\nEOF: %d\n", getchar() != EOF);

    return 0;
}
