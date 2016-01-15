/**
 * Nine degree problem 1075: fibonacci list.
 *
 * hellfire (asyncloading#163.com)
 * Jan 15th, 2016
 */
#include<stdio.h>
int fibonacci(int n);

int main(int argc, char** argv)
{
  int i;
  int j;
  int n;

  
  while (scanf("%d", &n) != EOF)
  {
    for (i = 0; i < n; i ++)
    {
      for (j = 0; j < 2 * i + 1; j ++)
      {
        printf("%d", fibonacci(j));
        // Line ends without space.. (else will cause presention error...)
        if (j != 2 * i) 
        {
          printf(" "); 
        }
      }
      printf("\n");
    }
  }    
}

/**
 * Fibonacci number
 */
int fibonacci(int n)
{
  int result = 0;
  if (n > 1)
  {
    result = fibonacci(n - 1) + fibonacci(n - 2);    
  } else if (n == 1 || n == 2)
  {
    result = 1;
  } else if (n == 0)
  {
    result = 0;
  }
  return result;
}
