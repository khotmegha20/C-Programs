#include <stdio.h>
int main()
{
    int n, original, rem, sum = 0;
    printf("\n enter the number:=");
    scanf("%d", &n);
    original = n;
    n;

    while (n != 0)
    {
        rem = n % 10;
        sum += rem * rem * rem;
        n = n / 10;
    }

    if (sum == original)
    {
        printf("\n %d it is armstrong number....!", original);
    }
    else
    {
        printf("\n %d it is  not armstrong number....!", original);
    }
    return 0;
}