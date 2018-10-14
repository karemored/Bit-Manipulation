#include<stdio.h>
#include<string.h>

void equalLen(char * str1, char * str2)
{
  int len1 = strlen(str1);
  int len2 = strlen(str2);
  char strrev1[10];
  char strrev2[10];
  char strdst[10] = "0";
  strcpy(strrev1,str1);
  strrev(strrev1);
  strcpy(strrev2,str2);
  strrev(strrev2); 
  if(len1<len2)
  {
    while(len1<len2)
      strcat(strrev1,strdst);
 
    strrev(strrev1);
    strcpy(str1,strrev1);
  }
  
  if(len2<len1)
  {
    while(len2<len1)
      strcat(strrev2,strdst);
    strrev(strrev2);
    strcpy(str2,strrev2);
  }

  return;
}

char * add_strings(char * str1, char * str2)
{
   char str3[10];
   int carry = 0;
   int i;
   equalLen(str1,str2);
  
   for(i=0; i<strlen(str1); i++)
   { 
     str3[i] = str1[i] ^ str2[i] ^ carry;
     carry = ((carry & str1[i]) | (carry & str2[i]) | (str1[i] & str2[i]));
   }

   printf("--->%s<---",str3);
   return str3;
}


int main()
{
   char str1[10] = "1100011";
   char str2[2] = "10";

   printf("--<%s>--",add_strings(str1,str2));

   return 0;
} 
