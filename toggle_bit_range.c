//Toggle bits in the given range

#include<stdio.h>
#include<math.h>
int main()
{
  int n =50;
  int l=2; 
  int r=5;

  int numb;

  numb = r-l+1;
  printf("-->%d<--",(n^((int)((pow(2,numb))-1)<<(l-1))));

  return 0;
}
