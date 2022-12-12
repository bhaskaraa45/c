#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n , i=0;
    printf("Enter n : \n");
    scanf("%d", &n);

    while ( i <= n )
    {
        printf("%d\n", i);
        i++;
    }
    // for(int i = 0;i<= n ; i++){
    //     printf("%d\n", i);
    // }
    

    return 0;
}
