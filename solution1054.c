/**
 * Nine degree problem 1054: string sort
 *
 * hellfire (asyncloading#163.com)
 * Jan 26th, 2016
 */
#include<stdio.h>
#include<string.h>

int main(int argc, char** argv)
{
  char str[201];
  while (gets(str) != NULL)
  {
    /* Bubble sort. */
    int i;
    int j;
    int len = strlen(str);
   
    for (i = 0; i < len; i ++)
    {
      for (j = 0; j < i; j ++)
      {
        char tmp;
        if (str[i] < str[j])
        {
          tmp = str[i];
          str[i] = str[j];
          str[j] = tmp;
        }
      }
    }

    puts(str);   
  }
}
