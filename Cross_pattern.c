#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++) // rows
    {
        for (int j = 1; j <= 5; j++) // cols
        {
            if (i == j || i + j == 6 )
            {
                printf("* ");
            }
            else
            {
                printf("- ");
            }
            
        }
        printf("\n");
    }
    

    return 0;
}

