/**
 * Nine degree problem 1051: add stage number.
 *
 * hellfire (asyncloding#163.com)
 * Jan 13th, 2016
 */
#include<stdio.h>
#include<math.h>

int main(int argc, char** argv)
{
  int a;
  int n;

  /* Get user input */
  while (scanf("%d %d", &a, &n) != EOF)
  {
    int num[101] = {0};             /* Initialize result array */
    int i;
    int len = n;
 
    for (i = 0; i < n; i ++)
    {
      num[i] += a * (n - i);
      num[i + 1] += num[i] / 10;
      num[i] = num[i] % 10;

      /* Final result length */
      if (i == n - 1 && num[i + 1] > 0)
      {
        len = n + 1;   
      }
    }

    /* Output result*/
    for (i = len - 1; i >= 0; i --)
    {
      printf("%d", num[i]); 
    }
    printf("\n");
  }
  return 0;
}
