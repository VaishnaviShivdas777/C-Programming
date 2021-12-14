// Accept Array Elements From Users & Then Display Them.c ...GNU GCC Compiler...

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main()
{
    int Values[5] = {0};

    printf("Enter Element No 1 = ");
    scanf("%d", &Values[0]);

    printf("Enter Element No 2 = ");
    scanf("%d", &Values[1]);

    printf("Enter Element No 3 = ");
    scanf("%d", &Values[2]);

    getch();
    system("cls");

    printf("\n Values Of 101 Element is = %d ", Values[0]);
    printf("\n Values Of 102 Element is = %d ", Values[1]);
    printf("\n Values Of 103 Element is = %d ", Values[2]);

    getch();
    return 0;

}
