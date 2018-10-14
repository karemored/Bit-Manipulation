#include<stdio.h>

int main()
{
  int a,b,c;

  a = 1;
  b = 2;
  c = 3;
 
  while(1)
  {
    a = a>>1;
    b = b>>1;
    c = c>>1;

    if((a == 0)||(b==0)||(c==0))
      break;
  }
 
  if(a==0)
    printf("\nsmallest = a");
  
  if(b==0)
    printf("\nsmallest = b");
 
  if(c==0)
    printf("\nsmallest = c");

  return 0;
}

    
