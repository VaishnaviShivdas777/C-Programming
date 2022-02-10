/*
        4th Type Of Function
        Accepts Something Returns Something

        Syntax => DataType<FunctionName>(DT1 Arg1, DT2 Arg2, DT3 Arg 3,.......DT_N Arg_N);
        Example => int Add (int No1, int No2);           Using GNU GCC Compiler.......
 */

 #include<stdio.h>
 #include<conio.h>
 int Add(int, int);

 int main()
 {
     int No1 = 0, No2 = 0, Res = 0;

     printf("\n Enter 2 Numbers For Addition => ");
     scanf("%d%d",&No1,&No2);

     Res = Add(No1,No2);

     printf("\n Addition of %d & %d is = %d. ", No1, No2, Res);

     getch();
     return 0;
 }

 int Add(int N1,int N2)
 {
     int Sum = 0;

     Sum = N1 + N2;

     return Sum;
 }
