/* program to multi ply a number by 7*/

#include<stdio.h>

int main()
{
  int n = 3;
  int mult_8;
  
  mult_8 = n<<3; //this multiplies the number by 8
  
  printf("\nNumber multiplied by 7= %d",(mult_8-n));

  return 0;
}
