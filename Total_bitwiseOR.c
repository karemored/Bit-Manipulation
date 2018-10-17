#include<stdio.h>
#include<math.h>

int chkPresent(int * OR_ARR, int or_ptr, int OR)
{
  int i;
  
  for(i=0;i<=or_ptr;i++)
  {
    if(OR == OR_ARR[or_ptr])
      return 1;
  }
  return 0;  
}

void findSubarray(int * arr, int n)
{ 
  int OR_ARR[100] = {0};
  int OR;
  int count_OR = 0;
  int or_ptr = 0;
  int i,t;
  int cnt;

  n = pow(2,n);

  for(i=1;i<n;i++)
  {
    OR = 0;
    printf("\n{");

    t = i;
    cnt = 0;
   
    while(1)
    { 
      if((t>>cnt) & 1)
      {
        printf(" %d ", arr[cnt]);
        OR = (OR | arr[cnt] | 0);
      }
 
      if((t>>cnt) == 0)
        break;
      cnt++;
    }
    printf("}\n");
    printf("or -> %d", OR);
    
    if(!chkPresent(OR_ARR,or_ptr,OR)) 
    {
      count_OR++;
      or_ptr++;
      OR_ARR[or_ptr] = OR;
    }
  }

  printf("\ntotal number of op = %d\n",count_OR);
  return;
}
        
int main()
{
  int arr[] = {1,2,4};

  findSubarray(arr, sizeof(arr)/sizeof(int));
 
  return 0;
}
