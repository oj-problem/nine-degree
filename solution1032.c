/**
 * Nine degree problem 1032: ZOJ
 *
 * hellfire (asyncloading#163.com)
 * Jan 24th, 2016
 */
#include<stdio.h>
#include<string.h>

int main(int argc, char** argv)
{
  char str[101];
  while (gets(str) != NULL && strcmp(str, "E") != 0)
  {
    /*Count letter */
    int l = strlen(str);
    int i;
    int m = 0, n = 0, q = 0;   /* Counter*/
    for (i = 0; i < l; i ++)
    {
      if (str[i] == 'Z')
      {
        m ++; 
      }
      else if (str[i] == 'O')
      {
        n ++;
      }
      else if (str[i] == 'J')
      {
        q ++;
      }
    }
    /* Output */
    while (m > 0 || n > 0 || q > 0)
    {
      if (m > 0)
      {
        printf("%c", 'Z');
        m --;
      }
      if (n > 0)
      {
        printf("%c", 'O');
        n --;
      }
      if (q > 0)
      {
        printf("%c", 'J');
        q --;
      }
    }
    printf("\n");          
  }
}
