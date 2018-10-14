#include<stdio.h>

int main()
{
  int n = 100;
  
  printf("-->%d",((n & 0xF0)>>4)|((n & 0x0F)<<4));

  return 0;
}
