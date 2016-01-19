/**
 * Nine degrer problem 1058: reverse output.
 *
 * hellfire (asyncloading#163.com)
 * Jan 20, 2016
 */
#include<stdio.h>
#include<string.h>

int main(int argc, char** argv)
{
  char str[5];
  while (gets(str) != NULL)
  {
    int i;
    int len = strlen(str);
    for (i = len - 1; i >= 0; i --)
    {
      printf("%c", str[i]);
    }
    printf("\n");   
  }
}
