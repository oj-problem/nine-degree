/**
 * Nine degree problem 1188: Joseph ring problem.
 * Just like killing problem, each person has two state(live || die.)
 *
 * hellfire (asyncloading#163.com)
 * Jan 17th, 2016
 */





/**
 *  This general method complexicty is O(nm), Will cause Time Limte Exceed.
 *  Silly method do not recommend.....
 */

//#include<stdio.h>

//int main(int argc, char** argv)
//{
//  int n;                      /* Total number quantity.*/
//  int p;                      /* Given detail number.*/

//  int i = 0;                  /* Loop variable */
//  int num[3000] = {0};        /* IS die? 0 stands live, 1 stands die. */                   
//  int counter = 0;            /* Counter */
//  int k = 0;                  /* Die people count*/

//  while (scanf("%d %d", &n, &p) != EOF)
//  {
//    do
//    {
//      /* Mock ring, join first number and last number together. */
//      ++i;
//      if (i > n)
//      {
//        i = 1;
//      }
      
//      if (!num[i])
//      {
//        counter ++;
//      }
//      if (counter == p)
//      {
//        counter = 0;
//        printf("%d ", i);
//        num[i] = 1;
//        k ++;
//      }
//    } while (k != n);
//  }
//}
