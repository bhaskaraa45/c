#include<stdio.h>
#include<math.h>

//value of the series ... 9 + 99 + 999 + 9999 +....

int biggestTerm(int n){
    int a ,x=1,sum=0;
    for (int i = 0; i < n; i++)
    {
        a=9*x;
        x*=10;
        sum+=a;
    }
    return sum;
}


int main(){

int n;
scanf("%d",&n);
int ans=0;

for (int i = 1; i <= n; i++)
{
   
  int term= biggestTerm(i);
  ans += term;
}

printf("%d",ans);

    return 0 ;
}

