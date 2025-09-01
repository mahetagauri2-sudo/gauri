#include<stdio.h>
#include<conio.h>
void main()
{
 float gross,allowance,deduction,net;
  clrscr();
  printf("enter gross salary:");
  scanf("%f%f",&gross);
  allowance= 0.1 * gross;
  deduction= 0.03 * gross;
  net= gross=allowance-deduction;
  printf("net salary=%.2f", net);
  getch();
}