#include <stdio.h>
int main()
{
    int n, count=0;
    printf("enter the the number:");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
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