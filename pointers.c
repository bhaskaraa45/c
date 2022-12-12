#include <stdio.h>


int main(){
int i=5;
int *ptr = &i;
int **pptr = &ptr;

printf("%d\n",*ptr); // value : i=5
printf("%d\n",*pptr); // this one is adress
printf("%d\n",**pptr); // i=5



  return 0;  
}