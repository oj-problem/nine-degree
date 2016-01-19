/**
 * Nine degree problem 1181: linked list sort.
 *
 * hellfire (asyncloading#163.com)
 * Jan 18th, 2016 
 */
#include<stdio.h>
#include<stdlib.h>

typedef struct node {
  int data;                /* Data field */
  struct node *next;              /* Pointer field */

}node;

int main(int argc, char** argv)
{
  int n;

  while (scanf("%d", &n) != EOF)
  {
    int arr[1000];

    int i;
    int j;
    for (i = 0; i < n; i ++)
    {
      scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i ++)
    {
      for (j = 0; j < i; j ++)
      {
        int tmp;
        if (arr[i] < arr[j])
        {
          tmp = arr[j];
          arr[j] = arr[i];
          arr[i] = tmp;
        }
      }
    }
    
    // Build a linked list.
    node *head, *p, *q;
    head = (node *)malloc(sizeof(node));
    p = head; 

    for (i = 0; i < n; i ++)
    { 
      q = (node *)malloc(sizeof(node));
      q -> data = arr[i];
      p -> next = q;
      p = q;
    }

    p -> next = NULL;

    // Traversal linked list
    while (head -> next != NULL)
    {
      if (head -> next -> next == NULL)
      {
        printf("%d\n", head->next->data);
      }
      else
      {
        printf("%d ", head->next->data);
      }

      head = head -> next;
    }   
  }
}
