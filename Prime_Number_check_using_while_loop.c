#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("enter the the number:");
    scanf("%d", &n);
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
        i++;
    }

    if (count == 0)
    {
        printf("\nthe number is prime");
    }
    else
    {

        printf("\nthe number is not prime number");
    }

    return 0;
}