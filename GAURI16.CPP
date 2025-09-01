#include<stdio.h>
#include<conio.h>
void main()
{
 float p,r,n,i;
  clrscr();
  printf("enter principal , rate , time:");
  scanf("%f%f%f",&p,&r,&n);
  i=p*r*n / 100;
  printf("interest=%.2f",i);
  getch();
}