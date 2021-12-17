// Accept Array Elements From Users & Then Display S Even Elements- Using Loop - with Macro.c...GNU GCC Compiler...

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5

int main()

{
    int i = 0, E_Cnt = 0, Bill[size] = {0};

    for(i = 0; i < size; i++)
    {

        printf("Enter Element Bill No %d =  ",(i + 1));
        scanf("%d", &Bill[i]);

        if( (Bill[i]!=0) && (Bill[i]%2==0))
        {
            E_Cnt++;
        }
    }
    getch();

    printf("\n\n********************************************************\n");

    printf("\n Even Amounts Count is = %d", E_Cnt);

    printf("\n\n*********************************************************\n");

    getch();
    return 0;
}
