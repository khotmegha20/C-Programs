#include<stdio.h>
int main()
{
char ch;
printf("\n enter the charater:");
scanf("%c",&ch);
if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
printf("charater is Vowel..\n");
}
else
{
    printf("charater is consonant..");
}


    return 0;

}