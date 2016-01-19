/**
 * Nine degree problem 1037: Powerful calculator.
 * High precision case.
 *
 * hellfire (asyncloading#163.com)
 * Jan 20, 2016
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void addition(int x[], int y[], int m, int n);
void subtraction(int x[], int y[], int m, int n);
void multiplication(int x[], int y[], int m, int n);

int main(int argc, char** argv)
{
  char a[401];
  char b[401];
  
  while (gets(a) != NULL && gets(b) != NULL)
  {
    /* Transfer string to array, array should be in reverse. */
    int x[401];
    int y[401];
    int m;
    int n;
    int i;
    m = strlen(a);
    n = strlen(b);
    for (i = 0; i < m; i ++)
    {
      x[i] = a[m - 1 - i];          /* Reverse array */
    }
    for (i = 0; i < n; i ++)
    {
      y[i] = b[n - 1 - i];
    }
    addition(x, y, m, n);
  }
}

/**
 * Addition operation
 * Note: x and y should pass with reverse state.
 */
void addition(int x[], int y[], int m, int n)
{
  int i;
  int l;           /* Final array length. */
  int max;
  int min;
  int arr[402] = {0};
  if (m >= n)
  {
    max = m;
    min = n;
  }
  else
  {
    max = n;
    min = m;
  }

  for (i = 0; i < min; i ++)
  {
    if (x[i] + y[i] > 9)
    {
      arr[i + 1] += 1;
      arr[i] -= 10;
    }           
  }
  for (i = min; i < max; i ++)
  {
    if (m >= n)
    {
      arr[i] += x[i];
    }
    else
    {
      arr[i] += y[i];
    }
    if (arr[i] > 9)
    {
      arr[i + 1] += 1;
      arr[i] -= 10;
    }
  }
  
  l = arr[max] > 0 ? (max + 1) : max;
  for (i = 0; i < l; i ++)
  {
    printf("%d", arr[i]);
  } 
  printf("\n");
}
