#include<stdio.h>
#include<math.h>


int main(){

int n;
scanf("%d",&n);

for (int i = 1; i < 2*n; i+=2)
{
  for (int j = i; j <2*(n-1) ; j+=2)
  {
    printf(" ");
  }

  for (int k = 1; k <=i; k++)
  {
    printf("*");
  }
  

  printf("\n");
}

    return 0 ;
}

