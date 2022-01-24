//Size Of Structure (Padding).c

#include<stdio.h>
#include<conio.h>

struct stud
{
    char Nm[8];
    char City [12];
    int R_No;
    float Per;
};

int main()
{
    struct stud std;

    printf("\n size Of structure Object: %d",sizeof(std));

    getch();
    return 0;
}
