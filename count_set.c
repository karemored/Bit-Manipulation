#include<stdio.h>

int main()
{
  int n = 6,count=0, test;
  while(n!=0)
  {
    test = n & 1;
    if(test == 1)
      count++;
    n = n>>1;
  }
  return 0;
}
