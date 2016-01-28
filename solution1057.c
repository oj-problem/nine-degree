/**
 * Nine degree problem 1057: Mode
 *
 * hellfire (asyncloading#163.com)
 * Jan 26th, 2016
 */
#include<stdio.h>

int main(int argc, char** argv)
{
  
  while (1)
  {
    int i;
    int num[10] = {0};

    for (i = 0; i < 20; i ++)
    {
      int tmp;
      if (scanf("%d", &tmp) == EOF)
      {
        return 0;
      }
      num[tmp - 1] ++;
    }
    int max = 0;
    int index = 1;
    for (i = 0; i < 10; i ++)
    {
      if (num[i] > max)
      {
        max = num[i];
        index = i + 1;
      }
    }
    printf("%d\n", index);
  }
}
