#include <stdio.h>

int sum(int a , int b);
void printTable(int n);

int main(){
  int a , b , n;
  // printf("enter first number : ");
  // scanf("%d",&a);
  // printf("enter second number : ");
  // scanf("%d",&b);
  // int s = sum(a , b);
  // printf("sum is %d ", s);


  printf("enter number : \n");
  scanf("%d", &n);

 printTable(n); // here n is argument/actual parameter

  return 0;  
} 
  
  int sum(int x , int y){
    return x+y;
  }

  void printTable(int n) { // here n is parameter/formal parameter
    for(int i =1 ; i<=10 ; i++){
      printf("%d X %d = %d\n ", n , i , n*i);
    }
  }