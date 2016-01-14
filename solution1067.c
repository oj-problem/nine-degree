/**
 * Nine degree problem 1067: factorial
 *
 * hellfire (asyncloading#163.com)
 * Jan 14th, 2016
 */

#include<stdio.h>

int main(int argc, char** argv)
{
  int n;
  int i;

  while (scanf("%d", &n) != EOF)
  {
    double fac = 1.0;
   
    for (i = 1; i <= n; i ++)
    {
      fac *= i;
    }

    printf("%.f\n", fac);
  }
  return 0;
}
