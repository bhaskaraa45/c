#include<stdio.h>
#include<string.h>

int main(){
char str1[500];
printf("enter the sentence : ");
fgets(str1 , 500 ,stdin);
int len = strlen(str1);
int str2[len],x=0;

for (int i = 0; i < len; i++)
{ str2[i]=0;
   for (int j = 0; j < len; j++)
   {
         if (str1[i]==str1[j] & str1[i]!=' ')
        {
            str2[i]++;
        }   
   }   
}

//maximum
int max = str2[0];
for (int i = 0; i < len; i++)
{
    if (str2[i]>max)
    {
        max = str2[i];
        x = i;
    }
    
}
printf("Highest Frequency character : %c",str1[x]);
printf("%d",& Highest frequency char)

    return 0;
}