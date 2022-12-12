#include <stdio.h>

void printHello(); //Function prototype/declearation
void printGoodbye();

int main(){
printHello(); //function call
 printGoodbye();
  return 0;  
}

void printHello(){ /*function defination*/
  printf("Hello\n");
}
 
 void printGoodbye(){
  printf("Good Bye\n");
 }