/**
 * Nine degree problem 1042: Longest common sequences (LCS)
 * Use DP(dynamic programming) algorithm, divide problem into small pieces.
 * Expression can use to describe relationship between child problem and parent problem, as follows:

 * Set:  Xi = {x0, x1, x2, x3, ..., xi}, Yj = {y0, y1, y2, y3, ..., yj};
 * c[i, j] = 0;                                     (when i or j equals to 0)
 * c[i, j] = c[i - 1, j - 1] + 1;                   (when xi-1 equals to yj-1)
 * c[i, j] = max(c[i][j - 1], c[i - 1][j]);         (when xi-1 don't equals to yj-1)
 *
 * hellfire (asyncloading#163.com)
 * Jan 19th, 2016
 */

#include<stdio.h>
#include<string.h>

int LCS(char x[], char y[], int m, int n);

int main(int argc, char** argv)
{
  char x[101];                 /* One string */
  char y[101];                 /* Another string*/

  /* Read two string. */
  while (gets(x) != NULL && gets(y) != NULL)
  {
    int m = strlen(x);
    int n = strlen(y);
    int len = LCS(x, y, m, n);
    printf("%d\n", len);          
  }
}

int LCS(char x[], char y[], int m, int n)
{
  int i, j;                   
 
  int martix[101][101];       /* Store c[i, j] value */
  /* Initialize boundary, filter zero case. */
  for (i = 0; i < m; i ++)
  {
    martix[i][0] = 0; 
  }
  for (j = 0; j < n; j ++)
  {
    martix[0][j] = 0;
  }

  /* Child and Parent relation. */
  for (i = 1; i <= m; i ++)
  {
    for (j = 1; j <= n; j ++)
    {
      if (x[i - 1] == y[j - 1])
      {
        martix[i][j] = martix[i - 1][j - 1] + 1;
      }
      else
      {
        if (martix[i][j - 1] > martix[i - 1][j])
        {
          martix[i][j] = martix[i][j - 1];
        }
        else
        {
          martix[i][j] = martix[i - 1][j];
        }
      }
    }
  }
  return martix[m][n];
}
