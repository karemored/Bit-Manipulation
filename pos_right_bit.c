#include<stdio.h>

int main()
{
  int n = 16;
  int count = 1;

  while(1)
  { 
    if((n & 1)==0)
    {
      count++;
      n = n>>1;
    }
    else
      break;
  }

  printf("\ncount  = %d",count);

  return 0;
}
    
