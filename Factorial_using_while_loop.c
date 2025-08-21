#include <stdio.h>
int main()
{
    int n, factorial = 1;
    printf("\n enter the number:");
    scanf("%d", &n);

    int i = n;
    while (i > 0)
    {
        factorial = factorial * i;

        i--;
    }

    printf("the factorial of %d is %d\n", n, factorial);

    return 0;
}