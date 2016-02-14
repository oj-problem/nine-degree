/**
 * Nine degree 1120: Permutation.
 * Use backtracking algorithm.
 *
 * hellfire (asyncloading#163.com)
 * Feb 14th, 2016
 */
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#define MAX_N 1000
using namespace std;

string *permutations = new string[MAX_N];
int tail;

void swap(char *x, char *y)
{
  char tmp;
  tmp = *x;
  *x = *y;
  *y = tmp; 
}

void permute(char *a, int start, int end)
{
  if (start == end)
  {
    permutations[tail ++] = a;
  }
  else
  {
    int i;
    for (i = start; i <= end; i ++)
    {
      swap(a + start, a + i);
      permute(a, start + 1, end);
      swap(a + start, a + i);
    }
  }
}

int main(int argc, char **argv)
{
  char str[6];
  while (gets(str) != NULL)
  {
    tail = 0;
    int len = strlen(str);
    permute(str, 0, len - 1);
    sort(permutations, permutations + tail);
    for (int i = 0; i < tail; i ++)
    {
      printf("%s\n", permutations[i].c_str());
    }
  }
  
}
