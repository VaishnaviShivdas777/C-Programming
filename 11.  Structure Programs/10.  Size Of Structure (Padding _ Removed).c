/// Size Of Structure (Padding _ Removed).c

#include<stdio.h>
#include<conio.h>

struct stud
{
    char City [8];
    char Nm[8];
    int R_No;
    long int Mob_No;
    float Per;
};
int main()
{
    struct stud std1;
    printf("\n Size Of Structure Obeject:%d",sizeof(std1));

    getch();
    return 0;
}
