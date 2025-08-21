#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9;j++)
        {
            if (j >= 6-i && j <= 4 + i)
            {

                printf("%c ",64+i);
            }
            else
            {

                printf("  ");
            }
        }
        printf("\n");
    }

// lower part

    for (int i = 4; i>=1; i--)
    {
        for (int j = 1; j <= 9;j++)
        {
            if (j >= 6-i && j <= 4 + i)
            {

                printf("%c ",64+i);
            }
            else
            {

                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}