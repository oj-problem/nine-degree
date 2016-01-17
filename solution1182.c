/**
 * Nine degree problem 1182: Count letter.
 *
 * hellfire (asyncloading#163.com)
 * Jan 16th, 2016
 */
#include<stdio.h>
#include<string.h>


int main(int argc, char** argv)
{
  char str[10000];
  
  // Reads a line.
  while(gets(str) != NULL)
  {
    int total = 0;       /* Count letter. */
    int i = 0;
    int len = strlen(str);

    for (i = 0; i < len; i ++)
    {
      if (str[i] != '.')
      {
        if (str[i] != ' ')
        {
          total ++;
        } else
        {
          if (total != 0)
          {
            printf("%d ", total);
          }
          total = 0;        /* When meet space, clear total value. */
        }
     
      } else
      {
        if (total != 0)
        {
          printf("%d", total);
        }
        total = 0;
        // End reads, printf a newline.
        printf("\n");
      }
    }
  }
  return 0;
}
