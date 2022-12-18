#include<stdio.h>

int fiboSeq(int n);
int termMatching(int x,int y);
void printTerm(int m , int n);

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


    int temp = termMatching(smaller,greater);
    if (temp!=0)
    {
        printTerm(smaller,greater);
    }
    else
    {
        printf("Wrong Input or Terms not matched !");
    }
    
    return 0;
}


int fiboSeq(int n){
    if(n==1){return 1;}
    else if(n==0){return 0;}

    return fiboSeq(n-1)+fiboSeq(n-2);
}

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
        if(x==fiboSeq(i)){
            count1=i;
        }

        if(y==fiboSeq(i)){
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


void printTerm(int m,int n){
    int count1,count2 ;
    int i=2;
    while (1)
    {
        if(m==fiboSeq(i)){
            count1=i;
        }

        if(n==fiboSeq(i)){
            count2=i;
            break;
        }
        i++;
    }

    for (int j = count1; j <= count2; j++)
    {
        printf("%d\t",fiboSeq(j));
    }   
}