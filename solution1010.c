/**
 * Nine degree 1010 problem: calculat A + B
 * hellfire (asyncloading#163.com)
 * Jan 10th, 2016
 */

#include<stdio.h>
#include<string.h>

int atoi(char str[]);

int main(int argc, char** argv)
{
  char s[5];

  while (scanf("%s", s) != EOF)
  {
    int a, b;
    a = atoi(s);

    while (scanf("%s", s) != EOF)
    {
      char ch = s[0];

      if (ch != '+' && ch != '=')
      {
        a *= 10;
        a += atoi(s);
      } else if (ch == '+')
      {
        b = a;
        a = 0;  
      } else if (ch == '=')
      {
        break;
      }
    }
    if(a || b)
    {
      printf("%d\n", a + b);  
    }
  }  
  return 0; 
}

/**
 * string to interger
 */
int atoi(char str[])
{
  int num = 0;
  if (strcmp(str, "zero") == 0)
  {
    num = 0;
  } else if (strcmp(str, "one") == 0)
  {
    num = 1;
  } else if (strcmp(str, "two") == 0)
  {
    num = 2;
  } else if (strcmp(str, "three") == 0)
  {
    num = 3;
  } else if (strcmp(str, "four") == 0)
  {
    num = 4;
  } else if (strcmp(str, "five") == 0)
  {
    num = 5;
  } else if (strcmp(str, "six") == 0)
  {
    num = 6;
  } else if (strcmp(str, "seven") == 0)
  {
    num = 7;
  } else if (strcmp(str, "eight") == 0)
  {
    num = 8;
  } else if (strcmp(str, "nine") == 0)
  {
    num = 9;
  } else
  {
    num = -1;
  }
  return num;
}
