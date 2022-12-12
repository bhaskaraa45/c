#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


int maximum(int n, int k );
  int min(int n , int k);


int main() {
    int n, k ,a , b , x , y , j;
  
    scanf("%d %d", &n, &k);
   a =  maximum(n, k);
   b = min(n , k);
   for(int i = 1 ; i <= b   ; i++ ){
    for ( j = 1; j > i && j <=a  ; j++);
    { 
        printf("%d", j);
    //     printf (" a = %d , b = %d\n",  , j );
    }
    
   

    //    printf("a & b = %d\n", x&b) ;  printf("a | b = %d\n", x|b) ;  printf("a ^ b = %d\n", x^b);  
   
   }
    
    return 0;
}

int maximum(int n, int k  ){int x ;
    if (n>k){x = n;}
    else { x  = k ;}
    return x ;   
}

int min(int n , int k){int y ;
    if (n>k){y = k;}
    else { y  = n ;}
    return y;} 
