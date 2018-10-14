/*Toggle kth bit of a number*/

#include<stdio.h>
#include<math.h>

int main()
{
  int n,k;
  
  n = 5;
  k = 1;

  printf("-->%d<--",(n^pow(2,(k-1))));

  return 0;
}
