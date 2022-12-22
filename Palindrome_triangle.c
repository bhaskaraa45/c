#include<stdio.h>
#include<math.h>

int main(){
int n;
scanf("%d",&n);

for (int i = 2; i <= 2*n; i+=2)
{
    for (int j = i; j <2*n ; j++)
    {
        printf(" ");
    }
    
    for (int k = -i/2 ; k <= i/2; k++)
    {   
        if (k<0){
        
        printf("%d ", -1*k);
    }
      if (k>0 && k!=1){
        
        printf("%d ", k);
    }
    }printf("\n");

}



    return 0 ;
}

