
#include <stdio.h>
#include <math.h>

int main() {
    int x,y;
    printf("enter base");
    scanf("%d",&x);
    printf("enter index");
    scanf("%d",&y);
   int power = pow(x,y);

printf("answer : %d" , power );


    return 0;
}