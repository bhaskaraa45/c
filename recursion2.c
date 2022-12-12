#include <stdio.h>

int sum(int n);

int main(){
  int n;
  printf("enter n : \n");
  scanf("%d", &n);
  printf("sum of first %d numbers is : %d ", n , sum(n));

  return 0;  
} 
 
int sum(int n){ 
  if(n == 1){  // base case
  return 1;
}

return sum(n-1)+ n ;  
  
 }
