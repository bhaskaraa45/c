#include<stdio.h>

int main()
{
   int marks;
   printf("enter your marks (0-100) : ");
   scanf("%d", &marks);

   if (marks>30 && marks <=100) {
    printf("YOU ARE PASSED");
   }
   else if (marks <=30 && marks>=0) {
    printf("SORRY BETTER LUCK NEXT TIME");
   }
   else {
    printf("YOU ENTERED WRONG MARKS");
   }

/* this is also same work ... and yeah this is smaller 
 marks > 100 ?  printf("wrong marks" ) : marks <= 0 ? printf("wrong marks" ) : marks <= 30 ? printf("FAil\n") : printf("pass"); ;
*/


return 0;
}