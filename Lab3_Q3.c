#include<stdio.h>

int fact(int x);
int nCr(int n,int r);

int main(){
    int n;
    printf("enter N : ");
    scanf("%d",&n); 

    for (int i = 0; i < n ; i++)
    { 
        for (int j = 1; j <=n-i ; j++)
        {
            printf(" ");
        }

        for (int k = 0; k <=i; k++)
        {
           printf("%d ",nCr(i,k));
        }
        printf("\n");
        
    }
    
    return 0;
}

int fact(int x){
    if(x==0 || x==1){
        return 1;
    }
    return x*fact(x-1);
}

int nCr(int n,int r){
    return fact(n)/(fact(n-r)*fact(r));
}