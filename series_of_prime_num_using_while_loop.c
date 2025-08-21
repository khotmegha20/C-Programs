#include <stdio.h>
int main()
{

    int n, primenumber;
    printf("\n enter value of n:");
    scanf("%d", &n);

    printf("prime number from 1 to %d is:", n);

    int i = 2;
    while (i <= n)
    {
        primenumber = 1;//assume prime
        
        int j = 2;
        while (j <= i / 2)

        {
            if (i % j == 0)
            {
                primenumber = 0;//not prime
                break;
            }
            j++;
        }
        if (primenumber)
        {
            printf("  %d  ", i);
        }
        i++;
    }
    return 0;
}