#include<stdio.h>

int main(){
float g1, g2 , g3 , g4 , g5,g6,g7,g8,g9,g10;
float numerator , totalC;

printf("enter calculas1 grade : ");
scanf("%f",&g1);
printf("enter calculas2 grade : ");
scanf("%f",&g2);
printf("enter ITP grade : ");
scanf("%f",&g3);
printf("enter Maths for physics grade : ");
scanf("%f",&g4);
printf("enter Modern Physics grade : ");
scanf("%f",&g5);
printf("enter Environmental Chemistry grade : ");
scanf("%f",&g6);
printf("enter MS1210 grade : ");
scanf("%f",&g7);
printf("enter Intro to LS grade : ");
scanf("%f",&g8);
printf("enter LA grade : ");
scanf("%f",&g9);
//printf("enter  grade : ");
//scanf("%f",&g10);

numerator = g1 + g2 + (g3 * 3) + (g4 * 2) + (g5 * 2) +(g6 * 2) +(g7 * 2) + g8 + g9*2;
totalC =16;
float ans =numerator/totalC;
printf("your CGPA is = %.2f",ans);

    return 0;
}