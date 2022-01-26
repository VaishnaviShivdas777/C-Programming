/// Size Of Structure (Padding ).c

#include<stdio.h>
#include<conio.h>

struct stud1
{
    char Nm[7];
    char City[9];
    int R_No;
    long long Mob_No;
    float Per;
};
struct stud2
{
    int R_No;
    char Nm[7];
    long int Mob_No;
    char City[9];
    float Per;
};
struct stud3
{
    char Nm[9];
    int R_No;
    char City [9];
    long int Mob_No;
    float Per;
};

int main()
{
    struct stud1 std1;
    struct stud2 std2;
    struct stud3 std3;

    printf("\n Size Of 1st Structure Object : %d",sizeof(std1));
    printf("\n Size Of 2nd Structure Object : %d",sizeof(std2));
    printf("\n Size Of 3rd Structure Object : %d",sizeof(std3));

    getch();
    return 0;
}
