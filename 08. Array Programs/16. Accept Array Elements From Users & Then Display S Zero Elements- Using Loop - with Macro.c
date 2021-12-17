// Accept Array Elements From Users & Then Display Zero Elements- Using Loop - with Macro.c...GNU GCC Compiler...

#include<stdio.h>
#include<conio.h>

#define size 5

int main()

{
    int i = 0, Z_Cnt = 0, Bill[size] = {0};

    for(i = 0; i < size; i++)
    {

        printf("Enter Element Bill No %d =  ",(i + 1));
        scanf("%d", &Bill[i]);

        if( 0 == Bill[i])
        {
            Z_Cnt++;
        }
    }
    getch();

    printf("\n\n********************************************************\n");

    printf("\n Zero Amounts Count is = %d", Z_Cnt);

    printf("\n\n*********************************************************\n");

    getch();
    return 0;
}
