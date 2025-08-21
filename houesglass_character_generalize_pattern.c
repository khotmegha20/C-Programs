#include <stdio.h>
int main()
{ 
    int n;
        int k=0;
    printf("\n enter the number:");
    scanf("%d",&n);
    
if (n%2==0)
{
    n++;
}

    for (int i = 1; i <= n; i++)

    {
        (i<=(n+1)/2)?k++:k--;
        for (int j = 1; j <= n;j++)
        {
            if (j >=k && j <= (n+1)-k)
            {

                printf("%c ",64+k);
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