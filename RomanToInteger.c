#include<stdio.h>
#include<string.h>

int ret(char c){
    if (c=='I')
    {
        return 1;
    } else if (c=='V')
    {
        return 5;
    } else if (c=='X')
    {
        return 10;
    } else if (c=='L')
    {
        return 50;
    } else if (c=='C')
    {
        return 100;
    } else if (c=='D')
    {
        return 500;
    } else if (c=='M')
    {
        return 1000;
    }    
}

int romanToInt(char s[]){
	int l=strlen(s)-1;


	if(l>1){
	int ans1=0,ans2=0;int x=0 , y=0;
    int ans;

   
    for (int i = 0; i < l-1; i++)
    {
         x=ret(s[i]);
         y=ret(s[i+1]);
        if (ret(s[i]) < ret(s[i+1])){
            ans1=ans1 - x;
        }
        if (ret(s[i]) >= ret(s[i+1]))
        {
            ans2=ans2 + x;
        }
    }
 
    ans=ans1+ans2+ ret(s[l-1]);
    return ans;
} else{return ret(s[0]);}
}
int main(){
    char s[10];
    fgets(s,10,stdin);
   
   printf("%d",romanToInt(s));
   
    return 0;
}