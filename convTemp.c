#include <stdio.h>

float conv_Temp(float celsius);

int main(){
  float c;
  printf("enter temperature in celcius : \n");
  scanf("%f",&c);

  printf("%.0f dgree celsius = %.1f degree fahrenheit\n",c , conv_Temp(c) );
  return 0;  
} 

float conv_Temp(float celsius){
  float f = celsius * 1.8 + 32;
  return f;
}
 
