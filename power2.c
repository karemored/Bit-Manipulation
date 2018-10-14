#include<stdio.h>

int main()
{
  int n = 9;

  if(( n & (n-1) ) == 0)
    printf("\npowerof two");
  else
    printf("\nno");

  return 0;
}
