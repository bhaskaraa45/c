#include<stdio.h>

int main()
{
    int day; // 1 mon , 2 tues .....
    char DAY;
    printf("enter day \n");
    scanf("%c",  &DAY);

    switch (DAY)
    {
    case 'm' : printf("monday\n");
        break;
    case 't' : printf("tuesday\n");
        break;
    case 'w' : printf("wednesday\n");
        break;
    case 'T': printf("thursday\n");
        break;
    case 'f' : printf("friday\n");
        break;
    case 's' : printf("saturday\n");
        break;
    case  'S' : printf("sunday\n");
        break;
    
    default: printf("not a valid day");
        
    }
   


    return 0;
}