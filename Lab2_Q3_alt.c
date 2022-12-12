#include<stdio.h>

int main(){
int a,b,c;
float sum,avg;

printf("enter 1st integer : ");
scanf("%d",&a);
printf("enter 2nd integer : ");
scanf("%d",&b);
printf("enter 3rd integer : ");
scanf("%d",&c);

a <= 0 || b<= 0 || c <= 0 ? printf("Wrong Input") : a>b ? (b > c ? printf("Maximum = %d\nMinimum = %d",a,c):a>c? printf("Maximum = %d\nMinimum = %d",a,b): printf("Maximum = %d\nMinimum = %d",c,b)) : (b>c?(a>c? printf("Maximum = %d\nMinimum = %d",b,c): printf("Maximum = %d\nMinimum = %d",b,a)): printf("Maximum = %d\nMinimum = %d",c,a));
sum = a+b+c;
avg =sum/5;
printf("\nAverage = %.2f",avg);
    return 0;
}