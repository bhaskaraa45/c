//method 1

/*#include <stdio.h>


int main()
{
int n , fact =1 ;
printf("enter number : ");
scanf("%d", &n);
for (int i =1; i<=n; i++){
  fact *= i ; //fact=fact*i
} printf("factorial is %d", fact);

  return 0;
    
} // boro number er khetre fail hoye jabe */

//method 2

#include <stdio.h>

float fact(float n);

int main (){
float n;
printf(" enter your number : \n");
scanf("%f", &n);

printf(" %.0f! = %.0f ", n , fact(n));
  return 0;
}

float fact(float n){
  if (n==1 || n== 0){
    return 1;
  }
 return fact(n-1) * n ;
}