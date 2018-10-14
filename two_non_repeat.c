/* Find the two non-repeating elements in an array of repeating elements */

#include<stdio.h>

int chk_right_set(int chk,int pos)
{
  chk = chk >> pos;
  
  if(chk%2 == 0)
    return 0;
  else
    return 1;
}

void getNonRepeated(int * arr, int * res, int arr_sz)
{
  int i,xor = 0, pos = 0, set_pos;
  int set1[10];
  int set2[10];
  int set1_cnt = 0;
  int set2_cnt = 0;
  int set1_xor = 0;
  int set2_xor = 0;

  for(i=0;i<arr_sz;i++)
    xor = xor ^ arr[i];

  while(1)
  {
    if((xor % 2) != 0)
      break;
    xor = xor >> 1;
    pos = pos+1;
  }
  
  for(i=0;i<arr_sz;i++)
  {
    set_pos = chk_right_set(arr[i],pos);
   
    if(set_pos == 1)
    {
      set1[set1_cnt] = arr[i];
      set1_cnt++;
    }
    else
    {
      set2[set2_cnt] = arr[i]; 
      set2_cnt++;
    }
  }
  
  for(i=0;i<set1_cnt;i++)
  {
    set1_xor = set1_xor ^ set1[i];
  }
 
  for(i=0;i<set2_cnt;i++)
  {
    set2_xor = set2_xor ^ set2[i];
  }
  
  res[0] = set1_xor;
  res[1] = set2_xor;
 
  return;
}
int main()
{
  int i;
  int arr[] = {2, 4,3,5, 7, 9, 4,3,5, 2};
  int res[2];

  getNonRepeated(arr,res,10);
  
  for(i=0;i<2;i++)
    printf(" %d ",res[i]);
  
  return 0;
}
  
