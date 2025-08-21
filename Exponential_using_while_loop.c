#include <stdio.h>
int main()
{

    int n, x, result = 1;
    printf("\n enter the value x:");
    scanf("%d", &x);
    printf("\n enter the value n:");
    scanf("%d", &n);

    int i = 1;
    while (i <= n)
    {
        result = result * x;
        i++;
    }

    printf("the %dth root of %d is:%d", x, n, result);

    return 0;
}
