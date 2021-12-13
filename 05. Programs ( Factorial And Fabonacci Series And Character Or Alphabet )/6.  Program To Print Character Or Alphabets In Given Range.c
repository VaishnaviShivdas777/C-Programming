//program to print character or alphabets in given range:-....//GNU GCC Compiler....

#include<conio.h>
#include<stdio.h>

int main()
{
  char Lch = '\0', Sch = '\0',Ech = '\0';
  printf("\n Enter Starting Character= ");

  Sch=getche();

  printf("\n Enter Ending Character= ");
  Ech=getche();

  if(Sch<Ech)
  {
      for(Lch=Sch;Lch<=Ech;Lch++)
      {
          printf("\n%c",Lch);
      }
  }
  else
  {
      for(Lch=Sch; Lch>=Ech;Lch--)
      {
          printf("\n%c",Lch);

      }
  }
  printf("Thanks!!!");

  getch();
  return 0;

}
