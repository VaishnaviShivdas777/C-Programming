///Call By Address                      Using GNU GCC Compiler......

#include<stdio.h>
#include<conio.h>
void OriginalIncr(int*);

int main()
{
    int Num = 0;

    printf("\n Enter a Value = ");
    scanf("%d",&Num);

    OriginalIncr(&Num);

    printf("\n\n Back Inside Main()\n Press Any Key to See New Value!!!");
    getch();

    printf("\n\n Value Of Given Number After Function Call = %d.",Num);

    getch();
    return 0;
}

void OriginalIncr(int *iP)

{
    printf("\n Welcome Inside Function Value Received = %d.", *iP);

    (*iP)++;

    printf("\n Bye Bye Value Change By Function = %d.",*iP);

}
