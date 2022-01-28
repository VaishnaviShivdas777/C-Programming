///Call By Value                       Using GNU GCC Compiler......

#include<stdio.h>
#include<conio.h>
void ValueIncr(int);

int main()
{
    int Num = 0;

    printf("\n Enter a Value = ");
    scanf("%d",&Num);

    ValueIncr(Num);

    printf("\n\n Back Inside Main()\n Press Any Key to See New Value!!!");
    getch();

    printf("\n\n Value Of Given Number After Function Call = %d.",Num);

    getch();
    return 0;
}

void ValueIncr(int No)
{
    printf("\n Welcome Inside Function Value Received = %d.", No);

    No++;

    printf("\n Bye Bye Value Change By Function = %d.",No);

}
