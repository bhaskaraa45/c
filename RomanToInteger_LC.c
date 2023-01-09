#include<stdio.h>
#include<string.h>


int romanToInt(char s[]){
    int l=strlen(s)-1;

    int ret[l];
    for (int m = 0; m < l; m++)
    {
         if (s[m]=='I')
    {
        ret[m]= 1;
    } else if (s[m]=='V')
    {
        ret[m]= 5;
    } else if (s[m]=='X')
    {
        ret[m]= 10;
    } else if (s[m]=='L')
    {
        ret[m]= 50;
    } else if (s[m]=='C')
    {
        ret[m]= 100;
    } else if (s[m]=='D')
    {
        ret[m]= 500;
    } else if (s[m]=='M')
    {
        ret[m]= 1000;
    } 
    }
    


	


	if(l>1){
	int ans1=0,ans2=0;int x=0 , y=0;
    int ans;

   
    for (int i = 0; i < l-1; i++)
    {
         x=ret[i];
         y=ret[i+1];
        if (ret[i] < ret[i+1]){
            ans1=ans1 - x;
        }
        if (ret[i] >= ret[i+1])
        {
            ans2=ans2 + x;
        }
    }
 
    ans=ans1+ans2+ ret[l-1];
    return ans;
} else{return ret[0];}
}
int main(){
    char s[10];
    fgets(s,10,stdin);
   
   printf("%d",romanToInt(s));
   
    return 0;
}