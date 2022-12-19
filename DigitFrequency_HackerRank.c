#include<stdio.h>
#include<string.h>


int main(){
char num[1000];
fgets(num , 1000,stdin); //scanf("%s",&num);

int l =strlen(num);
int arr[10] ,count[10];
int A[l];

for (int i = 0; i < 10; i++)
{
    count[i]=0;

    for (int j = 0; j<l; j++)
    {   A[j]=num[j];
        if (A[j]==48+i)
        {
            arr[i]=num[j];
            count[i]++;
        }
        
    }
    
}


for (int i = 0; i < 10; i++)
{
    printf("%d ",count[i]);
}


    return 0;
}