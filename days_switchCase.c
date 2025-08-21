#include<stdio.h>
int main()
{
int day;
printf("\nEnter the day(1-7):");
scanf("%d",&day);
switch (day)
{
case 1:
   printf("\nDay:monday");
    break;
    case 2:
   printf("\nDay:tuesday");
    break;
    case 3:
   printf("\nDay:wednesday");
    break;
    case 4:
   printf("\nDay:thurday");
    break;
    case 5:
   printf("\nDay:friday");
    break;
    case 6:
   printf("\nDay:saturday");
    break;
    case 7:
   printf("\nDay:sunday");
    break;

default:
printf("\n invaild day");
    break;
}

    return 0;
}