/**
 * Nine degree problem 1053: change maxinum and mininum number, and then output array.
 *
 * hellfire(asyncloading#163.com)
 * Jan 25th, 2016
 */

#include<stdio.h>

int main(int argc, char** argv)
{
  int n;
  while (scanf("%d", &n) != EOF)
  {
    int i;
    int arr[n];
    for (i = 0; i < n; i ++)
    {
      scanf("%d", &arr[i]);
    }

    int p = 0;         /* Max pointer */
    int q = 0;         /* Min pointer */
    int max;
    int min;
    int num = arr[0];
    max = num;
    min = num;

    for (i = 1; i < n; i ++)
    {
      if (arr[i] > max)
      {
        max = arr[i];
        p = i;
      }
      else if (arr[i] <= min)
      {
        min = arr[i];
        q = i;
      } 
    }

    /* Switch maxinum number and mininum number*/
    int tmp;
    tmp = arr[p];
    arr[p] = arr[q];
    arr[q] = tmp;

    /* Output */
    for (i = 0; i < n; i ++)
    {
      if (i != n - 1)
      {
        printf("%d ", arr[i]);
      }
      else
      {
        printf("%d\n", arr[i]);
      }
    }
  }
}
