// swap two numbers without a third variable

#include<stdio.h>

int main()
{
  int a = 10;
  int b = 20;

  b = a^b;
  a = b^a;
  b = b^a;
  printf("\nA = %d",a);
  printf("\nB = %d",b);

  return 0;
}
