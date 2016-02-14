/**
 * Nine degree problem 1069: Find detail student message
 * Use Linked list data structure
 *
 * hellfire (asyncloading#163.com)
 * Feb 14th, 2016
 */
#include<stdio.h>
#include<string.h>
#define MAX_N 1000

struct student 
{
  char num[100];
  char name[200];
  char gender[4];
  int age;
};


int main(int argc, char **argv)
{
  struct student stu_arr[MAX_N];
  int n;
  scanf("%d", &n);
  int i;
  for (i = 0; i < n; i ++)
  {
    scanf("%s %s %s %d", stu_arr[i].num, stu_arr[i].name, stu_arr[i].gender, &stu_arr[i].age);
  }
  int m;
  scanf("%d", &m);
  for (i = 0; i < m; i ++)
  {
    char num[100];
    scanf("%s", num);
    int j;
    int flag = 0;
    for (j = 0; j < n; j ++)
    {
      if (strcmp(num, stu_arr[j].num) == 0)
      {
        flag = 1;
        printf("%s %s %s %d\n", stu_arr[j].num, stu_arr[j].name, stu_arr[j].gender, stu_arr[j].age);
      }
    }
    if (!flag)
    {
      printf("No Answer!\n");
    }
  }  
}
