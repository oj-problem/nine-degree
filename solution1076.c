/**
 * Nine degree problem 1076: factorial where N is between 0 and 1000.
 * Use array to mock (Because any computer's data type can't express huge data.)
 * 
 * hellfire (asyncloading#163.com)
 * Jan 14th, 2016
 */

#include<stdio.h>

int main(int argc, char** argv)
{
  int n;

  while (scanf("%d", &n) != EOF)
  {
    int i;          /* Loop variable*/
    int j;          /* Loop variable */
    int k;          /* Loop variable */
    int l = 1;      /* Final result array length */

    /* According to Stirling's approximation, 1000! result length is about 2568 */
    int arr[3000] = {0};
    arr[0] = 1;

    for (i = 1; i <= n; i ++)
    {
      /* Multiply each digit in array */
      for (j = 0; j < l; j ++)
      {
        arr[j] = arr[j] * i;
      }

      for (j = 0; j < l; j ++)
      {
        /* Handle the carry case */  
        if (arr[j] > 9)
        {
          arr[j + 1] += arr[j] / 10;
          arr[j] = arr[j] % 10;
 
          if (j == l - 1 && arr[j + 1])
          {
            l ++;
          }
        }
      }  
    }
    /* Output */
    for (k = l - 1; k >= 0; k --)
    {
      printf("%d", arr[k]);
    }
    printf("\n");  
  }
}
