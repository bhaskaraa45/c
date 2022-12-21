#include<stdio.h>
#include<math.h>

//value of this equation , 1 - x^2/2! + x^4/4! - .......

int fact(int n){
  
  if (n==0 || n==1)
  {
    return 1;
  }
  
  return n*fact(n-1);

}


int main(){
    int n,x;
    printf("enter x ");
    scanf("%d",&x);
    printf("enter N : ");
    scanf("%d",&n);

    float sum=0;
    for (int i =0 ; i< 2*n; i+=2)
    {
        float term = pow(-1,i/2)*pow(x,i)/fact(i);
        sum+= term;
    }
    
    printf("%f",sum);

    return 0 ;
}

