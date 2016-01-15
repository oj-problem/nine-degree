/**
 * Nine degree problem 1134: crypto translate.
 *
 * hellfire (asyncloading#163.com)
 * Jan 15th, 2016
 */

#include<stdio.h>
#include<string.h>

int main(int argc, char** argv)
{
  int n;;            /* Store N */

  while (scanf("%d\n", &n) != EOF)
  {
    while (n > 0)
    {
      char str[80];
      gets(str);
      
      int len = strlen(str);
      int i;

      /* Simple crypto for input string*/
      for (i = 0; i < len; i ++)
      {
        if (str[i] == 'z')
        {
          str[i] = 'a';
        } else if (str[i] == 'Z')
        {
          str[i] = 'A';
        } else if ((str[i] >= 'a' && str[i] < 'z') || (str[i] >= 'A' && str[i] < 'Z')) 
        {
          str[i] ++;
        }
        // Output
        printf("%c", str[i]);
      }
      printf("\n");
      n --;
    } 
  }
  return 0;
}
