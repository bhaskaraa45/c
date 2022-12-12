#include<stdio.h>

int main(){

int a ,b,c,d,e;
printf("enter 1st integer : ");
scanf("%d",&a);
printf("enter 2nd integer : ");
scanf("%d",&b);
printf("enter 3rd integer : ");
scanf("%d",&c);
printf("enter 4th integer : ");
scanf("%d",&d);
printf("enter 5th integer : ");
scanf("%d",&e);

if (a<=0 || b<=0 || c <= 0|| d<=0 || e<=0)
{
    printf("Wrong Input");
}
else{
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
    
}

    return 0;
}