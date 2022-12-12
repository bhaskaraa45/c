#include<stdio.h>
#include<string.h>

/*
//define
struct student
{
    char name[50];
    int roll;
    float cgpa;
};


int main(){
    struct student s1;
    
    strcpy(s1.name,"Bhaskar");
    s1.cgpa=8.9;
    s1.roll=11010;

    //struct student s1={"Bhaskar",11010,8.9};
    

    // printf("%f\n",s1.cgpa);    
    // printf("%d\n",s1.roll);
    // printf("%s\n",s1.name);
    

   //array of structure
    // struct student MSME[26];

    // strcpy(MSME[0].name,"Bhaskar");
    // MSME[0].cgpa=8.9;
    // MSME[0].roll=11010;

    // printf("%f\n",MSME[0].cgpa);    
    // printf("%d\n",MSME[0].roll);
    // printf("%s\n",MSME[0].name);



//pointer to structure

struct student *ptr=&s1;

    // printf("%f\n",(*ptr).cgpa);    
    // printf("%d\n",(*ptr).roll);
    // printf("%s\n",(*ptr).name);
    
    //or

    // printf("%f\n",ptr->cgpa);    
    // printf("%d\n",ptr->roll);
    // printf("%s\n",ptr->name);
    

    return 0;
}
*/


//typefed=short term karna
typedef struct MaterialScienceAndMetallurgicalEngineering
{
    char name[50];
    int roll;
    float cgpa;
}msme;

int main(){
msme ms1= {"Bhaskar ",11010,8.9};

printf("name = %s\n",ms1.name);
printf("roll= %d\n",ms1.roll);
printf("cgpa = %f\n",ms1.cgpa);
    return 0;
}





