#include <stdio.h>
int main()
{
  int n, reversed = 0, original;
  printf("enter the number:");
  scanf("%d", &n);
  original = n;

  for (; n != 0; n = n / 10)

  {

    reversed = reversed * 10 + (n % 10);
  }
  if (original == reversed)

  {

    printf("the entered number is palindrome");
  }
  else
  {
    printf("the entered number is not palindromen");
  }

  return 0;
}