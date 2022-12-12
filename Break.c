#include <stdio.h>


int main()
{
  int n;

  do{ printf("enter number : ");
    scanf("%d",&n);
    printf("%d\n", n);

    if(n%2 != 0){
        break;
    }

  } while(1);
  printf("Thank You for entering odd number");
  return 0;
    
}
