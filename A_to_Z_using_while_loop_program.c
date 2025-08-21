#include <stdio.h>
int main()
{
    char ch;
    printf("alphabets from Ato Z:");

    char i = 'a';
    while (i <= 'z')
    {
        printf(" %c ", i);
        i++;
    }
    
    return 0;
}