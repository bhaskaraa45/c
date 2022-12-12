#include<stdio.h>
int main(){


int t , a ,b,count[t];

scanf("%d",&t);

for(int i = 0;i < t;i++){ 
 count[i] = 0;

    scanf("%d %d",&a,&b);
while (a%b !=0)
   {
   a++;
   count[i]++;
   }

  }
    for (int i = 0; i < t; i++)
    {
      printf("%d\n",count[i]);
    }
return 0;
}