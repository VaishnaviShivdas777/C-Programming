// Accept Array Elements From Users & Then Display Odd Elements- Using Loop - with Macro.c...GNU GCC Compiler...

#include<stdio.h>
#include<conio.h>

#define size 5

int main()

{
    int i = 0, O_Cnt = 0, Bill[size] = {0};

    for(i = 0; i < size; i++)
    {

        printf("Enter Element Bill No %d =  ",(i + 1));
        scanf("%d", &Bill[i]);

        if( (Bill[i]!=1) && (Bill[i]%2==-1))
        {
            O_Cnt++;
        }
    }
    getch();

    printf("\n\n********************************************************\n");

    printf("\n Odd Amounts Count is = %d", O_Cnt);

    printf("\n\n*********************************************************\n");

    getch();
    return 0;
}
