#include<stdio.h>

int main() {
// {
    int age;
    printf("enter age\n");
    scanf("%d", &age);

//     if (age >= 18) {
//     printf("Adult\n");
//     }
//     else if ( age >= 13 && age < 18) {
//     printf("teenager\n");
    
//     `}
// else{
//     printf("Child");
// }
   
   age >= 18 ? printf("adult") : age >= 13 && age <18 ? printf("teenager") : age < 13 && age >= 0 ? printf("child") : printf("wrong input") ;


    return 0;
}