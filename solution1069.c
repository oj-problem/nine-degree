/**
 * Nine degree problem 1069: Find detail student message
 * Use Linked list data structure
 *
 * hellfire (asyncloading#163.com)
 * Jan 19th, 2016
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/* Students structure. */
typedef struct student {
  char num[2];         /* Student's number */
  char name[10];       /* Student's name */
  char gender[2];      /* Student's gender */
  int age;             /* Student's age */
  struct student *next;       /* Pointer field */
} student;

int main(int argc, char** argv)
{
  int n;
  while(scanf("%d", &n) != EOF)
  {
     /* Build linked list */
     int i;
     student *head, *p, *q;     
     head = (student *)malloc(sizeof(student));

     p = head;

     for (i = 0; i < n; i ++)
     {
       q = (student *)malloc(sizeof(student));
       /* Get user input */
       scanf("%s", q -> num);
       scanf("%s", q -> name);
       scanf("%s", q -> gender);
       scanf("%d", &(q -> age));
       p -> next = q;
       q = p;
     }
     /* Last Node pointes to NULL */
     p -> next = NULL;

     /* Linked list search */
     int m;
     int j;
     char str[2];         /* Search number. */
     scanf("%d", &m);
     for (j = 0; j < m; j ++)
     {
       scanf("%s", str);
       /* Traverse linked list */
       while (head -> next != NULL)
       {
         printf("%s", head -> next -> num); 
         if (strcmp(head -> next -> num, str) == 0)
         {
           printf("%s %s %s %d\n", head -> next -> num, head -> next -> name, head -> next -> gender, head -> next -> age);
         }
         head = head -> next;
       }
     } 
  }
  return 0;   
}
