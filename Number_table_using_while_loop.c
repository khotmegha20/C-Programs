#include <stdio.h>
int main()
{
    int num;
    printf("\n enter the num:");
    scanf("%d", &num);

    int i = 1;
    while (i <= 10)
    {
        printf("\n %d * %d= %d", num,i, num * i);
        i++;
    }
    return 0;
}
