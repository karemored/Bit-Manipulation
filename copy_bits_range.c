#include<stdio.h>

int main()
{
  int x = 10;
  int y = 13;
  int l = 2, r = 3;
  int i;
 
  for(i=l;i<=r;i++)
  {
    if(((y>>(i-1)) & 1 ) == 1)
    { 
      if(((x >> (i-1)) & 1 ) == 0)
        x = x | (1 << (i-1));
    }
  }
  printf("\nx = %d\n",x);
  return 0;
}
