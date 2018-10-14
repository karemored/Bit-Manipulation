/*1 to n bit numbers with no consecutive 1s in binary representation.
*/

#include<stdio.h>

int main()
{
  int n = 58;
  int t;
  int chk;

  t = n;
  chk = 0;

  while(t!=0)
  {
    if((chk == 1 ) && (t%2==1))
    {
      printf("-->consec one<--");
      return 0;
    }

    if(t %2 == 1)
      chk = 1;

    if(t %2 == 0)
      chk = 0;

    t = t>>1;
  }

  printf("-->no consec one");

  return 0;
}
