/**
 * Nine degree problem 1066:  String sort according to ASCII
 *
 * hellfire (asyncloading#163.com)
 * Jan 16th, 2016
 */
#include<stdio.h>
#include<string.h>
 
int main(int argc, char** argv)
{
  char str[21];
 
  while(gets(str))
  {
    /* String sort*/
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
    /* Output*/
    puts(str);
  }
}
