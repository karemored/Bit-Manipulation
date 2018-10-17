#include<stdio.h>
#include<math.h>

void findSubarray(int * arr, int n)
{
  int i,t;
  int cnt;

  n = pow(2,n);

  for(i=0;i<n;i++)
  {
    printf("{");
    if(i == 0)
      printf(" null");

    else
    {
      t = i;
      cnt = 0;
   
      while(1)
      { 
        if((t>>cnt) & 1)
          printf(" %d ", arr[cnt]);
    
        if((t>>cnt) == 0)
          break;
        cnt++;
      }
    }
    printf("}\n");
 
  }

  return;
}
        
int main()
{
  int arr[] = {1,2,4};

  findSubarray(arr, sizeof(arr)/sizeof(int));
 
  return 0;
}
