#include<stdio.h>

int main(){
 int i , j , n ,m;
scanf("%d",&n);
scanf("%d",&m);

 for (i = 0, j=0; i < n , j > m; i++ , j--)
 {
    printf("%d\t%d\n",i,j);
 }
 


    return 0;
}