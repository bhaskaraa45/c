#include <stdio.h>

int fibonacci(int n); // = 1,1,2,3,5,8,13,21


int main(){
    int n ;
printf("enetr n : \n");
scanf("%d", &n);

printf("%d term of fibonacci sequence : %d", n , fibonacci(n));


//for(int i=1 ; i<= n ; i=i + i - 1)


  return 0;  
} 

int fibonacci(int n){
  
  if (n==1){return 1;} else if (n==0) {return 0; }

  return fibonacci(n-1) + fibonacci(n-2) ;
}
 
