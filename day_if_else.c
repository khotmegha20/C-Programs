#include<stdio.h>
int main()
{
int day;
    printf("\n Enter the Day:");
    scanf("%d",&day);
    if(day==1)
    {
        printf("\nIt is monday");
    }
    else if (day==2)
    {
        printf("\nIt is tuesday");
    }
    else if (day==3)
    {
         printf("\nIt is wednesday");
    }
    else if (day==4)
    {
         printf("\nIt is thurday");
        
    }
    else if (day==5)
    {
       printf("\nIt is friday");
    }
    else if (day==6)
    {
       printf("\nIt is saturday");
    }
    else if (day==7)
    {
         printf("\nIt is sunday");
    }
    else 
    {
         printf("\ninvaild day");
    }
    

    return 0;
}