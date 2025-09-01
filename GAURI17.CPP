#include<stdio.h>
#include<conio.h>
void main()
{
 float area,peri,side;
  clrscr();
  printf("enter side of a square:");
  scanf("%f",&side);
  area= side * side;
  peri= 4 * side;
  printf("area=%.2f\n", area);
  printf("perimeter=%.2f");
  getch();
}