#include <stdio.h>
int main()
{
    int limit;
    printf("Enter the limit:");
    scanf("%d", &limit);

    for (int i = limit; i >= 1; i--)
    {
        printf(" %d ", i);
    }

    return 0;
}