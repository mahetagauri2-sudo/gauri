#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b,div;
  clrscr();
  printf("Enter No1:");
  scanf ("%d",&a);
  printf("Enter No2:");
  scanf("%d",&b);
  div = a/b;
  printf(" division=%.2d", div);
 getch ();
 return 0;
}