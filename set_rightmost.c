/* set rightmost bit in a number*/

#include<stdio.h>
#include<math.h>

int main()
{
  int n = 15;
  int pos = 0;
  int neg;
 
  neg = ~n;
  
  while(neg % 2 == 0)
  {
    neg = neg>>1;
    pos = pos+1;
  }

  printf("->%d<-",(n | (int)(pow(2,pos))));

  return 0;
}
