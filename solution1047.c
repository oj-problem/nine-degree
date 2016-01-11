/**
 * Nine degree problem 1047: Prime Judge
 * 
 * hellfire(asyncloading#163.com)
 * Jan 11th, 2016
 */

#include<stdio.h>
#include<math.h>

#define true 1
#define false 0

int main(int argc, char** argv)
{
  int num;
  int i;
 
  while (scanf("%d", &num) != EOF)
  {
    int result = -1;
    // 0, 1, and negetive numbers are not prime
    if (num < 2)
    {
      result = false;    
    } else if (num == 2)
    {
      result = true;
    } else
    {
      for (i = 2; i <= (int)floor(sqrt(num)); i ++)
      {
        if (num % i == 0) 
        {
          result = false;
          break;
        }
      }
    }
 
    if(result == false) 
    {
      printf("no\n");
    } else
    {
      printf("yes\n");
    }
  }
  return 0;
}
