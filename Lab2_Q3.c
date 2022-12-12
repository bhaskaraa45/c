#include<stdio.h>

int main(){
int a,b,c,d;
float sum , avg;

printf("enter 1st integer : ");
scanf("%d",&a);
while (a<=0)
{
    printf("Please enter valid input (integer > 0) :");
    scanf("%d",&a);
}


printf("enter 2nd integer : ");
scanf("%d",&b);
while (a<=0)
{
    printf("Please enter valid input (integer > 0) :");
    scanf("%d",&a);
}


printf("enter 3rd integer : ");
scanf("%d",&c);
while (a<=0)
{
    printf("Please enter valid input (integer > 0) :");
    scanf("%d",&a);
}


//maximum
a > b ? (a > c ? printf("Maximum Number = %d",a): printf("Maximum Number = %d",c)) : (b > c ? printf("Maximum Number = %d",b) : printf("Maximum Number = %d",c));
  
  printf("\n");

//minimum
a < b ? (a < c ? printf("Minimum Number = %d",a) : printf("Minimum Number = %d",c)) :( b < c ? printf("Minimum Number = %d",b) : printf("Minimum Number = %d",c));

//average
sum = a+b+c;
avg= sum/3;
printf("\nAverage = %.2f", avg);

return 0;
}