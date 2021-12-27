// Pattern (Rev - Z ).c  Using GNU GCC compiler....

#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, r = 0, c = 0;

    printf("Enter Row Or Column Values For Pattern: ");
    scanf("%d%d", &r, &c);

    printf("\n\n*************Pattern****************************\n\n");

    for(i = 1; i <= r; i++)
    {
        for(j = 1; j <= c; j++)
        {
            if( i == 1 || i == r || i == j )
            {
                printf(" * ");
            }


            else
            {
                printf("   ");
            }
        }

            printf("\n");
    }

    printf("\n\n*************Pattern****************************\n");

    getch();
    return 0;
}
