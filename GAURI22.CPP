#include<stdio.h>
#include<conio.h>
void main()
{
 float gross,net;
  clrscr();
  printf("enter gross salary:");
  scanf("%f",&gross);
  net= gross-(0.1*gross);
  printf("net salary=%.2f", net);
  getch();
}