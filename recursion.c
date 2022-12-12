#include <stdio.h>

void printHey(int count);

int main(){
  printHey(5);
  return 0;  
} 
 
 void printHey(int count){
  if(count == 0 ){
    return;
  }
  printf("Hey\n");
  printHey(count-1);
  
  
 }
