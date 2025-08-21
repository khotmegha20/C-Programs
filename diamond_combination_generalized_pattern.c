#include <stdio.h>
int main()
{
    int n;
    printf("\n enter the number:");
scanf("%d",&n);

if (n%2==0)
{
n++;
}
 int mid=(n+1)/2;
    int k=0;
    int d=1;
    char ch='A';
    for (int i = 1; i <= n; i++)

    {
        (i<=mid)?k++:k--;
        for (int j = 1; j <= n;j++)
        {
          if (j >= (mid+1)-k && j <= (mid-1) + k)
            {

                   if (k % 2 == 0)

                    printf("%d ", d);
                else

                    printf("%c ", ch);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        if (i % 2 == 0)

            d++;
        else
            ch++;
    }
return 0;
}