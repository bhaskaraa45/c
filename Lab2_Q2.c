#include<stdio.h>

void MaxNum(int array[],int n); //maximum function declare
void MinNum(int array[],int n); //min fn declare


int main(){
int array[5] ;
float sum = 0.0 , avg;

//input
for (int i = 0; i < 5; i++)
{ printf("enter integer number %d : ",i+1);
    scanf("%d",&array[i]);
   
     while(array[i]<=0) {
    printf("Please enter a valid input for 'integer number %d' : ",i+1);
    scanf("%d",&array[i]);
   }

sum =sum+array[i];
} 
avg = sum/5;

//output
MaxNum(array,5); // max function call
printf("\n");
MinNum(array,5); //min fn call
printf("\n");
printf("Average = %.2f", avg);

    return 0;
}

void MaxNum(int array[],int n ){ //maximum function definition
int Maximum = array[0];
    for(int i=0; i < n ; i++){
        
        if(array[i] > Maximum)   //if-else statement
       { Maximum= array[i]; }

    }
    printf("Maximum number = %d", Maximum);
}

void MinNum(int array[],int n){ //Min fn def.
    int Min = array[0];
    for (int i = 0; i < n; i++)
    {
        if(Min > array[i]){  //if-else
            Min = array[i];
        }
    }
    printf("Minimum Number = %d",Min);
}