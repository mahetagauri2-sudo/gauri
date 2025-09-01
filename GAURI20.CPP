#include<stdio.h>
#include<conio.h>
void main()
{
 float h,b,a;
  clrscr();
  printf("enter height,breadth:");
  scanf("%f%f",&h,&b);
  a= (h*b)/2;
  printf("area=%.2f", a);
  getch();
}