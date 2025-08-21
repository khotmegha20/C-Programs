#include <stdio.h>
int main()
{
    int limit, evensum = 0, oddsum = 0;
    printf("Enter the limit:");
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
    {
        if (i % 2 == 0)
        {
            evensum = evensum + i;
        }
        else
        {

            oddsum = oddsum + i;
        }
    }
    printf("\nthe sum of even number : %d ",  evensum);
    printf("\nthe sum of odd number : %d ",  oddsum);

    return 0;
}