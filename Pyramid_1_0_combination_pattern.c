#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
         int num = (i%2!=0)?1:0;
        for (int j = 1; j <= 9; j++)
        {
           
            if (j >= 6 - i && j <= 4 + i)
            {

                printf("%d ", num);
              
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