/**
 * Nine degree problem 1121: Upper case letter first character.
 *
 * hellfire(asyncloading#163.com)
 * Jan 15th, 2016
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int is_space(char ch);

int main(int argc, char** argv)
{
  char str[101];

  while(gets(str))
  {
    int i;
    int len = strlen(str);

    // Handle first character.
    if (str[0] >= 'a' && str[0] <= 'z')
    {
      str[0] += 'A' - 'a';
    } 

    for (i = 0; i < len; i ++)
    {
      if( is_space(str[i]) && str[i + 1] >= 'a' && str[i + 1] <= 'z')
      {
        str[i + 1] += 'A' - 'a';
      }
    }
    puts(str);
    memset(str, '\0', sizeof(str));
  }
}

/**
 * Judge a character is space or not.
 */
int is_space(char ch)
{
  if (ch == ' ' || ch == '\t' || ch == '\r' || ch == '\n')
  {
    return 1;
  } else
  {
    return 0;
  }
}
