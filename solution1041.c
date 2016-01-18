/**
 * Nine degree problem 1041: simple sorting.
 * Result should remove duplicated elements, each number will occure only one.
 *
 * hellfire (asyncloading#163.com)
 * Jan 18th, 2016
 */

#include<stdio.h>

int main(int argc, char** argv)
{
  int n;
   
  /* Get first line input.*/
  while (scanf("%d", &n) != EOF)
  {
    int i;
    int j;
    int num[1000];
    int result[1000];

    /* Get second line input.*/
    for (i = 0; i < n; i ++) 
    {
      scanf("%d", &num[i]);
    }
     
    /* String sort, for 1000 number, bubble is ok. */    
    for (i = 0; i < n; i ++)
    {
      for (j = 0; j < i; j ++)
      {
        int tmp;
        if (num[i] < num[j])
        {
          tmp = num[j];
          num[j] = num[i];
          num[i] = tmp;
        }
      }
    }

    /* Final result, don't output duplicate number.*/
    int before = -1;             /* Before number*/
    int p = 0;                       /* Pointer to result array. */
    for (i = 0; i < n; i ++)
    {
      if (num[i] != before)
      {
        result[p] = num[i];
        before = num[i];
        p ++;
      }
    }

    /* Last one don't need space, otherwise will cause presentation error. */
    for (i = 0; i < p; i ++)
    {
      if (i != p - 1)
      {
        printf("%d ", result[i]);
      }
      else
      {
        printf("%d\n", result[i]); 
      }
    }

  }
}
