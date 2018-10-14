/*
  exoring all the elements give the one which is repeated odd number of time
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
  int * array;
  int i,res;

  array = malloc(5*sizeof(int));

  res = 0;

  array[0] = 5;
  array[1] = 5;
  array[2] = 2;
  array[3] = 2;
  array[4] = 7;

  for(i=0; i<5; i++)
  {
    res = res ^ array[i];
  }
 
  printf("\n%d\n",res);

  return 0;
}
