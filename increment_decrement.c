#include <stdio.h>
int main()
{
    int a = 10, x;
    // pre inc
    x = ++a;
    printf("\n x = ++a : =  x = %d , a = %d ", x, a);
    // post inc
    a = 10;
    x = a++;
    printf("\n x = a++ : =  x = %d , a = %d ", x, a);

    // pre dec
    x = --a;
    printf("\n x = --a : =  x = %d , a = %d ", x, a);
    // post dec
    x = a--;
    printf("\n x = a-- : =  x = %d , a = %d ", x, a);

    return 0;
}