//program to print vowels... //GNU GCC Compiler

#include<stdio.h>
#include<conio.h>


int main()
{
    char ch;

    printf("Enter the Character= ");
    scanf("%c",&ch);

    if(ch=='a'|| ch=='e'||ch=='i'|| ch=='0'|| ch=='u')
        {
            printf("Vowels");
        }
     else
     {
         printf("Not Vowels");
     }

     printf("\nThanks!!!");

     getch();
     return 0;

}
