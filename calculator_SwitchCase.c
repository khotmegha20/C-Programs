#include<stdio.h>
int main()
{
int a,b,choice;
printf("\n--------------menu-----------------");
printf("\n1:Addition");
printf("\n2:substraction");
printf("\n3:multiplication");
printf("\n4:division");
printf("\n enter the choice:");
scanf("%d",&choice);

switch (choice)
{
case 1:
   printf("\n enter the two number:");
   scanf("%d%d",&a,&b);
   printf("\n the addition is:%d",a+b);
    break;
    case 2: 
    printf("\n enter the two number:");
   scanf("%d%d",&a,&b);
   printf("\n the substraction is:%d",a-b);
    break;
case 3:
 printf("\n enter the two number:");
   scanf("%d%d",&a,&b);
   printf("\n the multiplication is:%d",a*b);
    break;
    case 4:
     printf("\n enter the two number:");
   scanf("%d%d",&a,&b);
   printf("\n the division is:%d",a/b);
    break;
default:
printf("\n invaild choice");
    break;
}


    return 0;
}