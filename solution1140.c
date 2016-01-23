/**
 * Nine degree problem: eight queens puzzle.
 * For the algorithm:
 *    1, backtack(you can think it as DFS), when queens is small, this is a easy way.
 *    2, permutation
 * According to graph, we know total solution for eight queens puzzle is 92, here use pure c to calculate the result
 *
 * hellfire (asyncloading#163.com)
 * Jan 23rd, 2016
 */

#include<stdio.h>
#include<stdlib.h>

/* Pure c realize bool type. */
#define true 1
#define false 0
typedef int bool;

#define count 8                      /* Queens count */

/* Check wether two queens are safe */
bool check(int arr[], int k);

/* main blactack algorithm, result will sort from small to big after queens string is transform from string to integer */
void backtack(int t);

int queens[count + 1] = {0};                 /* Queens start from 1, queens[i] means a queen is placed in row i and column queens[i]  */
int martix[100][count + 1]; 
int tail = 0;                                /* Counter */

int main(int argc, char** argv)
{
  backtack(1);                   /* Traverse octree, 1 means first octree node. */

  /* Test case */
  /*
  int row, col;
  printf("%d\n", tail);
  for (row = 1; row < tail; row ++)
  {
    for (col = 1; col < count + 1; col ++)
    {
      printf("%d", martix[row][col]);
    }
    printf("\n");
  }
  */
  int n;
  while (scanf("%d", &n) != EOF)
  {
    int i;
    int j;
    for (i = 0; i < n; i ++)
    {
      int b;
      scanf("%d", &b);
      for (j = 1; j < count + 1; j ++)
      {
        printf("%d", martix[b - 1][j]);
      }
      printf("\n");    
    }
  }
}

bool check(int arr[], int row)
{
  int i;
  for (i = 1; i < row; i ++)
  {
    /* Use vector */
    if (arr[row] == arr[i] || abs(row - i) == abs(arr[row] - arr[i]))
    {
      return false;
    }
  }
  return true;
}

void backtack(int t)
{
  int i;
  if (t > count)
  {
    for (i = 1; i < count + 1; i ++)
    {
      martix[tail][i] = queens[i];
    }
    tail ++;
  }
  else
  {
    for (i = 1; i < count + 1; i ++)
    {
      queens[t] = i;
      if(check(queens, t))
      {
        backtack(t + 1);
      }
      else
      {
        queens[t] = 0;
      }
    }
  }
}
