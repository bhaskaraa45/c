#include <stdio.h>

int main(){
int a,b;
char ch[9][8]={"one","two","three","four","five","six","seven","eight","nine"};
scanf("%d\n%d",&a,&b);

if (a<=b)
{   for (int n = a; n <=b; n++)
    {
        if (n<=9)
        {
            printf("%s\n",ch[n-1]);
        }
    } 

    for (int j = a; j <=b; j++)
    {
        if(j>9){ 
            if (j%2==0)
            {
                printf("even\n");
            }else{printf("odd\n");}
        
              }
    }
    


}



    return 0;
}