/**
 * Nine degree problem 1108: Stack problem.
 *
 * hellfire (asyncloading#163.com)
 * Jan 16th, 2016
 */

#include<stdio.h>

int main(int argc, char** argv)
{
  int n;
  
  while (scanf("%d", &n) != EOF && n)
  {
    /* Three kinds of action. */
    /* A: ask the top of stack */
    /* O: pop */
    /* P: push element to stack */
 
    char ch[10];
    int stack[10000];
    int top = -1;     /* Stack position mark */
    int i;

    for (i = 0; i < n; i ++)
    { 
      scanf("%s", ch);
      if (ch[0] == 'P')
      {
        /* Reads another number, and push to stack .*/
        int num;
        scanf("%d", &num);
        top ++;
        stack[top] = num; 
      }
      else if (ch[0] == 'O')
      {
        if (top != -1)
        {
          top --;
        }
      }
      else if (ch[0] == 'A')
      {
        if (top != -1)
        {
          printf("%d\n", stack[top]);
        } else
        {
          printf("E\n");
        }
      } 
    }
    printf("\n");       
  }  
}
