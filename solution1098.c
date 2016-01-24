/**
 * Nine degree problem 1098: count letter
 *
 * hellfire (asyncloading#163.com)
 * Jan 24th, 2016
 */
#include<stdio.h>
#include<string.h>

int main(int argc, char** argv)
{
  char str[1024];
  while (gets(str) != NULL)
  {
    int counter[26] = {0};
    int l = strlen(str);
    int i;
    for (i = 0; i < l; i ++)
    {
      counter[str[i] - 'A'] ++;
    }
    for (i = 0; i < 26; i ++)
    {
      printf("%c:%d\n", 'A' + i, counter[i]);
    }   
  }
}
