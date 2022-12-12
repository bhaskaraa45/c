#include<stdio.h>

int main(){
    int a,b,c,d,e,f,g;

    //input
    printf("enter 1st integer : ");
    scanf("%d",&a);
    while (a<=0)
{
    printf("Please enter valid input (integer > 0) :");
    scanf("%d",&a);
}
    printf("\nenter 2nd integer: ");
    scanf("%d",&b);
    while (b<=0)
{
    printf("Please enter valid input (integer > 0) :");
    scanf("%d",&b);
}
     printf("\nenter 3rd integer: ");
    scanf("%d",&c);
    while (c<=0)
{
    printf("Please enter valid input (integer > 0) :");
    scanf("%d",&c);
}
     printf("\nenter 4th integer: ");
    scanf("%d",&d);
    while (d<=0)
{
    printf("Please enter valid input (integer > 0) :");
    scanf("%d",&d);
}
     printf("\nenter 5th integer: ");
    scanf("%d",&e);
    while (e<=0)
{
    printf("Please enter valid input (integer > 0) :");
    scanf("%d",&e);
}
//for max
int max;
max = a;
if (b>max)
{
    max = b;
}
 if (c > max)
{
    max = c;
} 
if (d > max)
{
    max = d;
}
 if (e>max)
{
    max =e;
}

printf("Maximum = %d\n",max); //max output
//min
int min;
min = a;
if (b<min)
{
    min = b;
}
 if (c < min)
{
    min=c;
}
if (d < min)
{
    min=d;
}
if (e<min)
{
    min=e;
}
 
 printf("Minimum = %d\n",min); //min output
 float avg,sum;
 sum = (a+b+c+d+e);
 avg=sum/5;
printf("Average = %.2f",avg); //average
    return 0;
}