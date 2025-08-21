#include <stdio.h>
int main()
{
    int n;
    printf("\n enter the row number(only for odd value):");
    scanf("%d",&n);
    if (n%2==0)
    {
    n++;
    }
   int mid=(n+1)/2;
    
    for (int i = 1; i <= mid; i++)
    {
        for (int j = 1; j <= n;j++)
        {
             if (j >= mid - i + 1 && j <= mid + i - 1)

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