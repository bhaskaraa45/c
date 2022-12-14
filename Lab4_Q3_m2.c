#include <stdio.h>
int main() {
  int reversed = 0, remainder, original;
  //input
    printf("Enter an integer: ");
    scanf("%d", &original);

    //stored in other var 
    int og=original;
    int input = original;

    int n=1;
    int i;
    for (i=original;i!=0 ; i/=10)
    {
        n*=10;
    }
    n/=10;  //n is 'count digit' smallest number , for count=3 , n=100
    


        int temp=n;
    for ( i=10 ;i<=n; i*=10)
    {
        remainder= og%10;
        og = og/10;
        reversed += remainder*temp;
        temp /= 10;
    }
   
reversed=reversed+og;


if (input == reversed)
{
    printf("%d is palindrome",input);
}
else{
    printf("%d is NOT-palindrome",input);
}

    return 0;
}
