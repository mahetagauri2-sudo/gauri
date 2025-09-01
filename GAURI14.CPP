#include<stdio.h>
#include<conio.h>
void main()
{
 float c,f;
  clrscr();
  printf("enter celsius:");
  scanf("%f",&c);
  f=(9/5)*c + 32;
  printf("fahrenhit=%.2f",f);
  getch();
}