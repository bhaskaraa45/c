#include<stdio.h>
#include<string.h>
int main(){

int n;
scanf("%d",&n);
if (n%2!=0)
{
    /* code */



int mid = n/2 +1;



   
    for (int j = 0; j < mid ; j++)
    {
        for (int k = 1+j; k < mid; k++)
        {
            printf(" ");
        }
        for (int l = 0; l <=j; l++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    
    
    for (int a = 1;a <= n-mid; a++)
    {
        for (int b = 0; b < a; b++)
        {
            printf(" ");
        }
        for (int c = a; c < mid; c++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    
}

if (n%2==0)
{
    int mid = n/2;

    for (int i = 0; i < mid; i++)
    {
        for (int k = 1+i; k < mid; k++)
        
        {
            printf(" ");
        }
        for (int j = 0; j <=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int l = 0; l < mid; l++)
    {
        for (int a =0 ; a < l; a++)
        {
            printf(" ");
        }
        for (int b = l; b < mid; b++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    
}

    



return 0;
}