#include <stdio.h>
int main()
{
    // char ch = 'A';
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j <= i)
            {
                printf("%c ", j+64);
            }
            else
            {
                printf("");
            }
        }
     
        printf("\n");
    }

    return 0;
}