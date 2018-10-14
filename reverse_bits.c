#include<stdio.h>
#include<math.h>
int main()
{
  unsigned int n = 2;
  unsigned int t;
  int size;
  int pos = 0;
  
  size = sizeof(unsigned int) * 8;

  t = n;
  n = 0;
  while(t != 0)
  {
    if((t & 1) == 1)
      n = n + pow(2,(size-pos));
    
    t = t>>1;
    pos ++;
  }

  printf(" %u ",n);

  return 0;
}
