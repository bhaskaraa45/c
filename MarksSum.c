#include<stdio.h>

int main(){
int numStd ,ans=0;


scanf("%d",&numStd);
//printf("%d",numStd);

int marks[numStd];


for (int i = 0; i < numStd; i++)
{
    scanf("%d",&marks[i]);
}
getchar();
char gender=getchar();
if (gender=='b')
{
    for (int j = 0; j < numStd/2; j++)
    {
        ans=ans+marks[2*j];
    }
}

else if(gender=='g'){
    for (int k = 1; k <= numStd/2; k++)
    {
        ans=ans+marks[2*k-1];
    }
    

}

printf("%d",ans);
    return 0;
}