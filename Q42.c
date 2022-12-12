#include<stdio.h>

int main(){
    int n;
    int array[n];

    //input
    printf("enter size of array : ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter integer No. %d : ", i+1);
        scanf("%d",&array[i]);

    }

    for (int i = n-1 ; i >= 0 ; i--)
    {
        printf("%d\t",array[i]);
    }
    
    return 0;
}