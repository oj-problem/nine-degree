/**
 * Nine degree problem 1049: remove specific character from a string.
 *
 * hellfire (asyncloading#163.com)
 * Jan 12th, 2016
 */

#include<stdio.h>
#include<string.h>
#define MAX 256

int main(int argc, char** argv)
{
  char s[MAX];
  int len;
  char ch;

  while(gets(s))
  {
    scanf("%c", &ch);
    int i = 0;
    len = strlen(s); 

    for (i = 0; i < len; i ++)
    {
      if (s[i] != ch)
      {
        printf("%c", s[i]);
      }
    }
    printf("\n");
    getchar(); 
  }
}
