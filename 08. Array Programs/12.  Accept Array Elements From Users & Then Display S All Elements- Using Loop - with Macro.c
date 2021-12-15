// Accept Array Elements From Users & Then Display S All Elements- Using Loop - with Macro.c...GNU GCC Compiler...

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5


int main()

{
    int i = 0, Max = 0, Bill[size] = {0};

    for(i = 0; i < size; i++)
    {

        printf("Enter Element No %d =  ",(i + 1));
        scanf("%d", &Bill[i]);

        if( (i == 0) || (Max < Bill[i]))
           {
               Max = Bill[i];
           }
    }

    getch();
    system("cls");

    printf("\n Bill Generated Today => \n");

    for(i = 0; i < size; i++)
    {
        printf("\n Amount In Bill No %d = %d", (i + 1001), Bill[i]);
    }

    printf("\n\n================================================\n");

    printf("\n Maximum Amount Received Today = %d", Max );

    printf("\n \n ==============================================\n");

    getch();
    return 0;
}
