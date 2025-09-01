#include<stdio.h>
#include<conio.h>
void main()
{
 float r,a;
  clrscr();
  printf("enter radius:");
  scanf("%f",&r);
  a= 22 / 7 * r * r;
  printf("area=%.2f", a);
  getch();
}