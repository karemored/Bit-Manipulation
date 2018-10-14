#include<stdio.h>
#include<stdlib.h>

int main()
{
  int x = 12;
  int y = -12;
  int result;

  result = x^y;
  if(result >= 0)
    printf("\nsame sign -> %d\n",result);
  else
    printf("\nopposite sign -> %d\n",result);
 
  return 0;
}
  
