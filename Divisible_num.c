#include<stdio.h>
int main()
{

int n;
printf("\n enter the number:");
scanf("%d",&n);
if (n%3==0&&n%5==0)
{
    printf("C language....\n");
}
else if(n%3==0)
{
    printf("C...\n");

}
else if (n%5==0)
{
    printf("Language...\n");
}

    return 0;
}