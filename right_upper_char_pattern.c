#include <stdio.h>
int main()
{
   
    for (int i = 5; i >=1; i--)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j>=5-i+1)
            {
                printf("%c ",j+64);
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