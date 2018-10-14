#include<stdio.h>
int main()
{
  int x = 47, n=3;
  int p2=1;
  int p1=5;
  int t,r,res;

  t = (((x>>p1)&((1<<n)-1)) ^ ((x>>p2)&((1<<n)-1)));

  r = ((t<<p1) | (t<<p2));

  res = r ^ x;

  printf("-->%d<--",res);

  return 0;
}
