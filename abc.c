#include <stdio.h>

int main(){
 int a , b;

 printf("Did you passed Science exam ? if yes then press 1 otherwise enter any digit\n");
 scanf("%d",&a);
 printf("Did you passed Math exam ? if yes then press 1 otherwise enter any digit\n");
 scanf("%d", &b);

 if (a == 1 && b!=1)
 {
    printf("Congratulations you qualified Science exam and the prize is Rs. 15\n");
 } else if (a!=1 && b == 1){
    printf("Congratulations you qualified Math exam and the prize is Rs. 15\n");
 } else if( a== 1 && b==1){
    printf("You qualified BOTH the exams so congratulations and the porize is Rs 45\n");

 } else {printf("YOU FAILED BOTH THE EXAMS !\n");}
 

}