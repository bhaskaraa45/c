#include<stdio.h>



int main(){
    int n,array[3] , count=0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &array[0],&array[1],&array[2]);
        while (array[0]!=0 && array[0]!=1 )
        {
            printf("please enter right input (0 or 1) : ");
            scanf("%d",&array[0]);
        }
        while (array[1]!=0 && array[1]!=1 )
        {
            printf("please enter right input (0 or 1) : ");
            scanf("%d",&array[1]);
        }
        while (array[1]!=0 && array[1]!=1 )
        {
            printf("please enter right input (0 or 1) : ");
            scanf("%d",&array[1]);
        }

    
    if (array[0]==1 && array[1]==1)
    {
        count = count +1;
    } else if (array[0]==1 && array[2]==1){
        count++;
    } else if (array[1]==1 && array[2]==1)
    {
        count++;
    }
    }

    printf("%d",count);
    
    return 0;
}