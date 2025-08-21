#include <stdio.h>

int main()
{
    int d = 1;
    char ch = 'A';

    for (int i = 5; i >= 1; i--)
    {

        for (int space = 1; space <= 5 - i; space++)
        {
            printf("  ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (i % 2 == 0)
                printf("%d ", d);
            else
                printf("%c ", ch);
        }

        printf("\n");

        if (i % 2 == 0)
            d++;
        else
            ch++;
    }

    for (int i = 1; i <= 5; i++)
    {

        for (int space = 1; space <= 5 - i; space++)
        {
            printf("  ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (i % 2 == 0)
                printf("%d ", d);
            else
                printf("%c ", ch);
        }

        printf("\n");

        if (i % 2 == 0)
            d++;
        else
            ch++;
    }

    return 0;
}