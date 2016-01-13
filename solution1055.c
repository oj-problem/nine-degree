/**
 * Nine degree problem 1055: reverse array
 *
 * hellfire (asyncloading#163.com)
 * Jan 13th, 2016
 */

#include<stdio.h>
#include<string.h>
#define MAX 200

int main(int argc, char** argv)
{
  char str[MAX];  
  int i;
  int len;

  while(scanf("%s", str) != EOF)
  {
    len = strlen(str);
    for (i = len; i > 0; i --)
    {
      printf("%c", str[i - 1]);
    }
    printf("\n");
  }  
}
