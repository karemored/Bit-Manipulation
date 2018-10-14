#include<stdio.h>

void changeToZero(int a[2])
{
  a[ a[1] ] = a[ !a[1] ]; 
  printf("nothing");
  return;
}

int main()
{
  int a[2] = {0,1};
  changeToZero(a);

  return 0;
}
