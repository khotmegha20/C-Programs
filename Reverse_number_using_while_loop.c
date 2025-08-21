#include <stdio.h>
int main()
{
    int n, reversed = 0, digit;
    printf("\n enter a number:");
    scanf("%d", &n);
    n;//init
    while(n != 0) //end condition
    {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;//diff
    }
    printf("\n reversed is %d ", reversed);

    return 0;
}