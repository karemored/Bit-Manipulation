/*
   check n&(n-1) gives 0 or not 
   this is because (10000 & 01111) gives 0;
   then count the number of 0s after 1;
*/

#include<stdio.h>

int checkPower4(int n)
{
  int count=0;
  
  if(n==1)
   return 1;
  
  if((n & (n-1)) == 0)
  {
    while(n!= 1)
    {
      n = n >> 1;
      count++;
    }
  }
  
  else
    return 0;
  
  if(count%2 == 0)
    return 1;
  else
    return 0;
}

int main()
{
  int n;
 
  scanf("%d",&n);
  
  if(checkPower4(n))
    printf("\nPower of 4\n");
  else
    printf("\nNot a power of 4\n");
 
}

