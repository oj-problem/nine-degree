/**
 * Nine degree 1192: Judge palindrome string.
 *
 * @author hellfire
 * @date   Feb 13th, 2016
 */
#include<stdio.h>
#include<string.h>
#define MAX_N 1000

int is_palindrome(char str[], int n)
{
  int i;
  int flag = 1;
  for (i = 0; i < n; i ++)
  {
    if (str[i] != str[n - 1 - i])
    {
      flag = 0;
      break;
    }  
  }
  return flag;  
}


int main(int argc, char **argv)
{
  char str[MAX_N];
  
  while(gets(str) != NULL)
  {
    int n = strlen(str);
    if(is_palindrome(str, n)) 
    {
      printf("Yes!\n");  
    }
    else
    {
      printf("No!\n");
    }  
  }  
}
