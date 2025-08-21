#include <stdio.h>
int main()
{
   
int n;
printf("Enter the number of row(only odd values):=");
scanf("%d",&n);
 
if (n%2==0)
{
n++;
}

    int mid=(n+1)/2;
int k=0;
    for (int i = 1; i <= n; i++)

    {
        (i<=mid)?k++:k--;
        for (int j = 1; j <= n;j++)
        {
            if (j >= (mid+1)-k && j <= (mid-1) + k)
            {

                printf("* ");
            }
            else
            {

                printf("  ");
            }
        }
        printf("\n");
    }
return 0;
}