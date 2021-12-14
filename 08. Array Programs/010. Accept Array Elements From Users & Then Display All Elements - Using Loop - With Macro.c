// Accept Array Elements From Users & Then Display All Elements- Using Loop - with Macro.c...GNU GCC Compiler...

#include<stdio.h>
#include<conio.h>
#define size 8


int main()

{
    int i = 0, Bill[size] = {0};

    for(i = 0; i < size; i++)
    {
        printf("Enter Element No %d =  ",(i + 100));
        scanf("%d", &Bill[i]);
    }

    getch();
    system("cls");

    printf("\n\n Elements in Array are => \n\n ");

    for(i = 0; i < size; i++)
    {
                printf("\n Values Of %d Element = %d ", (i + 1001), Bill[i]);
    }

    getch();
    return 0;

}
