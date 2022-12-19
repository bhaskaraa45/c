#include<stdio.h>

int fiboSeq(int n); //function 1
int termMatching(int x,int y); //function 2 for term matching 
void printTerm(int m , int n); //function 3 to print all the term b/w the given numbers (if they are matched with fibonacci seq. terms)

int main(){
    int num1,num2,greater,smaller;

//input
printf("enter a number (greater than 1) : ");
scanf("%d",&num1);
printf("now enter the another number (greater than 1) : ");
scanf("%d",&num2);

    if(num1>=num2){
        greater=num1;
        smaller=num2;
    } 
    else{
        greater=num2;
        smaller=num1;
    }


    int temp = termMatching(smaller,greater); //calling function 2
    if (temp!=0)
    {   
        printf("\nThe terms b/w %d & %d : \n",smaller,greater);
        printTerm(smaller,greater); //calling function 3
    }
    else
    {
        printf("Wrong Input or Terms not matched !");
    }
    
    return 0;
}

//define function 1
int fiboSeq(int n){
    if(n==1){return 1;}
    else if(n==0){return 0;}

    return fiboSeq(n-1)+fiboSeq(n-2);
}

//define function 2
int termMatching(int x,int y){
    int temp;
    int count1=0,count2=0;
    if (x<=1 || y<=1)
    {
        return 0;
    }

    int i=2;
    while (1)
    {
        if(x==fiboSeq(i)){ //calling function 1
            count1=i;
        }

        if(y==fiboSeq(i)){ //calling function 1
            count2=i;
            break;
        }
        i++;
    }
    if (count1!=0 && count2!=0)
    {
        return 1;
    }
    else {return 0;}
}


//define function 3
void printTerm(int m,int n){
    int count1,count2 ;
    int i=2;
    while (1)
    {
        if(m==fiboSeq(i)){  //calling function 1
            count1=i;
        }

        if(n==fiboSeq(i)){  //calling function 1
            count2=i;
            break;
        }
        i++;
    }

    for (int j = count1; j <= count2; j++)
    {
        printf("%d\t",fiboSeq(j));  //calling function 1
    }   
}