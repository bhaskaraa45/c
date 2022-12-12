#include <stdio.h>
#include <math.h>

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a , float b );

int main(){
  float side , rad , a , b;

  printf("enter side of square : \n");
  scanf("%f",&side);
printf (" area of square is : %.2f\n", squareArea(side));

printf("enter radius of the circle : \n");
scanf("%f", &rad);
printf("area of the circle is : %.2f\n", circleArea(rad));

printf("enter sides of rectangle : \n");
scanf ("%f %f", &a , &b);

printf("area of the rectangle is : %.2f", rectangleArea(a,b) );


  return 0;  
} 
 
 float squareArea(float side){
  return pow(side,2);
 }

 float circleArea (float rad ) {
 return 3.14 * pow(rad ,2);
 }

 float rectangleArea(float a , float b ){
  return a*b;
 }
