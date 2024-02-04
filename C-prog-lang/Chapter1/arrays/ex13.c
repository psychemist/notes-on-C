#include <stdio.h>

#define IN  1
#define OUT 0
#define MAX 20

/* Print histogram of word lengths in input */

int main()
{
    int c, i, nc, nw, state;
    int words[MAX];
    
    nc = nw = 0;
    state = OUT;

    for (i = 0; i < MAX; i++)
        words[i] = 0;

    while ((c = getchar()) != EOF) {
        // coutn alphabetic characters only
        if (((int)c >= 65 && (int)c <= 90) || ((int)c >= 97 && (int)c <= 122))
            ++nc;
        // use word delimiters to store and reset character count
        if (c == ' ' || c == '\n' || c == '\t') {
            words[nw] = nc;
            nc = 0;
            state = OUT;
        }
        // count words after delimiters and reset state
        else if (state == OUT) {
            ++nw;
            state = IN;
        }
    }

    printf("\nWORD   COUNT    FREQ\n");
    // print histogram of word lengths
    for (i = 0; i < MAX; i++) {
        if (words[i] > 0) {
            printf(" %i   :  (%d)  :  ", i, words[i]);
            for (int x = 0; x < words[i]; x++)
                putchar('-');
            printf(">\n");
        }
    }
}
