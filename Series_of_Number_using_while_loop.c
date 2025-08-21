#include <stdio.h>
int main()
{

    int limit;
    printf("\n enter the limit:");
    scanf("%d", &limit);
    int i = 1;
    while (i <= limit)
    {
        printf(" %d ",i);
        i++;
    }

    return 0;
}
