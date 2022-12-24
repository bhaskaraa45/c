#include<stdio.h>
#include<string.h>

struct Project
{
    int roll;
    char name[50];
    char gender;
    char hostel[50];
    int roomNo;
    double Phone;
    char dep[50];
    char mail[50];
    float cgpa;
    int age;
    char roomie[50];
};


int main(){
    struct Project s[35];
    int r=11001;

    for (int i = 0; i <30; i++)
    {
        s[i].roll= r+i ;

        if (i != 7 && i != 12 && i != 13 && i != 19 && i != 23 ) //bcz 8,13,14,20,24 roll ladki ki hai
        {
            s[i].gender='M' ;
            strcpy(s[i].hostel,"Ramanuja");
        
        }
        else
        {
            s[i].gender='F';
            strcpy(s[i].hostel,"Gargi");
        }

        s[i].cgpa=0;
        s[i].age=18;
        strcpy(s[i].dep , "MSME Rocks");

        
        
    }


strcpy(s[2].name , "AFSAL MAJEED");
strcpy(s[3].name , "AGAM AGARWAL");
strcpy(s[4].name , "AKSHAT JAIN");
strcpy(s[5].name , "ANAND PRAKASH");
strcpy(s[6].name , "ASHISH BHARDWAJ");
strcpy(s[7].name , "AVANTIKA VINOD NAIR");
strcpy(s[9].name , "BHASKAR MANDAL");
strcpy(s[10].name , "DASARI RAM VASANTH");
strcpy(s[11].name , "ERRARAM SAIKUMAR");
strcpy(s[12].name , "HARSHINI P DONGARWAR");
strcpy(s[13].name , "KOVOORI HARINI");
strcpy(s[14].name , "LAKSHYA SONI");
strcpy(s[15].name , "MEKALA VARDHAN KUMAR");
strcpy(s[16].name , "NAMAN PREET SINGH");
strcpy(s[17].name , "OMKAR SANDEEP KHILARI");
strcpy(s[18].name , "PARTH YOGESH BEDARKAR");
strcpy(s[19].name , "RELANGI TEJASRI");
strcpy(s[20].name , "S SATHYANARAYAN");
strcpy(s[21].name , "SATYAM VERMA");
strcpy(s[23].name , "SINGAL REDDY RISHITHA");
strcpy(s[24].name , "SONAWANE YASH NILESH");
strcpy(s[25].name , "SYED MISHAAL");
strcpy(s[26].name , "Tanishq Bhattacharjee");
strcpy(s[27].name , "V VENKATA ABHIRAM");
strcpy(s[28].name , "VINEETH VANUKURU");
strcpy(s[29].name , "VISHNU PRASANNAN");



s[2].roomNo = 52;
s[3].roomNo =46;
s[4].roomNo =51;
s[5].roomNo =56;
s[6].roomNo =46;
s[7].roomNo =00;
s[9].roomNo =56;
s[10].roomNo =49;
s[11].roomNo =55;
s[12].roomNo =00;
s[13].roomNo =00;
s[14].roomNo =49;
s[15].roomNo =57;
s[16].roomNo =47;
s[17].roomNo =51;
s[18].roomNo =54;
s[19].roomNo =00;
s[20].roomNo =52;
s[21].roomNo =53;
s[23].roomNo =00;
s[24].roomNo =54;
s[25].roomNo =48;
s[26].roomNo =53;
s[27].roomNo =57;
s[28].roomNo =55;
s[29].roomNo =47;



s[2].Phone = 8075134046;
s[3].Phone = 9458426263;
s[4].Phone = 7489852277;
s[5].Phone = 7352891197;
s[6].Phone = 9525161865;
s[7].Phone = 1234567890;
s[9].Phone = 9647598624;
s[10].Phone = 8310397068;
s[11].Phone = 7382678737;
s[12].Phone = 1234567890;
s[13].Phone = 1234567890;
s[14].Phone = 8882230055;
s[15].Phone = 7095740669;
s[16].Phone = 9910349957;
s[17].Phone = 9021608100;
s[18].Phone = 9960198765;
s[19].Phone = 1234567890;
s[20].Phone = 9176624679;
s[21].Phone = 8209691279;
s[23].Phone = 1234567890;
s[24].Phone = 9604383390;
s[25].Phone = 7418595805;
s[26].Phone = 7987625669;
s[27].Phone = 7416270704;
s[28].Phone = 9493201581;
s[29].Phone = 7208166680;



int input,pd_45,temp;
double pd_num;
char pd_nam,pd_sym,pd_A1 ,pd_A2;
char str[10];

printf("Enter Your Roll Number : MS22BTECH");
scanf("%d",&input);

while (input==11001||input==11002||input==11009||input==11023)
{
    printf("bhag gaya hai woh , input apna roll number : MS22BTECH");
    scanf("%d",&input);
}

if (input<11001 || input>11030)
{
    printf("This Roll Number does not exists !!");
}

else
{
    
    int index = input - 11001;
    char FirstCh;


    if (index !=10 && index !=11 && index !=13 && index !=15 && index !=19 && index !=23 && index !=24 && index !=27 )
    {
       FirstCh = s[index].name[0];
    }

    else
    {
        switch (index)
        {
        case 10: FirstCh = 'R';
            break;
        case 11: FirstCh = 'S';
            break;
        case 13: FirstCh = 'H';
            break;
        case 15: FirstCh = 'V';
            break;        
        case 19: FirstCh = 'T';
            break;
        case 23: FirstCh = 'R';
            break;
        case 24: FirstCh = 'Y';
            break;
        case 27: FirstCh = 'A';
            break;

        default:
            break;
        }
    }



    printf("\nPassword hint : <ph><names first letter>@AA45\n");


    printf("\nOnly 4 Trial available\nEnter Password : ");
    scanf("%lf%c%s",&pd_num,&pd_nam,&str);


    int cmp = strcmp("@AA45",str);
   
   
    int i=3;
    while( (pd_num != s[index].Phone || pd_nam != FirstCh || cmp !=0 ))
    {
        
        printf("\nPassword did not matched !\nPlease Enter correct password (only %d trial left) : ",i);
        scanf("%lf%c%s",&pd_num,&pd_nam,&str);
        i--;
        cmp = strcmp("@AA45",str);

       if (i==0)
       {
        break;
       }
        

    }
    

        if (pd_num == s[index].Phone && pd_nam==FirstCh && cmp==0)
        {
                for (int j = 0; j < 30; j++)
                {
                    if (s[index].roomNo==s[j].roomNo && index!=j && s[index].roomNo!=0)
                    {
                            strcpy(s[index].roomie,s[j].name);
                            temp = j;

                    }
                    
    
                }
        
        printf("\nWELCOME %s, \n",s[index].name);
        printf("\nRoll Number\t: %d\n",s[index].roll);
        printf("Gender\t\t: %c\n",s[index].gender);
        printf("Deparment\t: %s\n",s[index].dep);
        printf("CGPA\t\t: %.2f\n",s[index].cgpa);
        printf("Hostel\t\t: %s\n",s[index].hostel);
        printf("Room No.\t: %d\n",s[index].roomNo);
        printf("Room mate\t: %s\n",s[index].roomie);
        printf("\nContacts:\n");
        printf("\n\tPhone Number\t  : %.0lf\n",s[index].Phone);
        printf("\tInstitute Mail Id : ms22btech%d@iith.ac.in\n",s[index].roll);
        printf("\tRoom Mate's PH\t  : %.0lf\n",s[temp].Phone);


        }
        else 
        {

            printf("\nWrong Password ! Your I'd is locked please contact with Administrator.");
        
        }
        
}

    return 0;
}
