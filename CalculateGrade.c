#include<stdio.h>
int main()
{
 int marks;
 printf("\n enter the marks:");
scanf("%d",&marks);

  if(marks<0||marks>100)
 {
     printf(" invaild marks\n");
    return 0;
}
if(marks>=90)
{
printf("Grade: A\n");
}

else if(marks>=80)
{
printf("Grade: B\n");

}
else if(marks>=70)
{
printf("Grade: C\n");
}
else if(marks>=60)
{
   printf("Grade: D\n");
 
}
 else if(marks>=35)
{
      printf("Result: Pass\n");
 
}
 else if(marks<=35) 
 {


          printf("Result: Fail\n");
 }

    return 0;

}



