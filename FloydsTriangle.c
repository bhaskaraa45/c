#include<stdio.h>
int main(){

   int n;
    scanf("%d", &n);

   for (int i = 3; i <= n+2; i++)
   {
    for (int j = i; j >= 3 ; j--)
     {
        if(j%2==0){
            printf("0 ");
        }

        else{
            printf("1 ");
        }
    }
    printf("\n");
   }
   


return 0;
}