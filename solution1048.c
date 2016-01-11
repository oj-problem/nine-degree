/**
 * Nine degree problem: Judge triangle type.
 *
 * hellfire (asyncloading#163.com)
 * Jan 11th, 2016
 */

#include<stdio.h>
#include<math.h>

int main(int argc, char** argv)
{
  int a, b, c;               /* User input numbers */
  int i, j;                  /* Loop variables */
  int tmp;                   /* Temperary variable use switch varable */

  int arr[3];                /* Here use an array to store numbers */
 
  while (scanf("%d %d %d", &a, &b, &c) != EOF)
  {
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;

    /* Sort array use bubble sort algorithm,
     * Array element will sorted from small to big.
     */
    for (i = 0; i < 3; i ++)
    {
      for (j = 0; j <=i; j ++) 
      {
        if (arr[i] < arr[j])
        {
          tmp = arr[i];
          arr[i] = arr[j];
          arr[j] = tmp;
        }     
      }  
    }
    
    /* Judge triangle type use Pythagorean Triples */
    if (pow(arr[0], 2) + pow(arr[1], 2) > pow(arr[2], 2))
    {
      /* Fuck Chinese...*/
      printf("锐角三角形\n");
    } else if (pow(arr[0], 2) + pow(arr[1], 2) == pow(arr[2], 2))
    {
      printf("直角三角形\n");
    } else if (pow(arr[0], 2) + pow(arr[1], 2) < pow(arr[2], 2))
    {
      printf("钝角三角形\n");
    }
  }
}
