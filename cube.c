#include <stdio.h>
#include<math.h>
int main() {

    int n;
    printf("enter number : ");
    scanf("%d", &n);

    printf("cube of its is : %d \n", n*n*n);
    printf(" %.0f\n ", pow(n,3)); // same 


    return 0;
}