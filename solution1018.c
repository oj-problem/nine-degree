/**
 * Nine degree problem 1018: get same score students count.
 *
 * hellfire (asyncloading#163.com) 
 * Jan 19th, 2016
 */
#include<stdio.h>

int main(int argc, char** argv)
{
  int n;
  while (scanf("%d", &n) != EOF && n != 0)
  {
    int i;
    int score;
    int count = 0;
    int arr[1000];

    for (i = 0; i < n; i ++)
    {
      scanf("%d", &arr[i]);
    }
    
    scanf("%d", &score);

    for (i = 0; i < n; i ++)
    {
      if (arr[i] == score)
      {
        count ++;
      }
    }
    printf("%d\n", count);
  }
}
