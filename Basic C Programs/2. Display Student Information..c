// Program To Display Student Information.c //GNU GCC Compiler

#include<stdio.h>
#include<conio.h>
int main()
{
    int R_no=0;
    float Per='0.0';
    char Nm[80]=" ";

    printf("\n\t Enter student Roll no=");
    scanf("\n%d",&R_no);

    printf("\n\t Enter student name=");
    scanf("\n%s",&Nm);

    printf("\n\t Enter student percentage=");
    scanf("\n%f",&Per);

    printf("\n\t Student Information\n");

    printf("\n==================================================\n");

    printf(" \n\t Student Roll no=%d \n\t student Name=%s \n\tStudent Percentage=%f",R_no,Nm,Per);

    printf("\n\n=================================================\n");

    getch();
    return 0;
}
