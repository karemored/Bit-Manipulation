//Find the smallest number with n set and m unset bits

#include<stdio.h>
#include<math.h>
int main()
{
  int n = 4;
  int m = 1;
  
  printf("-->%d<--",((1<<(n+m-1))|((int)pow(2,(n-1))-1)));

  return 0;
}
