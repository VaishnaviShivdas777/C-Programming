// Structure - Accept Details & Display Details Using Loop - With Macro - Search Specific Student.c

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Count 5

struct stud
{
        int Roll_No;
        char Name[60];
        long long int Mob_No;
        float Per;
};
    int main()
{
    struct stud std[Count];
    int i = 0, SRNO = 0;

    printf("\n Enter Student Details => ");

    for(i = 0; i < Count; i++)
    {

    printf("\n\n Enter Details Of Student For  Roll No %d => \n", i+101);

    printf("\n Enter Student Roll No %d\n",i+101);
    std[i].Roll_No = i + 101;

    fflush(stdin);

    printf("\n Enter Student Name= ");
    scanf("%[^\n]",&std[i].Name);

    printf("\n Enter Student Mobile No= ");
    scanf("%lld",&std[i].Mob_No);

    printf("\n Enter Student Percentage= ");
    scanf("%f", &std[i].Per);

    }
    getch();
    system("cls");

    for(;;)
    {
        printf("\n Enter a Roll No To Search Information= ");
        printf("\n Note : enter Zero Or -Ve Value To stop Searching=> ");
        scanf("%d",&SRNO);

        if(SRNO <= 0 )
        {

            break;
        }
        for(i = 0; i < Count; i++)
        {
            if((i+101) == SRNO )
            {
                printf("\n\n %d Studnet Details Of Roll No %d Are => ", SRNO,SRNO);
                printf("\n Student Name =%s",std[i].Name);
                printf("\n student Mobile=%lld",std[i].Mob_No);
                printf("\n Student Percentage=%0.2f",std[i].Per);

                break;
            }
        }
        if(i == Count)
        {
            printf("\n Given Roll Number student Doesn't Exist in List");
        }
        printf("\n\n Enter Any Key to Search New Roll Number => ");
        getch();
        system("cls");
    }
     printf("\n Thanks For Using Our Application!!!");

    getch();
    return 0;
}
