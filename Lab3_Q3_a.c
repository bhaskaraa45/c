#include<stdio.h>

int main(){
    int row;
    int nCr , fact1=1,fact2=1,fact3=1;
    printf("Enter Total Row No. : ");
    scanf("%d",&row);

for (int i = 0; i < row ; i++)
    { 
        for (int j = 1; j <=row-i ; j++)
        {
            printf(" ");
        }

        for (int k = 0; k <=i; k++)
        { 
            //n!
            if(i==0 || i==1){
            fact1=1;
            } else {for (int x = 1;x<=i; x++)
            {
                fact1 *= x;
            }}

            //r!
             if(k==0 || k==1){
            fact2=1;
            } else {for (int x = 1;x<=k; x++)
            {
                fact2 *= x;
            }}

            //(n-r)!
            int y=i-k;
             if(y==0 || y==1){
            fact3=1;
            } else {for (int x = 1;x<=y; x++)
            {
                fact3 *= x;
            }}
            
            nCr = fact1/(fact2*fact3);
        printf("%d ",nCr);

        }
        printf("\n");
        
    }
    
    return 0;
}