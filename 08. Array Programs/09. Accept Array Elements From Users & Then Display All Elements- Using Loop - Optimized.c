// Accept Array Elements From Users & Then Display All Elements- Using Loop - Optimized.c  ...GNU GCC Compiler...

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main()

{
    int i = 0, Values[8] = {0};

    for(i = 0; i < 8; i++)
    {
        printf("Enter Element No %d =  ",(i + 100));
        scanf("%d", &Values[i]);
    }

    getch();
    system("cls");

    printf("\n\n Elements in Array are => \n\n ");

    for(i = 0; i < 8; i++)
    {
                printf("\n Values Of %d Element = %d ", (i + 10), Values[i]);
    }

    getch();
    return 0;

}
