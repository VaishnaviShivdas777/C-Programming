// Accept Array Elements From users & Then Find Out Users Entered Elements Count.c...Using GNU GCC Compiler,,

#include<stdio.h>
#include<conio.h>
#define size 7

int main()

{
    int i = 0, No = 0, Cnt = 0, Value[size] = {0};

    for(i = 0; i < size; i++)
    {
        printf("\n Enter Value No %d = ",(i+1));
        scanf("%d", &Value[i]);

    }
    getch();

    printf("\n Enter Element Whose Count In Array Which To Display = ");
    scanf("%d", &No);

    for(i = 0; i < size; i++)
    {
        if(Value[i] == No)
        {
            Cnt++;
        }

    }

    printf("\n Count Of %d In Array is = %d", No,Cnt);
    getch();
    return 0;
}
