/*

   let x be the integer
   x-1 sets off the right most bit
   x & x-1 will give the rightmost bit off
*/

#include<stdio.h>

int main()
{
  int x = 7;

  printf("\n%d\n",(x & (x-1)));

  return 0;
}
