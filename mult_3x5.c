#include<stdio.h>

int main()
{
  int x = 2;
  int result;
 
  result = (x<<1) + x +(x>>1);

  printf("\n%d\n",result);
 
  return 0;
}
