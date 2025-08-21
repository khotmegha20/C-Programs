#include<stdio.h>
int main()
{
    int n,factorial=1;
printf("\n enter the number=");
scanf("%d",&n);


for (int i = n; i > 0; i--)
{
 factorial= factorial*i;
}


printf("The factorial of %d is %d\n",n,factorial);

    return 0;
    
}