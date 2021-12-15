#include<stdio.h>
#include<conio.h>

 int main()

 {
     int sum=0,n;
     int a=0;
     int b=1;
      n=6;
     while(sum<=n)
     {
         printf("%d", sum);
         a=b;
         b=sum;
         sum=a+b;

     }
     getch();
     return 0;

 }
