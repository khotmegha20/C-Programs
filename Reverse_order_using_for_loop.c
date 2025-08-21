#include <stdio.h>
int main()
{
    int n, reversed = 0, digit;
    printf("\n enter a number:");
    scanf("%d", &n);
    for (; n != 0; n = n / 10)
    {
        digit = n % 10;
        reversed = reversed * 10 + digit;
    }
    printf("\n reversed is %d ", reversed);

    return 0;
}