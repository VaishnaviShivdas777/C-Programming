// Left Upper Triangular.c  Using GNU GCC compiler....

#include<stdio.h>
#include<conio.h>

    int main()
    {
        int i = 0, j = 0, x = 0;

        printf("Enter Row Or Column Values For Pattern: ");
        scanf("%d", &x);

      printf("\n\n******************Pattern****************************\n");

        for(i = 1; i <= x; i++)
        {
            for(j = 1; j <= x; j++)
            {
                if( i + j <= x+1 )
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

        printf("\n\n*****************Pattern****************************\n");

        getch();
        return 0;
    }
