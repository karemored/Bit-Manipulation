#include<stdio.h>

int chkSparse(int n)
{
  int t;
  int chk;

  t = n;
  chk = 0;

  while(t!=0)
  {
    if((chk == 1 ) && (t%2==1))
    {
      //printf("-->consec one<--");
      return 0;
    }

    if(t %2 == 1)
      chk = 1;

    if(t %2 == 0)
      chk = 0;

    t = t>>1;
  }

  return 1;
}

int nxtSparse(int n)
{
  int i;
  i=n;
  while(1)
  {
    if(chkSparse(i) == 1)
      return i;

    i = i+ 1;
  }

  return 0;
}

int main()
{
  int n = 14;

  printf("\nnext sparse = %d",nxtSparse(n));
 
  return 0;
}
