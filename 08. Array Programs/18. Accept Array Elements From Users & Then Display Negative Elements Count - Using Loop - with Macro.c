// Accept Array Elements From Users & Then Display Negative Elements Count - Using Loop - with Macro.c...GNU GCC Compiler...

#include<stdio.h>
#include<conio.h>

#define size 5

int main()

{
    int i = 0, Neg_Count = 0, Bill[size] = {0};

    for(i = 0; i < size; i++)
    {

        printf("Enter Element Bill No %d =  ",(i + 1));
        scanf("%d", &Bill[i]);

        if( Bill[i] < 0)
        {
            Neg_Count++;
        }
    }
    getch();

    printf("\n\n********************************************************\n");

    printf("\n Negative Amounts Count is = %d", Neg_Count);

    printf("\n\n*********************************************************\n");

    getch();
    return 0;
}
