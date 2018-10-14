//Swap all odd and even bits/

#include<stdio.h>
#include<math.h>

int main()
{
  int n = 23;
  int i, term = 0;
  int not_term = 0;

  for(i=1;i<=7;i=i+2)
    term = term + (int)pow(2,i);

  for(i=0;i<=6;i=i+2)
    not_term = not_term + (int)pow(2,i);
 
  printf(" %d ",((n & term) >> 1) | ((n & not_term) << 1));

  return 0;
}
