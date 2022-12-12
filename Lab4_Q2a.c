#include<stdio.h>
//fibonacci sequence ... its only valid till n=46 (bcz of int size)

int main(){
int n;
printf("enter n : ");
scanf("%d",&n);
int t=0,t1=1,t2=1;

if(n==1){
    printf("1");
}
else if (n==2)
{
    printf("1\t1");
}
else if(n>2){
printf("1\t1\t");

for (int i = 3; i <= n; i++)
{
    t=t1+t2;
    t2=t1;
    t1=t;
    printf("%d\t",t);
}

}


    return 0;
}
