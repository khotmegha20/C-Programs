#include <stdio.h>
int main()
{

    for (int blockrow = 1; blockrow <= 5; blockrow++)

    {
        for (int i = 1; i <= 5; i++)
        {

            for (int blockcolumn = 1; blockcolumn <= 5; blockcolumn++)
            {
                for (int j = 1; j <= 5; j++)
                {
                    printf("%d ",i);
                }
                printf("  ");
            }

            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
