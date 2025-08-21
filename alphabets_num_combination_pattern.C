#include <stdio.h>
int main() 
{

    for(int i = 1; i <= 5; i++) 
    {
        for(int j = 1; j <= i; j++) 
        {
            if(i % 2 != 0) 
            {
                printf("%c ", 'A' + (i / 2));
            } 
            else 
            {
                printf("%d ", i / 2);
            }
        }
        printf("\n");
    }

    return 0;
}