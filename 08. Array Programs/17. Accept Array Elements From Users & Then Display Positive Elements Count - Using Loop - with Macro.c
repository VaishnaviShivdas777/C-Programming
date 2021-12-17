// Accept Array Elements From Users & Then Display Positive Elements Count - Using Loop - with Macro.c...GNU GCC Compiler...

#include<stdio.h>
#include<conio.h>

#define size 5

int main()

{
    int i = 0, Post_Count = 0, Bill[size] = {0};

    for(i = 0; i < size; i++)
    {

        printf("Enter Element Bill No %d =  ",(i + 1));
        scanf("%d", &Bill[i]);

        if( Bill[i] > 0)
        {
            Post_Count++;
        }
    }
    getch();

    printf("\n\n********************************************************\n");

    printf("\n Positive Amounts Count is = %d", Post_Count);

    printf("\n\n*********************************************************\n");

    getch();
    return 0;
}
