#include<stdio.h>
#include<string.h>

int main()
{   
 int num;
 char ch[50];
 int count;
 int x;
    
    printf("enter your number to check its palindrome or not : \n");
    scanf("%s",ch);
    count=strlen(ch);
  
    for(int j=0;j<count;j++){

            if (ch[j]==ch[count-1-j])
            {
                x=1;
            }
            else
            {
                x=0;
                break;
            }

    }

x==0? printf("false"):printf("true");
    



return 0;

}