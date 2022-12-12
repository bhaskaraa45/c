#include <stdio.h>

int main(){
	int marks , b ,c,d;
	printf("enter your number : \n");
	scanf("%d", &marks);

	//method_1
	
	
	 if(marks>95){
		printf("Your grade is : A+");
	}
	else if (marks>90 && marks<=95){
		printf("Your grade is : A");
	} 
	else if (marks>80 && marks<=90){
                printf("Your grade is : A-");
        } 
	else if (marks>70 && marks<=80){
                printf("Your grade is : B");
        }       
	else if (marks>60 && marks<=70){
                printf("Your grade is : B-");
        }
	else if (marks>50 && marks<=60){
                printf("Your grade is : C");
        }
        else if (marks>40 && marks<=50){
                printf("Your grade is : C-");
        }       
	else if (marks>30 && marks<=40){
                printf("Your grade is : D");
        }
	else{
                printf("Your grade is : F");}
        
        
        
        //method_2
        //ternary
        
       // marks> 95 ? printf("Your grade is : A+") : marks > 90 ? printf("Your grade is : A") : marks > 80 ? printf("Your grade is : A-") : marks > 70 ? printf("Your grade is : B") : marks > 60 ? printf("Your grade is : B-") : marks > 50 ? printf("Your grade is : C") : marks > 40 ? printf("Your grade is : C-") : marks > 30 ? printf("Your grade is : D") : marks >=0 ? printf("Your grade is : F") : printf("Wrong Input") ;
               
 return 0;
 }