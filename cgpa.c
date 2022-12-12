#include<stdio.h>

int main(){
    float course,grade[15] , credit[15],totalC=0 ,  x[15],sum=0;
    printf("Enter total number of courses : ");
    scanf("%f",&course);
    
    int i=0;
    while (i<course)
    {
        printf("Enter grade : ");
        scanf("%f", &grade[i]);

        printf("enter the credit of the avobe course : ");
        scanf("%f",&credit[i]);

        totalC =totalC+ credit[i] ; //sum = sum + credit

        x[i] = grade[i] * credit[i];
        sum = sum + x[i];
    i++;
    }

  //  printf("Total credit %.0f",totalC);
    float ans = sum /totalC;
    printf("your cgpa = %.2f",ans);
    

    return 0;
}
