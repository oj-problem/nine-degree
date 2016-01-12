/**
 * Nine degree problem 1040: find nth number in prime sequence.
 *
 * hellfire (asyncloading#163.com)
 * Jan 12th, 2016
 */

#include<stdio.h>
#include<math.h>
#define K 10000
#define true 1
#define false 0

int is_prime(int num);

int main(int argc, char** argv)
{
  /* Prime number generator */

  int count = 1;              /* Set 3 as start number*/              
  int num = 3;                

  int k;                      /* Get user input*/
  int prime_arr[K];

  prime_arr[0] = 2;

  while (count != K)
  {
    if(is_prime(num)) 
    {
      prime_arr[count] = num;
      count ++;
    }
    num += 2;      
  }

  /* Judge wether user input ends */
  while(scanf("%d", &k) != EOF)
  {
    printf("%d\n", prime_arr[k - 1]);
  }
      
}

int is_prime(int num)
{
  int result = -1;
  int i;
  // 0, 1, and negetive numbers are not prime
  if (num < 2)
  {
    result = false;    
  } else if (num == 2)
  {
    result = true;
  } else
  {
    for (i = 3; i <= (int)floor(sqrt(num)); i += 2)
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
    return false;
  } else
  {
    return true;
  }
}
