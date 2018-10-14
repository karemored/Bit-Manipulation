#include<stdio.h>
#include<math.h>

int totalBits(int n)
{
  int i;
  
  for(i=0;i<100;i++)
  {
    if( n < pow((double)2,(double)i))
      break;
  }

  return i;
}
  

int main()
{
  int t1,t2;
  int n1 = 5;
  int n2 = 13;

  t1 = totalBits(n1);
  t2 = totalBits(n2);

  if(t1<t2)
  {
    n1 = n1 << (t2-t1);
  }

  if(t1>t2)
  {
    n2 = n2 << (t1-t2);
  }

  printf("-->%d<--",n1^n2);
  
  return 0;
}
