/**
 * Nine degree 1019 problem
 * Write a simple calculator
 *
 * hellfire(asyncloading#163.com)
 * Jan 8th, 2016
 */

#include<stdio.h>
#include<string.h>
#define MAX 200

double stack[MAX];

int tail;

int main(int argc, char** argv)
{
  int left;
  int right;
  int i;
  double result;
  while (scanf("%d ", &left) && left != 0)
  {
    tail = 0;
    result = 0;
    stack[++tail] = 1.0 * left;
    char ch1, ch2;
    while (scanf("%c %d%c", &ch1, &right, &ch2) != EOF)
    {
      switch (ch1)
      {
        case '+':
          stack[++tail] = 1.0 * right;
          break;
        case '-':
          stack[++tail] = -1.0 * right;
          break;
        case '*':
          stack[tail] = stack[tail] * right;
          break;
        case '/':
          stack[tail] = stack[tail] / (double)right;
          break;
      }
      if (ch2 != ' ')
        break;
    }
    for (i = 0; i <= tail; i ++)
    {
      result += stack[i];
    }
    printf("%.2lf\n", result);
  }
  return 0;
}
