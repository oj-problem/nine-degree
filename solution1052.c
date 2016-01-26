/**
 * Nine degree problem 1052: find x index in an array.
 *
 * hellfire (asyncloading#163.com)
 * Jan 26th, 2016
 */
#include<stdio.h>
typedef int bool;
#define true 1
#define false 0

int main(int argc, char** argv)
{
  int n;
  while (scanf("%d", &n) != EOF)
  {
    int i;
    int x;
    bool flag = 0;
    int arr[n];
    for (i = 0; i < n; i ++)
    {
      scanf("%d", &arr[i]);
    }

    scanf("%d", &x);
    for (i = 0; i < n; i ++)
    {
      if (x == arr[i])
      {
        flag = true;
        printf("%d\n", i);     
      }
    }
    if (!flag)
    {
      printf("%d\n", -1);
    }
  }
}
