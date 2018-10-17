/*Sum of Bitwise And of all pairs in a given array*/

#include<stdio.h>
#include<math.h>

int main()
{
  int arr[] = {1,2,3,4};
  int count, sum = 0;
  int i,j;

  for(i=0;i<=4;i++)
  {
    count = 0;
  
    for(j=0;j<=2;j++)
    {
      if((arr[j] >> i) & 1)
        count++;
    }
 
    sum = sum + ( (pow(2,i)) * (count*(count-1)/2) );
  }
  printf("\nsum = %d", sum);
  return 0;
}
  
