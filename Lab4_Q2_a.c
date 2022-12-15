#include <stdio.h>

int main(){
int n , a = 0 , b=1,c=0;

scanf("%d",&n);
for(int i=1;i<=n;++i){
a=b;
b=c;
c=a+b;
printf("%d\t",c);
}


return 0;
}
