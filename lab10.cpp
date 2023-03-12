/*#include<stdio.h>
   
int main()
{
      int n, i, j, num = 1, space;
      printf("Enter size:");
      scanf("%d", &n);
   
      space = n - 1; //space is evaluated till the second last row
   
      for (i = 1 ; i<= n ; i++)
      {
          num = i; // num=1,2,3,4,...,n
   
          for (j=1 ; j<=space ; j++ )
              printf(" "); //prints space  
   
          space --; //decrements space for next iteration
   
          for (j=1 ; j<=i ; j++)
          {
              printf("%d", num);
              num++;
          }
          num--;
          num--;
          for (j= 1 ; j<i ; j++) 
          {
              printf("%d", num);
              num--;
          } 
          printf("\n");
   
      }
   
      return 0;
}*/