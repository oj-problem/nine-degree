/**
 * Nine degree problem 1021: count character.
 * 
 * hellfire (asyncloading#163.com)
 * Jan 11th, 2016
 */

#include<stdio.h>
#include<string.h>

int main(int argc, char** argv)
{
  char str1[6], str2[81];
  
  while (gets(str1))
  {
    if (str1[0] !=  '#')
    {
      gets(str2);
      
      int len1 = strlen(str1);
      int len2 = strlen(str2);
      
      int i;              /* Loop variable */
      int j;              /* Loop variable */
      for (i = 0; i < len1; i ++)
      {
        int count = 0;
        for (j = 0; j < len2; j ++)
        {
          if(str1[i] == str2[j])
          {
            count ++;
          }
        }
        printf("%c %d\n", str1[i], count);
      }
    } 
  }
  
  return 0;
}
