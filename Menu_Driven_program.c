#include<stdio.h>
int main()
{
int  option,n,length,width,num,costprice ,sellingprice;
float celsius,fahrenheit;
printf("\n----------Menu---------");
printf("\n 1:Enter the number(even,odd):");
printf("\n 2:Area of rectangle:");
printf("\n 3:Enter the number(-ve,+ve):");
printf("\n 4:Enter the cp aand sp:");
printf("\n 5:convert celsius to fahrenheit:");
printf("\n 6:convert fahrenheit to celsius :");
printf("\nEnter the option:=");
scanf("%d",&option);


 if (option==1)
{
    printf("Enter the n:=");
    scanf("%d",&n);
if (n%2==0)
{
  printf("Even\n");
}
else
{
      printf("Odd\n");
}
}
else  if (option==2)
{
    printf("enter the length and width:");
    scanf("%d%d",&length,&width);

    int area=length*width;
     printf("\n The Area of Rectangle is =%d",area);


}

else if (option==3)
{
   printf("\nEnter the number:=");
   scanf("%d",&num);

   if (num>0)
   {
    printf("The the number is postive\n");
   }
   else 
   {
 printf("The the number is negetive\n");  
 }
   
}

 else if (option==4)
{
printf("\n Enter the costprice and selling price:=");
scanf("%d%d",&costprice ,&sellingprice);
if (costprice<sellingprice)
{

   printf("profit..\n");
}
 else if (costprice>sellingprice)
{
    printf("loss...\n");
}
else
{
    printf("no profit no loss\n");
}
}
else if (option==5)
{
   printf("Enter the temp in celsius:");
   scanf("%f",&celsius);
   fahrenheit=(celsius*9/5)+32;
   printf("Temperture in fahrenheit:%.2f\n ",fahrenheit);
}
else if (option==6)
{
   printf("Enter the temp in fahrenheit:");
   scanf("%d",&fahrenheit);
   celsius=(fahrenheit-32)*5/9;
      printf("Temperture in celsius:%.2f\n ",celsius);

}

else 
{
   printf("Invaild option\n");
}

    return 0;
}