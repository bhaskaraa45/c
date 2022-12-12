#include<stdio.h>

int main(){

    char ch;
    char s[50];
    char sen[500];
    scanf("%c", &ch);
    printf("%c\n", ch);

    scanf("%s", &s);
    printf("%s\n", s);

    fflush(stdin);
    fgets(sen, 500, stdin);
    printf("%s\n", sen);

    return 0;
}