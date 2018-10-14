#include<stdio.h>

int main()
{
  int i = 44824;
  //int i = 0x12345678;
  int j;
  char * start;
  
  start = (char *)&i;
 
  for(j=0;j<sizeof(int);j++)
  {
    printf(" %.2x ",start[j]);
  }

  return 0;
}
  
