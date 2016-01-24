/**
 * Nine degree problem 1092: fibonacci probelm
 * 
 * hellfire (asyncloading#163.com)
 * Jan 24th, 2016
 */
#include<stdio.h>
int fibonacci(int x);

int main(int argc, char** argv)
{
  int n;
  while (scanf("%d", &n) != EOF)
  {
    printf("%d\n", fibonacci(n));
  }  
}

int fibonacci(int x)
{
  if (x == 0)
  {
    return 0;
  }
  else if (x == 1)
  {
    return 1;
  }
  else 
  {
    return fibonacci(x - 1) + fibonacci(x - 2);
  }
}
