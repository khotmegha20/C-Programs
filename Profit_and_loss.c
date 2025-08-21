#include<stdio.h>
int main()
{
 int costprice ,sellingprice;
printf("\n enter the cost price:");
scanf("%d",&costprice);

printf("\n enter the selling price:");
scanf("%d",&sellingprice);
if (costprice<sellingprice)
{
   printf("profit..\n");
}
else if(costprice>sellingprice)
{
    printf("loss...\n");
}

    return 0;

}