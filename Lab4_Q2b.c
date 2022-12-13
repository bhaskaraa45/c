#include<stdio.h>
//fibaonacci sequence ... between 2 terms 

int main(){
int num1,num2;

//input
printf("enter the smaller number(greater than 1) : ");
scanf("%d",&num1);
printf("now enter the greater one : ");
scanf("%d",&num2);



int t,t1=1,t2=1;
int count1=0,count2=0,term_num1_minus_1 ;

for (int i = 3; i <= 46; i++)
{
    t=t1+t2;
    t2=t1;
    t1=t;
    
    if (num1==t)
    {
        count1=i;
        term_num1_minus_1 = t2;
    }
    
    if (num2==t)
    {
        count2=i;
    }
    
}

if (count1!=0 && count2!=0){
    printf("terms of fibonacci sequence between %d & %d are :\n",num1,num2);
  
    printf("%d\t",num1);
    for (int i = count1+1; i <= count2; i++)
    {
        t=num1+term_num1_minus_1;
        term_num1_minus_1=num1;
        num1=t;
        printf("%d\t",t);
    }
    
}
else{
    printf("one of them or both are not belongs to fibonacci sequence");
    }


    return 0;
}
