#include<stdio.h>
#include<conio.h>
void main()
{
 float area,peri,length,breadth;
  clrscr();
  printf("enter length and breadth:");
  scanf("%f%f",&length,&breadth);
  area= length * breadth;
  peri= 2 * (length+breadth);
  printf("area=%.2f\n", area);
  printf("perimeter=%.2f");
  getch();
}