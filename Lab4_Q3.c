#include <stdio.h>
//check palindrome number

int main() {
  int n, reversed ,og;
    printf("Enter an integer: ");
    scanf("%d", &n);
    og = n;
    reversed=0;
    int remainder;
    
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 +remainder ;
        n /= 10;
    }

    
    if (og == reversed)
        printf("%d is a palindrome number",n);
    else
        printf("%d is a NOT-palindrome number",n);

    return 0;
}
