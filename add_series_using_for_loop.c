#include <stdio.h>
int main()
{
    int limit, sum = 0;
    printf("enter the limit:");
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
    {
        sum = sum + i;
    }
    printf("the sum of number from 1 to %d is: %d\n", limit, sum);
    return 0;
}