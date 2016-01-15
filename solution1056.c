/**
 * Nine degree problem 1056: greatest common divisor.
 * Use Euclidean algorithm.
 *
 * hellfire(asyncloading#163.com) 
 * Jan 15th, 2016
 */
#include<stdio.h>

int gcd(int a, int b);

int main(int argc, char** argv)
{
  int a;
  int b;
 
  while (scanf("%d %d", &a, &b) != EOF)
  {
     int result = gcd(a, b);
     printf("%d\n", result);      
  } 
}

/**
 * Eucliden algorithm
 * gcd(a, b) means divide a by b to get a quotient of a / b and a reminder a % b, then use b to divide a % b to get new result.
 * for each loop step, if reminder equals to 0, loop ends and a / b is the final result.
 *
 * We can use simple expression like this:
 *
 * gcd(a, 0) = a;
 * gcd(a, b) = gcd(b, a mod b)
 * 
 * Where a mod b = a - b[a/b] 
 */
int gcd(int a, int b)
{
  int result = 0;
  if (a == b)
  {
    result = a;
  } else if (a > b)
  {
    result = gcd(a - b, b);
  } else if (a < b)
  {
    result = gcd(a, b - a);
  }
  return result;
}
