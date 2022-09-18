#include <stdio.h>
int main(void)
{
    char ans;

    printf("Is your printer on (Y/N)?\n");
    scanf(" %c", &ans);
    if ((ans == 'Y') || (ans == 'N'))
    {
        if (ans == 'N')
        {
            printf("*** Turn the printer on now. ***\n");
        }
        else if (ans == 'Y')
        {
            printf("Well, you'd better call Rick Sanchez!");
        }
    }
    else
    {
        printf("You did not enter a Y or N.\n");
    }
}
