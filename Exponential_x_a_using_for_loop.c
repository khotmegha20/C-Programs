#include <stdio.h>
int main()
{
    int x, n, result = 1;

    printf("enter the value of x:");
    scanf("%d", &x);

    printf("enter the value of n:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        result = result * x;
    }
    printf("the %d root of %d is:%d", n, x, result);

    return 0;
}