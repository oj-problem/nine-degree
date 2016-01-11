/**
 * Nine degree problem 1046: find max value
 * 
 * hellfire(asyncloading#163.com)
 * Jan 11th, 2016
 */

#include<stdio.h>

int main(int argc, char** argv)
{
  int max = -1;
  int val;
  int i = 0;

  while (scanf("%d", &val) != EOF)
  {
    i ++;

    if (val > max)
    {
      max = val;
    }
    
    if (i % 10 == 0)
    {
      printf("max=%d\n", max);
      max = 0;     /*Clear max value*/
    }  
  }
  
  return 0;
}
