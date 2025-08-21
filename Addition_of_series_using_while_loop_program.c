#include <stdio.h>
int main()
{
    int limit, sum = 0;
    printf("enter the limit:");
    scanf("%d", &limit);
    int i = 1;
    while (i <= limit)
    {

        sum = sum + i;
        i++;
    }
    printf("the sum of number %d is: %d\n", limit, sum);
    return 0;
}