#include <stdio.h>
int main()
{
    char a = 'a', z = 'z';
    printf("alphabets from Ao Z:\n");
    for (char i = a; i <= z; i++)
    {
        printf("%c ", i);
    }

    return 0;
}