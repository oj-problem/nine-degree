/**
 * 九度题目1003，计算A+B
 * hellfire(asyncloading#163.com)
 */

#include<stdio.h>
#include<string.h>

int main(int argc, char** argv)
{
  char str1[20];
  char str2[20];
  char char1;
  char char2;
  int len1;
  int len2;
  int i;
  int j;
  int val1 = 0;
  int val2 = 0;
  int ret;
  while(scanf("%s %s", str1, str2) != EOF)
  {
    len1 = strlen(str1);
    len2 = strlen(str2);
    for(i = 0; i < len1; i ++)
    {
      if(str1[i] >= '0' && str1[i] <= '9')
      {
        val1 = val1 * 10 + (str1[i] - '0');
      }
    }

    for(j = 0; j < len2; j ++)
    {
      if(str2[j] >= '0' && str2[j] <= '9')
      {
        val2 = val2 * 10 + (str2[j] - '0');
      }
    }

    char1 = str1[0];
    char2 = str2[0];
    if(char1 == '-' && char2 == '-')
    {
      ret = (val1 + val2) * (-1);
    }
    else if(char1 != '-' && char2 != '-')
    {
      ret = val1 + val2;
    }
    else if(char1 == '-' && char2 != '-')
    {
      ret = val2 - val1; 
    }
    else {
      ret = val1 - val2;
    }
  }
  printf("%d", ret);
  return 0;
}
