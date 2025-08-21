#include <stdio.h>
int main()
{
    for (int i = 5; i >=1; i--)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= 4 + i)
            {

                printf("%d ",i);
            }
            else
            {

                printf("  ");
            }
        }
        printf("\n");
    }

    for (int i = 1; i<=5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= 4 + i)
            {

                printf("%d ",i);
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
