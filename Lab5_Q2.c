#include<stdio.h>

//function declare
int fiboSeq(int n); //function 1
int termMatching(int x,int y); //fn2
int checkingPalindrome(int n); //fn3
void print(int m,int n); //fn4

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


    int temp = termMatching(smaller,greater); //call fn2
    if (temp!=0)
    {   
        printf("\nThe terms b/w %d & %d which are palindrome : \n",smaller,greater);
        print(smaller,greater); //call fn4
    }
    else
    {
        printf("Wrong Input or Terms not matched !");
    }
    
    
    return 0;
}

//define fn1
int fiboSeq(int n){
    if(n==1){return 1;}
    else if(n==0){return 0;}

    return fiboSeq(n-1)+fiboSeq(n-2);
}

//define fn2
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

//define fn3
int checkingPalindrome(int n){
    int a=1;
    int og=n;
    for (int i = n; i!=0; i/=10)
    {
        a*=10;
    }
    a=a/10;
    int temp=a,rem,rev=0;
    int multi=a;
    for (int j = 1; j <=a; j*=10)
    {
       rem= n%10;
       rev= rev+ rem*multi;
       n=n/10;
       multi = multi/10;
    }
       if (rev==og)
    {
    return 1;
    }else{
        return 0;
    }  
}

//define fn4
void print(int m,int n){
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
        int var=checkingPalindrome(fiboSeq(j));
        if (var!=0)
        {
            printf("%d\t",fiboSeq(j));
        }
        
    }   
}