#include<stdio.h>

double fact(double x);
double nCr(double n,double r);

int main(){
    double n;
    printf("enter N : ");
    scanf("%lf",&n); 

    for (double i = 0; i < n ; i++)
    { 
        for (double j = 1; j <=n-i ; j++)
        {
            printf(" ");
        }

        for (double k = 0; k <=i; k++)
        {
           printf("%.0lf ",nCr(i,k));
        }
        printf("\n");
        
    }
    
    return 0;
}

double fact(double x){
    if(x==0 || x==1){
        return 1;
    }
    return x*fact(x-1);
}

double nCr(double n,double r){
    return fact(n)/(fact(n-r)*fact(r));
}